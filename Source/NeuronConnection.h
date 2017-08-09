#pragma once
// NeuronSDK includes

// Voir si mettre un buffer
#include "../JuceLibraryCode/JuceHeader.h"

#include "DataType.h"
#include "NeuronDataReader.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <string>
#include <vector>

#define NUM_FINGER_JOINTS 10
#pragma comment(lib, "NeuronDataReader.lib")
enum FingerType
{
	RightThumb = 17,
	RightIndex = 21,
	RightMiddle = 25,
	RightRing = 29,
	RightPinky = 33,
	LeftThumb = 40,
	LeftIndex = 44,
	LeftMiddle = 48,
	LeftRing = 52,
	LeftPinky = 56
	
};

enum FingerIndex
{
	LeftThumbIndex = 0,
	LeftIndexIndex = 1,
	LeftMiddleIndex = 2,
	LeftRingIndex = 3,
	LeftPinkyIndex = 4,
	RightThumbIndex = 5,
	RightIndexIndex = 6,
	RightMiddleIndex = 7,
	RightRingIndex = 8,
	RightPinkyIndex = 9,
	NumFingerJoints = NUM_FINGER_JOINTS
};
class NeuronConnection:
	public ChangeBroadcaster,
	public Thread
{

public:
	// ctor & dtor
	NeuronConnection();
	~NeuronConnection();

	// Connect to the Neuron
	bool Connect();

	// Kill the connection
	void KillConnection();

	// Callback functions to receive the BVH data
	static void __stdcall BvhFrameDataReceived(void*, SOCKET_REF, BvhDataHeader*, float*);
	// Callback functions to receive the Calculation data
	static void __stdcall CalcFrameDataReceive(void*, SOCKET_REF, CalcDataHeader*, float*);

	// Display information about the received BVH data
	void ShowBvhBoneInfo(SOCKET_REF, BvhDataHeader*, float*);
	// Display information about the received Calc data
	void ShowBvhCalcInfo(SOCKET_REF, CalcDataHeader*, float*);

	void InitializeBvhHeader();

	void FinalizeBvh();
	void InitializeBvh(BvhDataHeader*, float*);
	void BvhExport();
	void BvhFrameInformations();
	void BvhMotionCopy();
	DatagramSocket& getUdpSocket() { return udp; };
	void setPort(int portNum) { port = portNum; }
	void setIp(String ipAddress) { ip = ipAddress; }
	bool* getActiveFingerArray() { return &activeFingerArray[0]; };
	std::vector<float> dataVector;

private:
	// Socket used to connect to the Neuron
	SOCKET_REF sockTCPRef;

	// See below for more information
	enum {
		BVHBoneCount = 59,
		CalcBoneCount = 21,
	};
	void* listener;
	std::ofstream m_outfile;
	bool m_firstWrite;
	double m_initialFrame, m_currentFrame;
	int m_perJoint;
	int m_dataCount;

	BvhDataHeader* dataHeader;
	float* bvhData;

	std::map<int, std::string> m_bones;

	//JUCE related variables
	DatagramSocket udp;
	bool dataReceived = false;
	char dataArray[512];
	void run() override;
	int port=8888;
	String ip = "127.0.0.1";
	bool activeFingerArray[NUM_FINGER_JOINTS];
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(NeuronConnection)
};

/*

SKELETON DATA SEQUENCE IN ARRAY :

----------------------
Hips				0
----------------------
RightUpLeg			1
----------------------
RightLeg			2
----------------------
RightFoot			3
----------------------
LeftUpLeg			4
----------------------
LeftLeg				5
----------------------
LeftFoot			6
----------------------
Spine				7
----------------------
Spine1				8
----------------------
Spine2				9
----------------------
Spine3				10
----------------------
Neck				11
----------------------
Head				12
----------------------
Right Shoulder		13
----------------------
RightArm			14
----------------------
RightForeArm		15
----------------------
RightHand			16
----------------------
RightHandThumb1		17
----------------------
RightHandThumb2		18
----------------------
RightHandThumb3		19
----------------------
RightInHandIndex	20
----------------------
RightHandIndex1		21
----------------------
RightHandIndex2		22
----------------------
RightHandIndex3		23
----------------------
RightInHandMiddle	24
----------------------
RightHandMiddle1	25
----------------------
RightHandMiddle2	26
----------------------
RightHandMiddle3	27
----------------------
RightInHandRing		28
----------------------
RightHandRing1		29
----------------------
RightHandRing2		30
----------------------
RightHandRing3		31
----------------------
RightInHandPinky	32
----------------------
RightHandPinky1		33
----------------------
RightHandPinky2		34
----------------------
RightHandPinky3		35
----------------------
Left Shoulder		36
----------------------
LeftArm				37
----------------------
LeftForeArm			38
----------------------
LeftHand			39
----------------------
LeftHandThumb1		40
----------------------
LeftHandThumb2		41
----------------------
LeftHandThumb3		42
----------------------
LeftInHandIndex		43
----------------------
LeftHandIndex1		44
----------------------
LeftHandIndex2		45
----------------------
LeftHandIndex3		46
----------------------
LeftInHandMiddle	47
----------------------
LeftHandMiddle1		48
----------------------
LeftHandMiddle2		49
----------------------
LeftHandMiddle3		50
----------------------
LeftInHandRing		51
----------------------
LeftHandRing1		52
----------------------
LeftHandRing2		53
----------------------
LeftHandRing3		54
----------------------
LeftInHandPinky		55
----------------------
LeftHandPinky1		56
----------------------
LeftHandPinky2		57
----------------------
LeftHandPinky3		58
----------------------

*/

/*
BONE SEQUENCE TABLE (CALC) :

0. Hips
1. RightUpLeg
2. RightLeg
3. RightFoot
4. LeftUpLeg
5. LeftLeg
6. LeftFoot
7. RightShoulder
8. RightArm
9. RightForeArm
10. RightHand
11. LeftShoulder
12. LeftArm
13. LeftForeArm
14. LeftHand
15. Head
16. Neck
17. Spine3
18. Spine2
19. Spine1
20. Spine

*/

