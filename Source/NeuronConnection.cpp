#include "NeuronConnection.h"
using namespace std;

NeuronConnection::NeuronConnection():Thread("udp") {
	m_firstWrite = true;
	m_initialFrame = -1;
	m_dataCount = -1;
	bvhData = new float[10];

}


NeuronConnection::~NeuronConnection() {
	stopThread(3000);
}

bool NeuronConnection::Connect() {
	
	// If a connection has already been established
	if (sockTCPRef) {
		// close socket
		BRCloseSocket(sockTCPRef);
		sockTCPRef = 0;
	}

	// Try to connect to the Neuron
	sockTCPRef = BRConnectTo("127.0.0.1", 7001);
	
	// If the connection is ok
	if(sockTCPRef) {

		//calback register used to receive data
		// (we assign BvhFrameDataReceived to the FrameData callback,
		//  and CalcFrameDataReceive to the CalculationData callback)
		BRRegisterFrameDataCallback(this, BvhFrameDataReceived);

		// Unused
		// TODO: check if it works if we delete this
		BRRegisterCalculationDataCallback(this, CalcFrameDataReceive);

		return true;
	}
		
	// Failed
	return false;
}

void NeuronConnection::KillConnection() {
	BRCloseSocket(sockTCPRef);
	FinalizeBvh();
}

void __stdcall NeuronConnection::BvhFrameDataReceived(void* customedObj, SOCKET_REF sender, BvhDataHeader* header, float* data) {
	NeuronConnection* pthis = (NeuronConnection*)customedObj;
	pthis->ShowBvhBoneInfo(sender, header, data);
}

// Called, but unused
void __stdcall NeuronConnection::CalcFrameDataReceive(void* customedObj, SOCKET_REF sender, CalcDataHeader* header, float* data) {
	NeuronConnection* pthis = (NeuronConnection*)customedObj;
	pthis->ShowBvhCalcInfo(sender, header, data);
}

void NeuronConnection::ShowBvhBoneInfo(SOCKET_REF sender, BvhDataHeader* header, float* data) {
	if (m_initialFrame == -1)
		m_initialFrame = header->FrameIndex;
	
	if(m_dataCount == -1)
		m_dataCount = header->DataCount;
	bvhData = data;
	dataHeader = header;
	dataReceived = true;
	//BvhExport(header, data);
}

// Unused
void NeuronConnection::ShowBvhCalcInfo(SOCKET_REF sender, CalcDataHeader* header, float* data) {
	// Cool callback bro
}

void NeuronConnection::BvhExport() {
	
	// Initial connection :
	// We get the initial offsets and the hierarchy
	if (dataReceived) {
		m_firstWrite = false;

		m_perJoint = 3;

		if (dataHeader && dataHeader->WithDisp)
			m_perJoint = 6;

	}

	m_outfile.open("tmp.bvh", std::ios::out | std::ios::app);
	int offset = 5;
	if (dataReceived) {
		m_currentFrame = dataHeader->FrameIndex;

		if(m_perJoint == 3) {
			// Root (Why ?)
			//m_outfile << data[0] << " " << data[1] << " " << data[2] << " ";

			for (unsigned int i= BVHBoneCount-offset-1; i<BVHBoneCount-offset ; i++) {

				// data[	3       +  (i * 3)   +      0]
				//		root offset | bone index | rotation index

				//m_outfile << data[(i * 3) + 0] << " ";
				//m_outfile << data[(i * 3) + 1] << " ";
				//m_outfile << data[(i * 3) + 2] << " ";
				dataVector.clear();
				dataVector.push_back(bvhData[(i * 3) + 0]);
				dataVector.push_back(bvhData[(i * 3) + 1]);
				dataVector.push_back(bvhData[(i * 3) + 2]);
				char* dataArray = new char[10];
				for (int i = 0;i < dataVector.size();i++) {
					dataArray[i] = dataVector[i];
				}
				if (udp.waitUntilReady(false, 10)) {
					udp.write(ip, port, dataArray, 3);
				}
			}
		}

		else if (m_perJoint == 6){
			for (unsigned int i = BVHBoneCount-offset-1; i<BVHBoneCount-offset; i++) {
				/*m_outfile << data[(i * 6) + 0] << " ";
				m_outfile << data[(i * 6) + 1] << " ";
				m_outfile << data[(i * 6) + 2] << " ";
				m_outfile << data[(i * 6) + 3] << " ";
				m_outfile << data[(i * 6) + 4] << " ";
				m_outfile << data[(i * 6) + 5] << " ";*/
				dataVector.clear();
				dataVector.push_back(bvhData[(i * 6) + 0]);
				dataVector.push_back(bvhData[(i * 6) + 1]);
				dataVector.push_back(bvhData[(i * 6) + 2]);
				dataVector.push_back(bvhData[(i * 6) + 3]);
				dataVector.push_back(bvhData[(i * 6) + 4]);
				dataVector.push_back(bvhData[(i * 6) + 5]);
				string data = "";

				data += activeFingerArray[LeftThumbIndex] ? (to_string(bvhData[LeftThumb * 6 + 5]) + " ") : "Null ";
				data += activeFingerArray[LeftIndexIndex] ? (to_string(bvhData[LeftIndex * 6 + 5]) + " ") : "Null ";
				data += activeFingerArray[LeftMiddleIndex] ? (to_string(bvhData[LeftMiddle * 6 + 5]) + " ") : "Null ";
				data += activeFingerArray[LeftRingIndex] ? (to_string(bvhData[LeftRing * 6 + 5]) + " ") : "Null ";
				data += activeFingerArray[LeftPinkyIndex] ? (to_string(bvhData[LeftPinky * 6 + 5]) + " ") : "Null ";


				//for (int i = 0;i < dataVector.size();i++) {
				//	data += to_string(dataVector[i]) + " ";
				//}

				strcpy(dataArray, data.c_str());
				if (udp.waitUntilReady(false, 512)) {
					udp.write(ip, port, dataArray, 512);
				}
			}
		}

		m_outfile.close();
	}

	else {
		std::cout << "Failed to open file tmp.bvh" << std::endl;
	}
	
}
void NeuronConnection::run() {
	while (!threadShouldExit()) {
		const MessageManagerLock lock(Thread::getCurrentThread());

		if (lock.lockWasGained()) {
			BvhExport();
		}
	}
}

/***********************************************************************
	This method calls 3 methods one after another. They're used to 
	fill the final bvh file. Due to the very nature of CPP files access, 
	we are forced to use a tmp bvh file so that :

		- We add template informations
		- We add frame number and interframe time
		- We copy the motions informations (position and orientation)

	We can't go back in the middle of the file to add frames n?and
	interframe time without breaking the whole file.

***********************************************************************/
void NeuronConnection::FinalizeBvh() {
	InitializeBvhHeader();
	BvhFrameInformations();
	BvhMotionCopy();
}

// Copy the template of the Neuron bvh header (see appendix A in the doc)
void NeuronConnection::InitializeBvhHeader() {
	m_outfile.open("test.bvh");

	if(m_outfile.is_open()) {
		std::ifstream bvh_header_template("bvh_header_template.bvh");

		if(bvh_header_template.is_open()) {
			
			std::string line;

			// Special case : we need to eliminate the XYZ position
			if (m_perJoint == 3) {
				bool isRoot = true;

				while (std::getline(bvh_header_template, line)) {
					// For the root, we leave the 6 cahnnels
					if (!strncmp(line.c_str(), "JOINT", strlen("JOINT")))
						isRoot = false;

					// If it's the channel line AND it's not the root
					// We write a modified channel line
					if (!strncmp(line.c_str(), "CHANNELS", strlen("CHANNELS")) && !isRoot)
						m_outfile << "CHANNELS 3 Yrotation Xrotation Zrotation\n";

					// Else, just ouput the line
					else
						m_outfile << line << '\n';
				}
			}

			else {
				while (std::getline(bvh_header_template, line))
					m_outfile << line << "\n";
			}
			bvh_header_template.close();

		}

		else {
			std::cout << "Error opening bvh_header_template.bvh" << std::endl;
		}
		
		m_outfile.close();
	}
	
	else {
		std::cout << "Error opening test.bvh" << std::endl;
	}
	
	
}

// Add informations about frame number and interframe time
void NeuronConnection::BvhFrameInformations() {
	m_outfile.open("test.bvh", std::ios_base::app);

	if(!m_outfile.fail()) {

		m_outfile << "Frames: " << m_currentFrame - m_initialFrame << "\n";
		if ((m_dataCount / m_perJoint) < 18)
			m_outfile << "Frame Time: " << 1.0 / 120 << "\n";
		else
			m_outfile << "Frame Time: " << 1.0 / 60 << "\n";
	}

	m_outfile.close();
}

// Copy the motion data (position and orientation)
void NeuronConnection::BvhMotionCopy() {
	m_outfile.open("test.bvh", std::ios_base::app);

	std::ifstream motionInfo("tmp.bvh");
	std::string line;

	while(std::getline(motionInfo, line)) {
		m_outfile << line << "\n";
	}

	motionInfo.close();
	m_outfile.close();

	// Delete the file
	std::remove("tmp.bvh");
}