/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.1.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUI::GUI ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (ipEditor = new TextEditor ("new text editor"));
    ipEditor->setMultiLine (false);
    ipEditor->setReturnKeyStartsNewLine (false);
    ipEditor->setReadOnly (false);
    ipEditor->setScrollbarsShown (true);
    ipEditor->setCaretVisible (true);
    ipEditor->setPopupMenuEnabled (true);
    ipEditor->setColour (TextEditor::textColourId, Colours::white);
    ipEditor->setColour (TextEditor::backgroundColourId, Colours::grey);
    ipEditor->setText (TRANS("127.0.0.1"));

    addAndMakeVisible (portEditor = new TextEditor ("new text editor"));
    portEditor->setMultiLine (false);
    portEditor->setReturnKeyStartsNewLine (false);
    portEditor->setReadOnly (false);
    portEditor->setScrollbarsShown (true);
    portEditor->setCaretVisible (true);
    portEditor->setPopupMenuEnabled (true);
    portEditor->setColour (TextEditor::textColourId, Colours::white);
    portEditor->setColour (TextEditor::backgroundColourId, Colours::grey);
    portEditor->setText (TRANS("8888"));

    addAndMakeVisible (portLabel = new Label ("ip_label",
                                              TRANS("Port")));
    portLabel->setFont (Font (11.00f, Font::plain).withTypefaceStyle ("Regular"));
    portLabel->setJustificationType (Justification::centredLeft);
    portLabel->setEditable (false, false, false);
    portLabel->setColour (Label::backgroundColourId, Colour (0x00ffffff));
    portLabel->setColour (Label::textColourId, Colours::white);
    portLabel->setColour (TextEditor::textColourId, Colours::black);
    portLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleButton = new ToggleButton ("new toggle button"));
    toggleButton->setButtonText (String());
    toggleButton->addListener (this);
    toggleButton->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton2 = new ToggleButton ("new toggle button"));
    toggleButton2->setButtonText (String());
    toggleButton2->addListener (this);
    toggleButton2->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton3 = new ToggleButton ("new toggle button"));
    toggleButton3->setButtonText (String());
    toggleButton3->addListener (this);
    toggleButton3->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton4 = new ToggleButton ("new toggle button"));
    toggleButton4->setButtonText (String());
    toggleButton4->addListener (this);
    toggleButton4->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton5 = new ToggleButton ("new toggle button"));
    toggleButton5->setButtonText (String());
    toggleButton5->addListener (this);
    toggleButton5->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton6 = new ToggleButton ("new toggle button"));
    toggleButton6->setButtonText (String());
    toggleButton6->addListener (this);
    toggleButton6->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton7 = new ToggleButton ("new toggle button"));
    toggleButton7->setButtonText (String());
    toggleButton7->addListener (this);
    toggleButton7->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText (TRANS("Calibrate"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0xff00a2e8));

    addAndMakeVisible (ipLabel = new Label ("ip_label",
                                            TRANS("IP")));
    ipLabel->setFont (Font (11.00f, Font::plain).withTypefaceStyle ("Regular"));
    ipLabel->setJustificationType (Justification::centredLeft);
    ipLabel->setEditable (false, false, false);
    ipLabel->setColour (Label::backgroundColourId, Colour (0x00ffffff));
    ipLabel->setColour (Label::textColourId, Colours::white);
    ipLabel->setColour (TextEditor::textColourId, Colours::black);
    ipLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleButton8 = new ToggleButton ("new toggle button"));
    toggleButton8->setButtonText (String());
    toggleButton8->addListener (this);
    toggleButton8->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton9 = new ToggleButton ("new toggle button"));
    toggleButton9->setButtonText (String());
    toggleButton9->addListener (this);
    toggleButton9->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton10 = new ToggleButton ("new toggle button"));
    toggleButton10->setButtonText (String());
    toggleButton10->addListener (this);
    toggleButton10->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton11 = new ToggleButton ("new toggle button"));
    toggleButton11->setButtonText (String());
    toggleButton11->addListener (this);
    toggleButton11->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton12 = new ToggleButton ("new toggle button"));
    toggleButton12->setButtonText (String());
    toggleButton12->addListener (this);
    toggleButton12->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton13 = new ToggleButton ("new toggle button"));
    toggleButton13->setButtonText (String());
    toggleButton13->addListener (this);
    toggleButton13->setColour (ToggleButton::textColourId, Colours::black);

    addAndMakeVisible (toggleButton14 = new ToggleButton ("new toggle button"));
    toggleButton14->setButtonText (String());
    toggleButton14->addListener (this);
    toggleButton14->setColour (ToggleButton::textColourId, Colours::black);

    cachedImage_hands2_png2_1 = ImageCache::getFromMemory (hands2_png2, hands2_png2Size);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 350);


    //[Constructor] You can add your own custom stuff here..
	ipEditor->addListener(this);
	portEditor->addListener(this);
	NCon.addChangeListener(this);
	if (NCon.Connect()) {
		//std::cout << "Connection succesful." << std::endl << std::endl;
		textButton->setButtonText("Connected");
	}

	String port = portEditor->getText();
	String ip = ipEditor->getText();
	int portInt = std::stoi(port.toStdString());
	NCon.setPort(portInt);
	NCon.setIp(ip);

	NCon.startThread();
    //[/Constructor]
}

GUI::~GUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    ipEditor = nullptr;
    portEditor = nullptr;
    portLabel = nullptr;
    toggleButton = nullptr;
    toggleButton2 = nullptr;
    toggleButton3 = nullptr;
    toggleButton4 = nullptr;
    toggleButton5 = nullptr;
    toggleButton6 = nullptr;
    toggleButton7 = nullptr;
    textButton = nullptr;
    ipLabel = nullptr;
    toggleButton8 = nullptr;
    toggleButton9 = nullptr;
    toggleButton10 = nullptr;
    toggleButton11 = nullptr;
    toggleButton12 = nullptr;
    toggleButton13 = nullptr;
    toggleButton14 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
	NCon.KillConnection();
    //[/Destructor]
}

//==============================================================================
void GUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::grey);

    {
        int x = 14, y = 86, width = proportionOfWidth (0.9225f), height = proportionOfHeight (0.7314f);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (Colours::black);
        g.drawImageWithin (cachedImage_hands2_png2_1,
                           x, y, width, height,
                           RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize,
                           false);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    ipEditor->setBounds (104, 16, 96, 16);
    portEditor->setBounds (248, 16, 64, 16);
    portLabel->setBounds (216, 16, 32, 16);
    toggleButton->setBounds (65, 146, 32, 24);
    toggleButton2->setBounds (66, 183, 32, 24);
    toggleButton3->setBounds (98, 136, 32, 24);
    toggleButton4->setBounds (132, 152, 32, 24);
    toggleButton5->setBounds (159, 176, 32, 24);
    toggleButton6->setBounds (32, 223, 32, 24);
    toggleButton7->setBounds (19, 197, 32, 24);
    textButton->setBounds (152, 62, 96, 24);
    ipLabel->setBounds (72, 16, 32, 16);
    toggleButton8->setBounds (309, 146, 32, 24);
    toggleButton9->setBounds (307, 183, 32, 24);
    toggleButton10->setBounds (276, 136, 32, 24);
    toggleButton11->setBounds (242, 152, 32, 24);
    toggleButton12->setBounds (215, 176, 32, 24);
    toggleButton13->setBounds (342, 223, 32, 24);
    toggleButton14->setBounds (355, 197, 32, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GUI::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton)
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }
    else if (buttonThatWasClicked == toggleButton2)
    {
        //[UserButtonCode_toggleButton2] -- add your button handler code here..
        //[/UserButtonCode_toggleButton2]
    }
    else if (buttonThatWasClicked == toggleButton3)
    {
        //[UserButtonCode_toggleButton3] -- add your button handler code here..
        //[/UserButtonCode_toggleButton3]
    }
    else if (buttonThatWasClicked == toggleButton4)
    {
        //[UserButtonCode_toggleButton4] -- add your button handler code here..
        //[/UserButtonCode_toggleButton4]
    }
    else if (buttonThatWasClicked == toggleButton5)
    {
        //[UserButtonCode_toggleButton5] -- add your button handler code here..
        //[/UserButtonCode_toggleButton5]
    }
    else if (buttonThatWasClicked == toggleButton6)
    {
        //[UserButtonCode_toggleButton6] -- add your button handler code here..
        //[/UserButtonCode_toggleButton6]
    }
    else if (buttonThatWasClicked == toggleButton7)
    {
        //[UserButtonCode_toggleButton7] -- add your button handler code here..
        //[/UserButtonCode_toggleButton7]
    }
    else if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == toggleButton8)
    {
        //[UserButtonCode_toggleButton8] -- add your button handler code here..
        //[/UserButtonCode_toggleButton8]
    }
    else if (buttonThatWasClicked == toggleButton9)
    {
        //[UserButtonCode_toggleButton9] -- add your button handler code here..
        //[/UserButtonCode_toggleButton9]
    }
    else if (buttonThatWasClicked == toggleButton10)
    {
        //[UserButtonCode_toggleButton10] -- add your button handler code here..
        //[/UserButtonCode_toggleButton10]
    }
    else if (buttonThatWasClicked == toggleButton11)
    {
        //[UserButtonCode_toggleButton11] -- add your button handler code here..
        //[/UserButtonCode_toggleButton11]
    }
    else if (buttonThatWasClicked == toggleButton12)
    {
        //[UserButtonCode_toggleButton12] -- add your button handler code here..
        //[/UserButtonCode_toggleButton12]
    }
    else if (buttonThatWasClicked == toggleButton13)
    {
        //[UserButtonCode_toggleButton13] -- add your button handler code here..
        //[/UserButtonCode_toggleButton13]
    }
    else if (buttonThatWasClicked == toggleButton14)
    {
        //[UserButtonCode_toggleButton14] -- add your button handler code here..
        //[/UserButtonCode_toggleButton14]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void GUI::changeListenerCallback(ChangeBroadcaster* source) {
	String data = String(NCon.dataVector.at(5));
	char dataArray[10];
	for (int i = 0;i < data.length();i++) {
		dataArray[i] = data[i];
	}
	textButton->setButtonText(data);


}
void GUI::textEditorReturnKeyPressed(TextEditor& editor) {
	if (&editor == ipEditor) {
		String ip = ipEditor->getText();
		NCon.setIp(ip);
	}
	if (&editor == portEditor) {
		String port = portEditor->getText();
		int portInt = std::stoi(port.toStdString());
		NCon.setPort(portInt);
	}
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUI" componentName="" parentClasses="public Component, public ChangeListener, public TextEditorListener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="400"
                 initialHeight="350">
  <BACKGROUND backgroundColour="ff808080">
    <IMAGE pos="14 86 92.25% 73.143%" resource="hands2_png2" opacity="1"
           mode="2"/>
  </BACKGROUND>
  <TEXTEDITOR name="new text editor" id="8a93bdfa4cdc1891" memberName="ipEditor"
              virtualName="" explicitFocusOrder="0" pos="104 16 96 16" textcol="ffffffff"
              bkgcol="ff808080" initialText="127.0.0.1" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="c4048a2008659223" memberName="portEditor"
              virtualName="" explicitFocusOrder="0" pos="248 16 64 16" textcol="ffffffff"
              bkgcol="ff808080" initialText="8888" multiline="0" retKeyStartsLine="0"
              readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <LABEL name="ip_label" id="9d25259ff7fd3032" memberName="portLabel"
         virtualName="" explicitFocusOrder="0" pos="216 16 32 16" bkgCol="ffffff"
         textCol="ffffffff" edTextCol="ff000000" edBkgCol="0" labelText="Port"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11" kerning="0" bold="0" italic="0"
         justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="69df99e233e54dd7" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="65 146 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="491f66a831ace156" memberName="toggleButton2"
                virtualName="" explicitFocusOrder="0" pos="66 183 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="8f9faaba7e144160" memberName="toggleButton3"
                virtualName="" explicitFocusOrder="0" pos="98 136 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="4201e0ca1f39f5e5" memberName="toggleButton4"
                virtualName="" explicitFocusOrder="0" pos="132 152 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="3826a2dc2af4e635" memberName="toggleButton5"
                virtualName="" explicitFocusOrder="0" pos="159 176 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="b8ea36679632b858" memberName="toggleButton6"
                virtualName="" explicitFocusOrder="0" pos="32 223 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="aab54a25c4951c53" memberName="toggleButton7"
                virtualName="" explicitFocusOrder="0" pos="19 197 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TEXTBUTTON name="new button" id="813fd2e0656b385f" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="152 62 96 24" bgColOff="ff00a2e8"
              buttonText="Calibrate" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="ip_label" id="43edd1cf0d9dbba0" memberName="ipLabel" virtualName=""
         explicitFocusOrder="0" pos="72 16 32 16" bkgCol="ffffff" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="IP" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="11" kerning="0" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="3aaf95ad34ea0a43" memberName="toggleButton8"
                virtualName="" explicitFocusOrder="0" pos="309 146 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="e686879a1470d2fb" memberName="toggleButton9"
                virtualName="" explicitFocusOrder="0" pos="307 183 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="ea537e695fb03797" memberName="toggleButton10"
                virtualName="" explicitFocusOrder="0" pos="276 136 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="16a1d3642bd6faaf" memberName="toggleButton11"
                virtualName="" explicitFocusOrder="0" pos="242 152 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="a61bc3d79b38ae72" memberName="toggleButton12"
                virtualName="" explicitFocusOrder="0" pos="215 176 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="ca2e94788497a19c" memberName="toggleButton13"
                virtualName="" explicitFocusOrder="0" pos="342 223 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="aa0b3d2d4a1469ff" memberName="toggleButton14"
                virtualName="" explicitFocusOrder="0" pos="355 197 32 24" txtcol="ff000000"
                buttonText="" connectedEdges="0" needsCallback="1" radioGroupId="0"
                state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: hands_png, 19407, "../../../../Pictures/hands/hands.png"
static const unsigned char resource_GUI_hands_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,113,0,0,1,0,8,6,0,0,0,69,249,70,192,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,4,103,65,77,
65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,75,100,73,68,65,84,120,94,237,157,5,120,22,199,214,199,15,30,35,4,9,238,82,40,148,150,186,83,187,53,28,18,44,33,
4,167,80,191,212,110,149,222,122,111,41,85,104,113,11,238,165,254,221,219,150,91,87,40,133,66,241,32,9,238,196,225,219,255,50,111,111,26,94,217,217,157,125,223,221,205,249,61,79,158,188,179,73,96,103,
206,57,255,157,29,57,83,230,180,6,49,12,195,48,174,164,172,248,206,48,12,195,184,16,22,113,134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,
226,12,195,48,46,134,69,156,97,24,198,197,176,136,51,12,195,184,24,22,113,134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,
134,69,156,97,24,198,197,176,136,51,12,195,184,24,22,113,134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,31,148,28,1,210,135,222,69,151,180,107,71,117,106,215,162,232,232,104,42,87,182,44,
21,20,22,210,158,189,251,232,151,95,215,208,230,173,91,233,163,101,243,196,111,51,140,115,184,173,107,111,106,214,164,9,93,120,126,91,170,85,51,145,42,148,47,79,69,167,78,81,78,78,14,101,101,239,161,31,
87,173,162,233,19,223,18,191,205,132,3,22,241,48,147,54,120,36,165,244,76,166,74,21,43,138,43,127,229,148,22,16,107,127,95,79,159,126,254,57,173,88,52,91,92,101,152,200,211,41,41,133,110,190,254,122,106,
115,110,43,42,171,117,60,252,145,151,159,79,179,23,44,164,153,147,199,137,43,140,221,240,112,74,152,105,211,234,220,128,2,14,16,28,231,181,62,151,46,214,122,234,12,227,36,224,147,240,205,64,2,14,224,219,
240,113,38,124,176,136,135,153,218,181,106,138,79,129,41,83,166,12,197,199,85,22,37,134,113,6,240,73,248,102,40,140,248,56,163,14,22,241,48,83,189,106,85,241,41,56,21,42,148,23,159,24,198,25,24,245,73,
163,62,206,168,129,69,60,140,116,78,238,71,81,209,81,162,20,156,10,21,42,136,79,12,227,12,140,250,36,124,28,190,206,132,7,22,241,48,82,57,46,142,202,26,120,29,5,229,203,115,79,156,113,22,70,125,18,62,
14,95,103,194,3,139,120,24,145,113,236,114,229,202,137,79,12,227,12,100,124,146,69,60,124,176,136,135,145,216,152,104,241,41,52,229,203,179,136,51,206,66,198,39,101,124,157,177,6,139,120,24,137,137,137,
49,52,187,15,202,115,79,156,113,24,70,125,18,62,14,95,103,194,3,139,120,24,193,238,76,163,240,112,10,227,52,100,124,82,198,215,25,107,176,136,135,145,232,40,99,43,83,0,111,163,101,156,134,140,79,202,248,
58,99,13,22,241,48,18,85,169,146,248,20,154,114,101,185,39,206,56,11,25,159,148,241,117,198,26,165,42,119,202,237,93,123,83,227,70,13,168,110,157,186,20,163,189,238,157,60,121,146,214,111,220,72,25,83,
223,17,191,97,47,147,166,100,80,211,198,141,68,41,56,7,15,29,162,228,164,206,162,196,48,145,103,225,162,247,168,154,193,141,60,91,182,109,167,33,131,82,69,201,94,82,7,222,65,173,90,180,208,199,225,79,
230,228,208,238,172,221,180,109,251,14,250,176,148,36,145,43,53,34,62,96,216,221,212,225,230,191,81,245,106,213,254,156,92,68,213,139,138,78,209,194,101,203,105,194,219,99,244,107,118,50,125,230,124,106,
80,175,174,40,5,231,240,145,35,212,163,123,71,81,98,152,200,179,120,201,251,148,80,165,138,40,5,103,199,174,221,148,158,214,75,148,236,99,216,157,163,40,185,107,23,42,87,174,236,95,226,250,192,193,131,
244,193,167,255,71,211,38,188,169,95,243,50,165,98,56,229,182,174,125,40,185,75,103,170,81,189,250,95,86,135,224,51,150,77,181,58,167,133,184,98,31,72,225,89,81,98,23,230,169,83,60,42,206,56,11,25,159,
132,175,195,231,237,6,177,139,24,46,25,215,136,117,196,60,98,223,235,148,10,17,143,142,170,68,81,65,38,90,42,199,197,138,79,246,225,123,96,24,5,41,105,25,198,73,200,248,100,73,97,181,139,96,177,139,152,
71,236,123,157,210,33,226,209,81,154,67,137,130,31,176,28,42,28,79,236,50,101,140,55,55,139,56,227,52,100,124,82,198,215,205,130,152,13,182,148,17,49,143,216,247,58,165,164,39,14,67,6,86,113,204,164,151,
47,103,127,83,148,45,107,188,103,82,88,84,32,62,217,207,237,221,250,80,114,202,64,26,121,239,67,244,216,83,207,211,83,207,188,76,35,238,121,128,58,37,133,103,98,138,9,13,108,1,155,192,54,176,17,108,5,
155,193,118,225,66,198,39,101,124,221,44,136,217,224,171,96,202,148,138,165,142,165,66,196,163,42,5,55,36,158,230,193,18,221,171,66,166,39,83,80,80,40,62,217,79,203,22,205,105,232,128,116,125,130,232,
166,235,218,211,117,87,95,165,125,238,74,3,82,250,208,125,15,62,17,150,177,77,198,63,104,123,216,0,182,128,77,96,27,216,8,182,130,205,96,187,112,33,227,147,225,120,147,68,204,134,218,84,20,42,246,189,
64,233,232,137,199,68,7,29,159,211,123,226,18,227,213,102,192,140,121,97,97,145,40,133,38,39,55,87,124,178,159,90,137,103,206,74,44,14,218,11,203,201,58,223,118,11,157,211,188,153,184,202,132,27,180,61,
108,0,91,148,244,97,216,12,182,11,23,50,62,9,95,183,123,225,27,98,54,88,79,28,237,133,216,247,58,165,104,56,37,48,48,118,76,180,253,185,30,242,242,140,7,193,177,227,39,196,39,251,9,182,246,23,109,35,179,
170,134,81,11,218,190,164,120,23,199,232,186,109,21,200,248,164,140,175,155,5,49,27,172,109,0,15,167,120,132,96,43,83,124,196,198,218,187,66,5,167,215,31,56,116,88,148,66,115,240,208,65,241,201,94,240,
186,158,144,96,108,237,47,227,60,96,187,112,13,119,201,248,36,124,29,62,111,39,70,98,214,72,236,187,157,82,50,38,30,248,96,98,31,225,72,157,249,243,170,213,148,185,99,39,229,228,228,4,125,213,60,122,236,
24,109,207,220,33,74,246,2,39,143,137,10,94,247,112,172,52,96,252,19,170,237,97,187,112,9,21,124,18,190,25,8,248,52,124,27,62,14,95,183,27,35,49,107,36,246,221,78,169,216,177,249,214,248,41,212,186,229,
57,162,228,159,255,172,252,47,61,59,250,31,162,100,31,232,53,197,68,71,105,129,23,173,79,202,192,201,42,84,168,168,143,239,157,42,58,69,199,79,156,160,253,7,14,208,226,185,211,196,95,216,75,202,128,225,
52,48,53,37,104,134,186,15,62,249,63,122,229,197,209,162,196,132,147,7,30,25,77,29,110,249,155,40,157,77,81,81,17,77,205,152,77,179,167,189,43,174,216,75,143,62,3,244,141,52,113,90,47,184,108,185,178,
250,216,119,65,65,62,229,230,229,235,2,158,155,155,67,39,115,114,109,239,133,131,199,71,191,64,55,182,191,86,148,252,179,110,195,31,116,215,136,65,162,228,77,74,133,136,79,156,60,139,154,53,105,44,74,
254,249,246,135,31,233,209,135,239,19,165,210,131,190,84,173,107,23,81,242,207,7,159,124,170,137,248,211,162,196,132,147,7,30,121,74,19,241,155,69,201,63,72,27,49,238,245,151,69,169,244,240,252,75,175,
209,21,151,94,34,74,254,217,188,117,27,13,29,236,237,243,62,75,197,123,114,37,3,175,84,165,53,137,125,213,132,4,241,137,113,43,165,213,134,70,98,214,72,236,187,29,207,247,196,49,124,49,48,181,47,37,214,
168,33,174,248,103,211,150,173,52,108,72,154,40,169,7,247,209,162,89,83,170,87,167,174,246,42,26,67,56,116,22,45,95,84,84,72,249,218,235,232,137,19,39,233,208,225,195,148,189,119,159,158,193,48,28,175,
163,224,213,215,198,83,187,243,219,138,146,127,222,251,232,99,26,251,242,51,162,196,132,147,251,31,122,130,58,223,118,171,40,249,103,213,175,107,232,239,247,141,16,37,123,129,31,99,69,76,237,154,137,250,
195,35,86,243,229,138,21,42,82,185,114,229,9,11,69,10,11,11,233,184,230,203,187,178,118,211,198,205,91,108,245,227,9,147,102,82,243,166,77,68,201,63,251,246,239,167,169,25,115,194,22,79,145,192,243,61,
113,44,65,170,96,96,137,92,168,77,3,86,65,246,183,110,29,59,208,101,23,95,72,173,91,181,212,215,255,182,108,209,76,255,220,174,109,91,186,250,138,203,169,227,173,183,208,224,180,84,253,43,109,240,72,241,
151,246,82,213,192,18,181,211,156,140,43,98,24,105,123,35,54,84,1,124,210,231,159,240,85,248,44,124,23,62,12,95,134,79,227,51,124,28,190,110,52,227,161,89,140,196,44,98,63,212,50,68,183,227,125,17,215,
190,74,110,100,241,71,165,138,21,168,99,143,190,162,164,158,186,117,106,135,116,38,252,28,95,72,151,123,222,185,173,196,85,251,192,150,237,132,42,241,162,20,152,34,206,227,18,49,140,180,61,108,24,142,
237,247,240,73,95,42,103,35,190,12,159,183,11,196,42,98,54,20,136,125,111,75,120,41,16,241,211,154,9,49,116,17,10,108,170,176,243,52,157,196,234,213,197,39,99,84,77,176,191,119,133,131,49,42,85,12,157,
229,13,43,32,152,200,96,164,237,97,67,216,210,110,100,125,82,214,231,101,64,172,26,217,132,166,15,91,122,92,198,75,193,112,138,86,73,3,121,81,202,99,92,207,198,173,247,85,37,55,212,96,9,151,221,196,197,
197,82,5,3,189,25,140,219,51,145,193,72,219,195,134,176,165,221,200,250,164,172,207,203,128,88,69,204,134,2,177,31,226,165,193,245,120,94,196,129,145,17,93,172,211,46,103,83,18,44,188,234,198,197,197,
137,146,49,162,194,144,7,185,74,124,124,200,58,99,222,59,156,201,184,152,191,130,182,15,181,246,0,54,132,45,237,70,214,39,225,243,118,13,243,160,206,70,242,29,149,134,217,28,239,139,184,22,0,249,249,249,
162,16,24,56,133,93,59,19,113,116,148,108,47,6,155,111,236,30,231,172,102,96,105,26,4,132,135,83,34,7,218,222,200,2,50,35,182,180,2,124,49,216,134,48,127,192,231,225,251,118,128,88,53,210,233,210,99,223,
64,251,185,25,207,139,248,7,75,231,210,127,86,126,73,7,14,30,14,26,12,123,247,239,167,220,188,60,81,82,75,249,114,229,165,87,191,148,213,156,180,188,100,208,200,98,100,85,3,38,214,10,10,185,39,30,41,208,
246,70,38,55,237,94,161,2,95,132,79,202,0,159,135,239,219,1,98,21,49,27,8,196,58,98,30,177,15,13,240,50,165,234,180,251,110,189,210,41,33,33,158,98,99,98,244,109,239,152,185,70,79,231,208,225,67,180,59,
43,219,54,99,247,77,31,78,67,250,247,211,103,236,141,130,45,204,19,166,207,164,101,243,103,136,43,234,49,114,112,115,94,94,62,77,153,149,65,11,50,38,139,43,76,56,233,153,58,152,6,245,75,13,185,105,197,
238,131,137,187,246,234,79,195,210,211,164,58,35,144,150,73,51,102,209,156,233,246,164,4,232,160,189,29,96,5,12,38,92,241,150,128,7,30,182,253,159,56,121,146,14,31,62,74,75,231,79,23,191,233,109,74,149,
136,71,138,33,35,238,167,148,158,73,162,100,140,156,156,92,154,60,115,150,173,57,84,150,45,255,136,42,135,24,171,199,195,100,162,246,48,89,106,227,195,132,9,76,55,77,60,135,26,16,207,99,199,143,83,215,
46,183,137,146,122,144,51,101,112,90,63,237,62,228,146,109,205,94,176,136,38,141,31,43,74,140,29,120,126,56,165,36,88,95,218,57,41,149,58,37,165,208,237,221,236,91,23,94,28,51,43,7,202,148,45,99,235,105,
67,221,123,247,167,74,21,67,207,238,99,98,205,174,97,38,38,52,104,123,35,19,203,176,37,108,106,23,250,42,15,19,71,174,133,99,213,12,64,44,35,166,17,219,118,238,247,112,34,158,239,137,227,149,235,178,75,
46,166,70,13,234,235,189,78,188,118,249,134,53,112,132,20,50,176,157,56,153,67,7,15,29,166,63,54,109,166,9,111,143,209,127,166,18,156,137,136,35,181,100,192,132,12,182,11,207,155,57,81,92,81,11,118,223,
245,239,211,59,228,100,213,174,172,108,74,75,77,22,37,38,18,204,204,88,72,245,66,108,156,193,176,224,140,185,243,104,230,228,113,226,138,90,122,167,13,213,211,87,84,52,240,224,47,206,191,191,88,73,207,
61,253,168,40,169,99,216,157,163,244,29,162,213,170,38,232,41,105,145,9,212,215,233,129,164,161,61,240,118,178,125,199,78,250,254,199,159,60,61,46,238,249,158,120,173,154,53,169,253,85,87,106,34,222,64,
207,249,128,165,88,241,149,43,235,95,216,22,156,88,35,145,26,55,108,72,23,93,112,62,221,114,227,245,218,83,60,69,252,165,58,48,6,47,11,30,52,118,30,54,139,71,119,65,97,65,208,201,94,176,255,64,224,201,
35,38,60,132,178,1,108,120,198,150,226,130,13,192,23,101,230,116,124,152,241,253,80,32,70,17,171,136,89,196,46,98,24,177,236,139,107,196,56,98,29,49,143,216,135,6,120,25,207,139,184,145,109,229,62,208,
83,71,114,42,213,200,174,76,1,136,23,51,65,99,148,89,83,198,209,244,217,243,104,197,71,31,211,127,191,249,150,86,255,182,150,182,101,102,210,225,35,71,40,191,160,64,159,36,194,247,205,91,182,137,191,96,
34,5,108,80,220,38,176,17,108,5,155,193,118,176,33,108,9,155,218,5,124,209,140,59,154,241,253,80,32,70,67,205,229,20,71,70,3,220,136,231,135,83,30,127,234,121,186,209,224,80,6,154,98,206,66,76,196,188,
38,174,168,225,221,137,51,244,12,134,50,32,217,254,244,57,115,40,99,234,59,226,74,248,208,243,82,84,170,164,191,146,46,155,63,83,92,101,34,73,215,94,105,250,208,87,94,94,30,189,191,120,142,184,26,62,82,
7,222,65,233,125,251,26,218,96,83,28,100,50,28,62,84,237,88,253,144,17,247,81,223,228,36,195,157,156,255,124,177,146,158,181,97,72,199,41,120,190,39,46,115,116,21,156,34,190,178,250,167,118,140,137,163,
223,224,159,118,78,108,6,3,34,177,120,206,52,22,112,7,1,91,192,38,145,16,112,96,118,251,186,25,223,15,5,98,84,230,45,213,235,231,108,122,94,196,43,72,78,196,84,174,172,118,54,189,67,119,249,201,32,29,
205,73,237,26,78,193,164,16,242,136,191,248,175,55,232,177,167,94,160,187,238,123,132,250,15,185,147,122,244,73,167,91,187,132,231,208,93,198,60,176,17,108,5,155,193,118,176,33,108,9,155,194,182,118,160,
251,162,9,127,132,239,35,6,84,34,27,163,178,26,224,54,188,223,19,151,52,96,108,140,92,142,147,80,224,21,216,72,42,220,146,32,92,236,18,241,11,207,111,171,31,4,113,217,197,23,209,77,215,93,75,221,59,119,
164,180,222,189,104,72,255,254,52,98,240,0,154,54,99,30,189,50,118,28,221,117,255,35,250,234,30,38,178,192,6,176,5,108,2,219,192,70,176,21,108,6,219,193,134,176,37,108,10,219,218,1,124,209,140,55,194,
247,67,173,128,146,69,54,70,101,53,192,109,120,94,196,101,123,193,170,79,189,47,95,174,172,161,67,41,74,130,160,41,107,131,136,35,7,70,141,234,213,68,233,12,248,191,16,104,72,112,132,217,253,134,245,235,
233,51,255,221,59,117,164,250,245,234,137,223,98,34,5,108,0,91,192,38,176,13,108,4,91,193,102,37,31,244,176,173,29,57,119,224,139,102,58,21,240,125,196,128,74,100,99,212,212,155,176,139,240,254,112,138,
129,116,149,197,193,113,83,42,41,91,214,92,79,28,148,41,163,62,119,10,242,43,27,61,113,5,65,171,186,61,24,121,96,3,163,2,10,219,26,201,159,47,139,89,95,132,239,35,6,84,34,235,147,178,26,224,54,74,129,
136,203,57,180,234,37,81,250,112,138,228,61,0,4,109,153,50,234,23,14,85,175,122,38,207,132,81,204,244,190,24,181,200,216,0,182,133,141,85,3,95,52,227,11,240,125,25,127,51,130,108,140,154,137,63,55,225,
105,17,199,88,162,108,47,24,167,164,224,48,88,85,224,85,206,108,138,219,178,138,157,31,84,175,38,23,224,88,102,200,68,22,89,27,200,218,216,8,102,125,17,190,175,114,56,3,177,105,228,52,170,226,64,3,188,
60,183,227,105,17,71,174,7,217,87,203,242,229,53,167,83,248,250,101,228,28,192,112,82,67,242,200,44,59,68,124,200,200,191,211,19,79,191,72,163,159,121,153,30,122,244,105,61,65,24,214,65,187,13,220,51,
238,29,117,64,93,80,39,212,77,53,178,54,144,181,177,221,168,140,1,196,38,98,84,6,104,128,153,188,47,110,193,219,34,174,189,254,201,190,74,225,213,175,162,66,167,115,218,120,28,14,186,149,33,63,191,64,
124,82,67,231,228,84,234,112,243,77,116,195,181,215,80,251,171,175,162,219,254,118,19,245,77,238,65,35,6,13,164,137,147,103,82,250,208,187,196,111,58,23,220,35,238,21,247,140,123,71,29,80,23,212,9,117,
67,29,85,34,107,3,89,27,219,141,202,24,64,108,202,14,207,64,3,188,60,44,232,121,17,151,237,137,195,65,176,91,81,21,42,31,8,86,193,78,76,217,115,15,11,10,212,138,120,213,132,4,170,18,95,89,148,206,0,59,
225,149,187,89,147,38,154,8,222,44,174,58,23,220,35,238,245,204,80,217,95,197,1,117,67,29,85,34,107,3,216,216,73,153,252,84,198,0,98,83,86,196,245,158,56,139,184,59,193,73,36,178,99,226,56,69,219,72,138,
86,163,24,57,145,59,16,170,51,34,84,40,95,81,95,158,102,20,95,98,37,149,212,171,83,87,11,168,192,110,103,215,113,94,42,9,118,143,168,27,234,168,18,35,137,202,138,3,27,195,214,42,177,226,139,86,98,160,
36,136,77,196,168,12,250,10,25,147,243,82,110,192,211,34,174,159,195,39,41,226,120,98,199,40,92,161,98,246,4,125,4,205,169,162,208,199,114,201,16,31,31,167,189,90,26,15,168,194,162,34,61,135,139,74,26,
132,88,119,94,164,184,206,118,16,234,30,67,213,81,22,216,0,182,48,10,108,12,91,171,4,190,104,86,200,205,198,128,63,16,155,178,189,106,104,128,217,197,5,110,192,211,34,142,30,147,145,195,84,75,18,19,171,
78,196,205,158,147,169,139,248,105,181,130,86,67,114,172,20,19,106,69,69,234,206,215,68,210,254,218,181,18,69,201,63,200,241,238,116,66,221,35,234,136,186,170,2,54,144,158,220,84,60,46,14,95,52,43,226,
42,207,138,53,19,155,208,0,55,188,225,153,197,211,34,110,118,211,67,92,172,186,94,140,217,177,56,8,69,145,226,94,112,245,18,59,53,67,129,30,103,97,161,58,81,77,168,146,16,50,133,104,209,41,181,117,182,
131,80,247,136,58,162,174,170,128,13,100,223,80,100,109,29,10,248,162,217,7,172,202,241,104,179,177,105,86,11,220,128,167,69,220,236,34,255,184,88,117,73,176,204,14,15,32,96,242,242,213,30,139,86,189,
170,172,136,163,7,168,174,39,94,175,78,157,144,147,82,118,44,105,84,77,168,123,68,29,81,87,85,152,177,131,172,173,67,1,95,52,43,226,42,135,200,204,198,166,151,55,252,120,90,196,205,166,114,85,41,226,250,
33,11,249,249,162,100,28,36,255,63,153,147,43,74,214,193,102,7,163,219,237,125,64,172,10,21,6,96,189,186,161,133,77,245,24,188,29,24,185,71,35,117,53,10,108,32,251,112,131,173,85,110,112,129,47,194,39,
101,129,239,35,6,84,97,54,54,35,149,214,57,28,120,250,80,136,1,67,239,166,254,125,229,119,95,238,217,187,151,250,246,233,33,74,214,233,222,39,157,98,163,99,244,164,69,120,173,43,95,190,2,85,40,95,78,255,
142,37,83,152,172,137,141,141,214,190,107,191,163,149,177,49,97,203,182,237,244,228,163,234,210,138,226,16,221,65,105,105,82,201,131,246,31,56,64,189,122,118,21,37,107,96,167,221,144,254,105,250,153,136,
193,216,184,121,43,13,31,234,236,141,63,239,78,156,73,45,154,53,17,37,255,224,204,214,73,51,102,210,71,203,230,137,43,214,152,191,96,153,212,38,30,156,27,59,101,230,76,90,50,111,134,184,98,157,127,62,
63,134,154,54,110,68,167,79,157,214,15,112,62,153,115,146,78,156,200,209,190,231,232,135,85,20,22,226,244,33,76,134,23,104,95,133,148,155,155,71,39,180,223,89,50,119,186,248,23,172,51,103,238,98,83,199,
173,205,152,51,143,166,77,124,83,148,188,133,167,69,188,255,224,59,105,64,170,252,122,217,227,39,142,83,151,206,183,137,146,55,232,155,62,92,19,209,126,82,227,147,89,217,123,40,53,37,73,148,172,161,31,
180,219,47,37,228,114,179,245,27,255,160,145,195,7,137,146,51,25,247,238,20,106,213,226,28,81,242,15,122,173,83,103,205,86,118,208,117,198,236,69,84,167,118,45,81,10,13,194,122,210,140,89,52,103,250,187,
226,138,55,88,254,222,71,166,198,197,167,101,204,161,25,147,223,22,37,111,225,233,225,20,179,107,156,177,181,183,83,82,63,81,242,6,232,1,203,78,48,169,92,35,142,94,164,145,53,251,5,5,206,31,78,49,114,
143,168,171,202,237,239,178,182,128,173,67,189,245,184,13,196,164,217,148,24,170,247,59,56,9,79,139,120,78,110,174,169,241,104,4,128,170,13,10,131,134,223,75,163,30,126,146,238,125,224,49,26,58,242,126,
234,211,127,24,117,78,238,167,239,168,67,222,103,223,23,134,27,236,60,85,7,167,127,203,162,114,183,102,93,173,23,105,228,33,130,215,112,167,99,228,30,81,87,212,89,21,102,108,97,198,230,70,129,175,194,
103,139,251,48,124,26,190,13,31,135,175,195,231,225,251,136,1,21,32,38,101,59,34,0,26,0,45,240,42,158,63,40,121,240,29,247,82,163,134,13,169,106,149,42,122,10,75,125,92,186,28,210,99,254,239,249,133,141,
20,69,226,36,241,227,199,79,208,174,172,108,250,117,237,90,250,112,233,92,241,27,230,184,103,212,163,212,229,246,219,206,154,84,193,44,127,14,198,17,53,231,194,132,21,102,239,177,14,23,223,115,243,114,
105,239,190,253,180,106,205,111,180,104,246,20,241,23,214,25,251,198,187,116,193,121,109,68,201,24,235,255,216,72,35,239,24,40,74,214,152,52,101,22,53,109,220,88,148,2,243,195,207,63,211,195,15,220,35,
74,206,228,165,87,222,160,75,47,186,72,148,2,179,101,219,54,26,50,72,205,27,221,184,119,166,82,171,115,90,136,146,49,112,26,254,253,247,12,23,37,235,36,165,12,162,118,109,207,163,154,137,53,40,170,82,
148,30,67,216,9,169,239,199,40,119,102,167,51,98,204,159,191,47,255,240,35,122,99,204,243,226,138,57,240,160,56,191,77,27,170,87,167,54,197,197,197,234,162,142,141,60,197,215,161,35,134,10,139,206,140,
199,35,198,14,29,57,66,219,51,51,105,242,59,175,139,223,240,30,158,23,241,72,242,238,164,153,212,162,105,240,9,48,127,192,36,152,84,156,57,111,1,173,88,148,33,174,90,99,250,204,249,212,160,158,220,118,
240,53,107,215,209,189,119,15,19,37,243,160,199,54,98,240,192,144,107,196,193,151,223,124,75,79,62,246,128,40,57,147,127,62,247,10,93,115,229,21,162,20,152,99,199,143,211,248,201,83,149,76,110,190,254,
230,4,106,219,166,181,40,25,99,199,174,221,148,158,214,75,148,172,209,41,41,149,210,122,247,212,135,136,204,244,134,55,110,217,74,195,135,184,47,83,165,27,240,244,112,74,36,193,171,101,237,196,224,187,
19,3,129,32,65,176,160,199,161,130,142,221,83,52,1,149,95,154,101,102,73,153,63,98,99,98,40,90,123,3,50,66,94,158,252,240,87,184,49,122,143,168,51,234,174,2,51,182,128,205,97,123,21,192,23,205,10,56,64,
44,56,41,41,151,151,240,188,136,195,113,58,246,72,161,78,218,23,190,227,171,179,214,171,232,146,220,143,186,246,76,163,110,189,210,245,239,24,203,195,235,154,42,42,199,157,57,7,209,44,8,150,154,38,31,
2,37,137,138,142,210,151,46,202,162,106,76,28,66,102,244,136,46,44,93,115,58,70,239,17,117,86,37,226,102,108,1,155,195,246,42,128,47,154,21,112,128,88,64,76,168,2,177,138,152,45,30,195,136,105,196,182,
47,206,255,23,243,222,126,120,120,122,56,5,134,198,152,116,157,90,53,233,52,225,184,51,237,34,170,171,125,56,227,144,56,140,24,121,33,206,12,97,96,124,26,235,93,15,30,62,76,153,59,118,210,154,117,235,
76,143,139,15,189,243,239,212,55,201,218,90,243,31,127,249,133,30,26,117,183,40,153,39,109,240,72,74,239,219,71,122,195,195,202,175,191,161,209,143,63,40,74,230,65,112,221,208,254,90,125,76,60,46,200,
121,145,176,193,194,101,239,209,248,55,94,22,87,156,201,136,123,30,162,228,174,157,131,214,227,248,137,147,250,152,248,103,43,255,75,203,23,206,18,63,49,207,232,103,255,69,237,175,186,82,148,140,129,177,
232,233,115,230,210,204,201,227,196,21,243,188,60,230,77,186,228,194,11,69,201,28,115,22,45,166,137,111,191,42,74,114,32,150,219,182,110,77,13,27,212,167,106,9,9,127,166,164,133,13,124,49,172,181,188,
222,246,190,24,215,191,105,215,178,246,236,213,199,228,173,206,113,57,21,79,247,196,163,181,94,72,243,102,77,41,62,62,94,207,243,140,20,157,248,140,239,24,159,197,235,102,108,108,172,254,61,190,114,156,
158,135,185,182,38,248,173,91,158,67,183,222,116,131,165,173,211,42,122,29,149,42,169,233,69,69,71,201,103,126,3,120,160,169,0,34,134,9,182,41,179,50,104,174,22,200,159,127,249,21,253,190,97,163,62,238,
239,219,9,136,7,40,14,63,56,122,236,168,248,43,231,130,123,196,189,234,247,172,221,59,234,128,186,160,78,168,27,234,136,186,162,206,42,4,28,152,177,5,108,14,219,171,64,133,47,90,137,9,196,34,98,18,177,
137,24,69,172,34,102,139,199,48,98,186,120,140,235,49,175,125,134,6,64,11,188,138,167,69,60,46,38,214,84,22,67,31,86,146,251,195,193,172,162,234,88,43,236,64,253,242,219,239,40,115,231,78,58,113,242,36,
21,20,22,234,61,22,189,215,18,132,92,197,203,178,150,205,159,65,19,199,141,165,127,62,249,48,221,57,98,160,190,27,244,221,169,211,104,170,38,120,51,230,206,167,153,243,230,211,129,131,135,196,111,59,23,
220,35,238,21,247,140,123,71,29,80,23,212,9,117,67,29,81,87,149,132,178,133,207,158,176,45,108,12,91,195,230,176,189,10,84,248,162,149,152,176,18,139,208,0,104,129,87,241,244,112,202,176,59,71,81,159,
164,238,162,36,207,183,63,252,72,143,62,124,159,40,201,49,230,181,241,116,225,249,109,69,201,28,155,182,108,165,97,138,103,244,177,82,4,227,180,232,201,36,214,168,161,247,112,240,138,234,47,39,69,198,
130,133,52,121,252,107,162,196,68,146,193,35,238,163,212,158,201,162,244,63,142,159,56,161,15,253,237,202,202,162,125,251,247,211,161,195,71,116,17,87,181,221,223,199,132,73,51,169,185,137,149,86,197,
249,229,215,53,52,234,190,17,162,36,199,243,47,189,70,87,92,122,137,40,201,51,119,209,18,154,240,246,24,81,242,22,158,22,241,187,255,254,40,117,239,212,65,148,228,89,255,199,38,26,121,199,0,81,146,227,
157,9,211,232,156,230,205,69,201,28,91,183,111,167,193,3,213,158,215,232,15,8,59,206,101,108,220,176,33,53,172,95,151,106,38,214,196,144,34,205,152,51,151,22,91,204,123,129,137,165,187,134,13,214,123,
67,71,143,29,215,115,138,64,108,178,181,30,98,246,222,125,180,96,214,36,241,155,238,166,103,191,33,84,187,102,162,246,85,83,127,56,98,183,36,122,158,69,167,78,209,91,19,38,211,251,139,103,139,223,52,71,
143,62,233,212,191,111,31,125,156,119,239,190,189,90,79,123,55,109,203,204,212,222,10,14,42,23,108,127,76,158,154,65,77,26,53,18,37,115,252,177,105,19,221,49,204,92,60,141,123,103,26,181,58,199,124,60,
45,89,241,1,189,249,170,181,117,234,78,197,211,34,62,234,145,167,168,227,45,230,207,108,204,222,187,71,19,178,249,166,130,100,198,172,5,84,223,98,38,187,173,219,51,53,17,183,190,68,12,219,149,145,248,
10,227,170,75,13,188,230,119,232,158,162,137,248,105,77,120,230,136,43,230,193,219,80,239,30,221,206,26,147,135,219,97,99,198,145,163,71,244,135,213,134,141,155,105,231,238,44,250,120,185,253,130,164,
2,236,88,132,125,91,182,104,166,139,91,149,248,42,250,166,23,127,245,156,183,120,169,146,94,32,86,89,156,62,93,134,62,88,18,250,129,208,173,87,127,125,242,15,137,176,86,44,178,62,46,63,121,234,108,173,
158,13,69,201,28,176,111,255,126,61,69,201,56,232,100,244,239,219,75,123,64,154,223,1,251,254,39,159,210,152,23,159,22,37,111,225,233,49,113,171,137,224,171,196,199,75,175,232,240,161,226,136,55,21,233,
51,31,125,242,121,26,154,222,143,6,246,235,75,67,7,164,209,172,140,5,244,204,243,99,104,192,208,123,2,158,62,3,145,80,33,224,32,80,74,86,136,93,249,242,229,244,55,0,172,122,192,176,87,93,69,235,226,195,
1,238,21,247,140,123,71,29,80,151,64,147,199,170,210,210,194,38,129,4,28,182,132,77,97,91,216,24,182,214,109,174,217,30,62,96,21,21,190,104,54,38,240,127,35,22,173,192,135,66,184,20,217,67,146,75,130,
173,197,102,28,15,61,7,43,107,196,125,200,175,39,249,43,73,125,7,210,181,87,94,161,207,218,35,113,16,86,42,212,173,83,135,174,190,226,114,74,237,157,76,131,250,165,210,155,111,79,162,71,30,127,134,250,
15,185,147,186,245,238,47,254,82,13,232,173,214,173,93,59,160,184,21,7,203,197,172,218,43,156,224,94,67,29,112,1,80,119,180,129,234,188,56,176,21,108,6,219,193,134,176,37,108,10,219,194,198,176,53,108,
14,219,195,7,224,11,86,176,234,139,0,49,129,216,144,5,49,136,88,180,130,155,124,75,22,111,247,196,13,4,89,48,16,128,152,0,148,5,7,213,170,56,87,16,121,197,173,208,164,113,35,170,24,96,85,1,198,168,113,
112,64,155,115,91,209,45,55,222,160,175,35,135,16,96,2,235,174,251,30,166,14,221,173,111,144,192,240,66,205,26,53,68,41,52,42,79,17,178,27,153,123,69,27,20,207,213,99,22,216,4,182,129,141,96,43,216,12,
182,131,13,97,203,64,43,177,224,3,240,5,43,88,245,69,128,152,144,57,168,219,7,98,208,72,71,32,24,42,207,249,116,26,158,22,113,35,61,165,80,152,201,4,135,157,114,42,94,63,173,158,208,221,184,65,3,195,206,
143,223,195,10,21,172,64,232,222,185,19,221,112,237,181,226,39,230,65,47,16,137,138,140,128,177,99,85,219,252,195,1,238,213,232,116,18,218,0,109,97,21,216,4,182,129,141,96,43,25,219,194,23,172,160,226,
180,120,196,132,153,157,195,42,178,49,170,208,2,167,194,34,30,2,51,57,153,245,211,121,44,246,28,64,89,139,189,31,44,29,52,3,238,189,94,221,218,150,211,16,212,170,105,124,171,246,41,77,16,221,144,134,214,
7,238,21,247,108,4,180,1,218,194,10,176,5,108,98,214,175,204,250,130,15,171,190,8,112,239,230,68,220,122,94,116,22,113,151,82,174,156,245,113,176,170,9,242,189,128,138,202,122,226,230,3,7,39,233,88,57,
43,20,105,62,173,214,1,203,237,140,130,221,143,110,56,95,211,7,238,21,247,108,20,153,182,240,7,108,97,37,199,61,124,1,62,97,22,43,190,232,67,175,131,9,17,55,19,131,37,81,161,5,78,197,227,34,110,189,122,
85,170,196,75,143,15,71,85,50,119,250,72,73,202,25,76,26,229,15,28,229,101,109,245,168,200,53,99,1,153,222,167,46,138,38,79,83,143,4,184,87,153,135,142,213,158,248,25,91,152,55,8,124,65,230,120,183,146,
88,241,197,226,200,198,6,98,15,49,104,21,21,90,224,84,60,46,226,214,29,15,99,153,21,42,200,61,197,163,163,162,148,244,92,172,56,158,209,147,116,2,113,250,180,38,168,22,158,1,200,38,39,51,150,137,137,66,
183,77,108,202,220,47,218,2,109,98,26,205,22,186,77,76,2,95,176,114,210,144,10,17,196,61,32,54,100,64,236,169,152,79,224,225,20,151,162,98,70,26,167,149,200,30,204,26,37,233,168,129,176,178,182,181,150,
133,141,17,0,227,189,70,199,124,253,17,19,19,35,21,124,103,134,83,220,211,19,199,189,202,12,167,160,45,208,38,102,177,106,15,96,197,39,84,173,179,150,141,13,196,30,98,208,42,188,58,197,165,168,26,151,
150,157,29,151,237,109,4,194,108,239,1,91,221,19,45,30,210,91,84,88,164,167,50,53,75,157,90,181,164,218,31,19,133,110,235,137,203,76,196,162,45,208,38,102,129,45,96,19,43,192,39,224,27,102,80,213,147,
149,141,13,196,158,138,183,90,21,90,224,84,60,45,226,170,28,175,186,228,236,184,170,158,184,217,251,79,168,18,111,121,179,17,178,225,89,201,201,81,95,242,40,56,8,98,56,114,128,168,2,247,42,187,154,70,
182,77,138,131,255,15,54,177,2,124,2,190,97,6,85,177,36,27,27,178,177,23,8,85,247,239,68,60,45,226,216,10,173,2,108,171,150,33,38,90,205,105,46,232,129,152,217,116,99,117,37,4,192,9,225,102,209,151,195,
73,110,161,199,161,209,110,67,246,158,209,38,86,150,109,90,177,137,15,51,190,1,31,84,209,27,6,178,177,33,27,123,129,80,165,5,78,196,211,34,174,234,21,170,170,100,111,32,54,86,141,136,151,213,2,199,204,
118,225,218,22,94,219,125,228,23,152,63,16,2,245,151,205,255,172,66,160,194,141,236,61,163,77,172,248,134,21,155,248,48,227,27,240,65,248,162,10,100,235,47,27,123,129,224,225,20,151,98,244,92,199,80,96,
114,5,103,248,25,5,25,3,85,128,222,143,236,250,86,228,166,168,149,104,124,171,123,32,242,242,204,239,158,172,161,245,158,100,183,87,151,6,17,71,155,160,109,204,98,197,38,62,224,27,178,249,75,224,131,170,
122,226,50,177,129,152,147,93,84,16,8,85,90,224,68,188,61,156,162,104,109,40,206,133,140,150,72,132,133,227,162,148,128,158,184,228,242,70,204,228,87,173,106,253,21,212,138,168,226,149,93,54,232,221,112,
64,114,73,100,239,25,109,98,101,168,75,197,131,14,190,33,187,218,67,247,65,85,34,46,17,27,136,57,196,158,10,84,105,129,19,49,92,51,60,189,205,100,32,139,20,200,26,167,234,233,139,87,49,163,43,84,186,246,
234,175,44,99,26,118,58,203,46,237,194,217,130,49,10,206,19,180,34,170,241,241,242,103,41,230,229,185,175,39,110,230,158,205,180,141,15,21,15,58,248,6,124,68,6,248,160,130,93,247,58,136,13,196,136,17,
16,115,170,134,65,160,5,170,51,73,218,137,140,222,134,108,33,52,248,19,79,191,72,169,189,146,41,173,79,47,122,124,244,243,212,165,103,63,241,83,231,82,78,243,58,149,187,180,140,46,217,139,87,176,49,225,
79,202,148,213,122,16,114,34,46,147,175,36,24,86,68,21,201,255,79,230,156,20,37,99,224,72,49,183,33,123,207,104,19,180,141,89,84,60,232,224,27,178,187,71,117,31,84,144,0,203,135,209,24,177,186,76,182,
56,208,2,104,130,211,129,182,66,99,161,181,208,92,104,111,168,135,94,64,203,224,169,53,242,222,135,41,189,111,111,186,225,218,107,244,179,24,177,206,245,198,246,237,41,37,57,153,6,143,184,95,252,166,51,
65,214,53,149,227,96,181,106,25,115,252,202,149,21,13,165,104,96,50,169,188,228,112,10,78,2,87,65,94,190,249,94,223,171,47,253,147,38,205,200,160,197,239,173,160,31,87,173,162,236,61,123,9,167,195,7,75,
3,112,228,232,49,241,201,61,4,187,103,61,43,163,86,103,212,29,109,128,182,64,155,160,109,204,98,197,38,197,145,245,17,248,160,170,137,77,96,52,70,140,198,156,17,160,5,42,50,49,218,9,52,21,218,10,141,133,
214,66,115,161,189,208,96,104,113,160,55,137,128,181,186,236,226,118,132,243,41,145,167,184,36,53,19,107,80,239,238,93,105,244,51,47,139,43,206,3,89,215,84,100,94,243,145,88,189,6,221,110,224,245,38,190,
114,188,146,158,176,15,217,161,25,156,143,169,130,124,139,189,190,165,243,166,211,91,99,95,164,135,254,126,23,165,244,237,65,227,39,79,161,185,139,22,211,202,175,191,209,79,98,47,158,39,5,235,159,247,
31,216,47,74,238,1,247,92,124,237,54,234,132,186,161,142,168,43,234,140,186,163,13,208,22,104,19,43,88,181,137,15,89,31,81,53,60,8,16,27,136,145,80,32,214,16,115,170,80,173,7,170,129,150,66,83,161,173,
37,129,6,67,139,161,201,254,8,40,226,229,203,87,8,186,64,30,227,100,215,94,117,37,189,51,97,58,117,73,118,222,240,138,234,158,120,92,92,12,197,85,14,253,26,104,245,24,169,226,192,225,3,29,234,224,143,
110,189,211,245,4,250,42,80,213,235,243,177,108,193,76,154,56,110,44,141,126,252,65,26,208,191,15,189,53,97,18,45,125,255,67,250,254,167,159,233,147,127,255,71,63,68,217,109,224,158,113,239,168,3,234,
130,58,161,110,168,35,234,138,58,171,68,149,77,224,35,240,21,163,192,7,85,118,76,140,196,8,98,13,49,167,10,167,246,196,161,157,208,80,104,105,176,249,47,104,49,52,217,31,1,107,181,110,253,250,144,99,112,
48,236,57,205,155,81,239,30,221,41,57,117,176,184,234,12,48,33,162,50,95,2,142,186,170,110,96,114,83,69,198,181,226,84,148,88,73,80,37,190,50,197,90,200,207,81,28,12,5,152,97,236,235,239,208,210,101,31,
210,188,249,75,233,173,241,83,232,241,209,47,80,250,208,187,244,67,126,139,179,108,254,12,122,99,204,115,244,200,131,247,208,152,151,254,233,170,221,154,62,112,207,184,119,212,1,117,65,157,138,131,58,
163,238,104,3,180,5,218,4,109,131,54,50,131,89,155,148,4,62,2,95,49,138,140,15,26,193,72,140,32,214,16,115,170,128,22,56,109,173,56,52,19,218,9,13,13,245,144,132,22,67,147,253,17,176,86,135,143,28,211,
79,33,55,2,82,92,226,85,32,101,192,112,113,37,242,224,213,73,229,86,91,52,114,168,141,18,152,77,174,98,224,85,81,6,153,28,210,117,106,169,59,104,56,191,64,254,213,125,208,240,123,233,188,214,231,234,171,
31,18,107,212,160,214,45,207,161,27,219,95,75,105,189,123,210,208,254,105,154,120,189,75,35,239,125,144,58,59,240,205,77,21,168,27,234,136,186,162,206,168,59,218,0,109,129,54,65,219,160,141,208,86,178,
152,177,73,32,100,124,197,74,30,115,127,32,70,66,173,188,64,172,169,236,253,67,11,156,52,156,2,173,132,102,26,77,15,12,45,134,38,251,35,160,136,127,188,124,30,173,254,237,183,160,147,81,197,193,246,216,
30,157,59,57,70,200,241,212,85,157,47,1,7,222,6,3,255,167,149,37,100,254,144,18,113,11,169,70,139,115,102,82,78,94,48,206,59,247,92,191,109,142,87,217,120,237,21,250,130,182,109,40,169,75,23,26,212,47,
133,94,126,245,45,234,63,248,78,87,45,91,13,4,234,128,186,160,78,168,27,234,136,186,162,206,254,134,244,208,70,104,43,89,96,19,163,241,24,10,25,95,81,45,226,136,145,80,189,226,80,177,38,203,25,17,119,
70,79,28,26,9,173,52,154,82,0,54,135,22,67,147,253,17,180,86,59,119,239,166,189,251,140,79,56,97,93,103,183,142,29,168,167,3,134,86,240,20,87,157,8,190,102,98,34,117,232,30,56,11,28,94,59,85,13,103,248,
168,96,240,85,22,66,82,75,65,206,20,0,167,41,44,146,203,96,136,161,131,22,205,154,136,82,96,96,23,140,137,94,210,174,157,190,140,42,169,75,103,26,56,236,110,241,83,247,129,123,71,29,80,23,212,9,117,51,
210,131,68,91,149,28,98,10,5,108,162,74,196,225,43,70,31,160,70,125,208,40,136,145,96,67,52,136,49,196,154,74,160,5,42,123,246,102,129,54,66,35,101,50,163,66,131,161,197,129,8,170,114,239,47,158,67,107,
214,173,19,37,99,212,64,186,203,91,110,54,157,242,82,21,72,120,163,250,201,27,29,29,21,116,226,48,33,94,205,164,98,113,140,246,130,112,252,150,170,53,234,122,118,62,73,177,168,87,167,174,116,190,108,244,
142,154,53,105,76,29,111,189,149,58,37,69,214,95,204,128,123,198,189,163,14,178,111,125,104,43,180,153,20,120,184,90,204,100,232,3,190,98,244,248,62,213,61,113,16,44,86,16,99,136,53,149,64,11,34,157,4,
11,154,8,109,132,70,202,0,13,134,22,7,34,164,202,253,190,97,131,244,78,177,6,245,235,209,117,87,95,45,74,145,161,66,128,153,92,43,96,169,85,176,188,36,9,9,106,199,195,129,209,28,36,120,178,87,82,116,44,
28,122,124,167,36,79,145,105,222,180,169,233,158,78,76,76,180,214,182,106,123,123,225,0,247,140,123,55,3,218,10,109,38,3,108,34,251,134,20,8,248,138,209,222,160,108,30,28,35,4,139,21,196,152,202,101,141,
62,236,208,4,25,160,137,208,70,25,160,189,208,224,96,132,20,241,37,243,102,208,250,63,254,16,37,99,192,65,47,110,119,62,221,51,234,49,113,37,252,200,230,28,49,74,189,186,129,123,79,213,36,51,247,25,193,
104,47,168,110,29,243,39,161,151,68,63,156,65,242,173,189,121,211,198,226,147,60,21,53,91,169,30,250,10,7,184,103,220,187,89,164,219,76,179,137,170,131,51,224,43,240,25,35,216,209,19,15,22,43,193,98,204,
10,118,105,130,17,160,133,208,68,217,24,133,246,66,131,131,97,40,114,86,253,106,124,130,211,7,110,246,214,27,111,160,190,233,195,196,149,240,18,104,77,165,85,130,77,184,84,241,179,49,202,42,70,29,79,213,
164,38,192,177,99,50,71,129,245,77,191,195,208,218,223,64,56,125,39,93,48,172,220,59,218,12,109,103,20,216,68,230,72,184,80,24,245,25,59,196,47,88,172,168,158,212,244,97,151,38,132,2,26,8,45,148,21,112,
104,46,180,55,20,134,60,112,198,228,183,105,119,182,124,206,7,140,107,117,184,229,22,234,148,20,254,37,101,178,99,148,70,65,78,232,110,126,114,25,96,75,172,108,98,33,35,24,73,69,139,131,6,106,41,156,8,
58,115,44,155,113,17,111,218,184,145,180,131,22,71,239,32,88,248,251,136,161,221,179,149,137,70,180,25,218,206,56,167,45,29,153,87,18,248,140,145,67,42,100,211,33,27,1,177,226,111,27,57,98,75,54,23,189,
81,236,210,132,96,64,251,160,129,102,198,248,161,185,208,222,80,24,238,70,252,242,235,90,241,73,14,156,102,114,205,21,151,137,82,248,176,235,245,188,66,133,114,84,163,250,217,75,131,224,32,49,18,233,106,
141,98,196,241,176,45,87,213,185,158,0,219,199,101,180,169,73,163,6,226,147,57,244,255,202,130,24,70,12,237,158,173,222,181,76,219,161,137,138,167,43,176,10,124,198,95,90,141,146,216,33,126,136,21,127,
255,46,98,11,49,102,7,145,24,178,131,246,201,158,114,229,195,168,230,26,174,213,31,155,54,209,241,19,39,68,73,142,139,46,184,128,134,221,57,74,148,194,67,25,227,85,147,2,175,207,85,253,76,8,33,67,154,
204,22,121,163,24,233,225,194,241,85,157,70,14,78,97,242,204,160,168,34,113,191,213,49,76,252,127,167,78,185,79,196,113,207,122,91,89,0,109,103,248,192,17,205,38,86,255,191,226,192,103,252,117,72,74,98,
229,45,43,16,136,21,127,89,5,17,91,118,13,175,217,165,9,129,128,230,65,251,204,0,173,133,230,26,193,112,173,86,44,202,160,181,235,215,107,126,36,31,108,88,218,115,253,53,87,135,117,25,89,65,161,154,45,
202,37,57,117,170,136,14,30,58,44,74,255,3,61,164,147,39,115,68,73,33,6,86,137,168,222,221,86,164,213,209,168,149,235,213,173,35,125,200,64,73,48,89,167,201,147,40,185,7,220,179,213,137,70,180,29,218,
208,8,176,9,108,163,10,248,140,161,227,218,36,87,42,25,1,177,226,239,173,2,177,133,24,179,3,187,52,193,31,208,58,104,158,153,101,141,208,88,104,45,52,215,8,82,143,166,53,107,127,55,189,78,21,57,140,91,
181,104,33,74,246,179,239,192,1,229,57,170,143,29,63,78,159,126,182,146,38,143,31,43,174,252,143,15,150,204,161,21,31,127,66,107,127,95,79,71,143,30,53,245,176,243,71,161,129,137,172,218,146,249,161,67,
81,164,245,246,140,222,127,211,198,230,87,165,248,40,40,44,210,255,79,183,129,123,198,189,91,197,104,27,194,38,170,219,201,136,239,24,241,65,35,224,254,17,27,136,17,196,10,98,166,36,136,45,196,24,98,77,
37,208,2,104,66,184,128,214,201,230,109,247,1,141,133,214,26,165,140,214,176,82,106,51,113,242,44,125,115,131,25,118,103,101,81,191,212,158,162,100,63,105,131,70,210,85,151,95,170,189,50,214,208,123,29,
185,185,185,186,115,28,58,124,132,14,31,61,76,71,142,28,213,51,209,229,228,228,80,65,65,161,190,14,23,227,102,72,130,143,25,121,204,102,227,73,138,22,202,205,203,165,227,199,79,24,78,212,132,19,194,113,
138,10,142,152,138,142,138,214,215,19,99,28,48,46,46,78,79,62,132,149,9,88,102,85,169,82,165,160,189,232,53,235,126,167,123,239,26,42,74,103,131,93,119,35,135,12,50,188,113,195,8,72,167,58,103,225,146,
128,219,124,125,116,236,145,74,3,83,251,72,237,62,243,199,161,195,135,105,106,134,246,16,52,216,243,112,10,157,146,80,255,190,150,39,226,14,30,58,164,213,127,46,189,191,56,120,253,49,17,216,55,185,59,
53,172,95,95,92,177,14,94,219,199,77,154,18,212,175,95,127,107,34,181,109,29,56,77,0,36,36,47,47,143,14,106,118,60,162,137,52,242,172,31,215,226,236,164,22,87,232,113,231,228,106,95,248,156,147,235,87,
184,253,1,191,142,139,139,165,168,74,81,90,124,64,216,138,180,175,2,61,78,11,181,183,31,60,204,202,150,41,171,199,41,98,44,190,178,22,87,85,226,41,33,62,65,223,44,84,89,139,179,168,168,40,253,222,144,
50,248,235,239,126,160,153,83,198,137,127,221,126,102,101,44,160,186,117,140,189,97,149,100,243,214,109,52,116,176,241,197,32,210,34,126,231,125,15,235,251,254,205,188,190,227,105,56,113,250,76,90,174,
56,69,103,40,206,204,192,99,37,193,41,199,100,203,131,147,98,214,63,190,114,172,126,238,98,173,154,181,244,92,194,213,52,7,196,57,132,152,244,65,174,12,244,88,144,139,58,16,201,41,3,105,216,128,116,125,
124,83,21,91,182,101,210,144,65,161,135,190,250,15,185,147,210,251,246,49,229,11,197,217,179,111,31,205,156,51,143,62,88,58,87,92,113,7,29,52,191,74,235,139,131,169,173,189,9,33,4,167,207,153,75,51,38,
133,94,137,48,105,202,108,173,231,222,80,148,172,131,94,223,132,105,211,105,225,236,169,226,202,217,220,117,255,35,212,233,214,91,244,173,242,88,226,120,66,19,254,131,90,71,8,219,193,247,236,221,67,217,
123,247,106,157,161,19,218,207,10,29,21,95,103,198,214,79,211,135,97,246,171,46,61,211,104,104,122,154,169,20,28,240,5,28,32,242,246,107,47,137,43,161,145,22,113,140,245,244,239,211,199,208,132,72,73,
208,227,152,50,107,182,225,167,113,105,3,142,135,222,63,54,87,96,226,39,63,63,143,22,207,13,126,144,0,178,225,165,244,76,82,154,98,96,211,150,173,52,108,72,232,201,182,127,62,63,134,174,185,226,114,81,
50,79,230,206,93,52,160,191,59,19,97,77,155,49,79,235,25,203,237,194,243,199,151,223,126,71,79,62,26,122,242,127,194,164,153,212,188,105,232,28,53,70,193,146,197,217,11,22,209,148,119,95,23,87,252,211,
163,79,186,230,147,149,244,116,184,249,5,5,122,175,216,41,130,237,52,240,22,142,68,104,102,222,80,247,31,56,72,51,230,206,213,222,74,103,139,43,161,145,142,124,252,227,107,215,27,31,175,241,113,236,248,
9,250,247,23,43,89,192,131,128,160,88,177,104,150,38,220,83,105,238,140,9,33,5,28,224,117,210,106,79,184,36,70,54,148,224,228,149,102,82,107,156,3,147,163,189,102,187,21,85,247,142,182,52,114,114,148,
202,205,62,0,190,99,100,51,15,124,241,140,79,78,213,125,148,5,60,48,208,56,104,29,52,79,22,104,171,140,128,3,83,221,183,117,27,54,82,110,174,177,124,42,24,18,248,229,215,95,105,214,188,249,52,254,141,
127,137,171,222,6,79,98,228,149,198,169,29,88,236,143,196,55,232,101,219,193,174,221,89,180,97,227,38,165,51,250,70,38,175,19,18,18,40,177,134,154,131,108,101,15,85,118,18,170,238,29,109,137,54,13,133,
170,4,88,0,62,3,223,129,15,217,1,124,30,190,143,24,64,44,32,38,16,27,165,1,104,29,52,15,218,103,52,173,51,52,21,218,42,139,244,112,138,143,55,223,158,68,109,206,109,37,74,127,5,255,36,150,243,172,253,
125,3,253,248,203,42,154,51,253,93,241,19,231,128,113,114,12,65,32,17,80,108,76,172,62,9,25,21,21,77,81,90,185,66,133,138,250,112,6,146,240,160,167,130,100,242,104,37,4,16,38,56,15,28,60,68,91,183,103,
158,53,214,214,55,125,56,93,126,201,197,250,140,63,254,45,252,29,38,96,48,86,136,68,54,152,228,57,124,228,168,246,117,88,255,55,246,31,60,168,247,228,16,76,86,122,54,8,22,172,55,110,213,162,57,53,105,
212,72,159,56,69,221,204,246,208,87,175,89,75,247,223,27,60,47,252,63,158,120,142,110,190,225,58,81,178,198,215,223,125,79,143,255,227,239,162,228,46,158,125,225,85,186,234,114,53,155,217,62,253,236,11,
122,225,153,224,249,134,112,216,4,114,149,155,1,113,137,225,19,76,60,226,144,129,245,186,128,239,182,236,123,200,153,142,29,137,53,170,85,163,234,213,170,82,66,149,4,237,43,94,159,204,143,170,84,73,159,
251,193,130,1,172,171,207,205,205,161,236,189,251,232,187,31,127,58,75,23,16,147,77,26,53,212,255,13,76,104,98,158,7,46,140,191,59,163,41,133,250,112,78,65,65,190,22,79,218,151,246,111,97,178,244,196,
201,19,250,201,55,168,91,184,199,191,141,0,93,184,228,194,118,154,94,182,212,147,112,5,138,75,172,218,185,251,206,33,162,100,28,211,34,62,120,196,125,148,218,51,89,148,254,7,132,106,213,111,107,53,33,
248,149,22,100,76,17,87,35,11,142,252,71,62,6,244,118,144,136,29,43,67,176,154,3,95,102,54,232,160,201,254,179,242,191,244,220,211,143,138,43,68,189,250,13,161,180,222,189,40,54,86,110,50,227,216,177,
99,250,210,39,156,138,190,83,235,17,237,220,181,155,86,132,88,165,16,12,4,21,118,225,53,168,87,143,154,52,110,72,141,27,52,212,30,40,149,196,79,141,241,227,47,191,208,67,163,130,231,248,158,50,109,54,
53,110,168,102,130,237,223,159,175,164,231,254,249,191,182,116,19,143,61,249,60,221,116,125,123,81,178,198,182,204,76,26,52,32,248,132,242,203,99,222,212,4,225,66,81,50,6,122,120,219,118,100,210,214,109,
153,180,99,215,46,173,19,113,196,146,112,119,234,145,74,245,235,213,165,250,117,235,232,39,231,39,86,175,78,149,37,83,78,156,56,113,146,102,106,61,213,249,179,38,137,43,90,91,62,245,188,126,10,146,153,
206,7,196,29,43,109,240,133,21,50,7,180,14,210,190,253,7,104,119,118,246,89,199,230,69,138,158,169,131,180,7,240,249,212,238,188,54,126,179,95,102,44,88,72,147,199,191,38,74,198,49,45,226,120,106,246,
235,149,76,117,52,113,196,63,177,71,123,186,174,90,179,70,123,29,216,32,61,166,99,23,67,70,220,79,237,175,190,234,47,219,94,205,246,78,75,178,43,43,139,50,230,47,252,51,24,158,123,233,53,186,242,210,75,
244,207,102,65,59,162,231,142,4,240,27,54,109,164,117,235,255,160,247,22,206,18,63,53,7,236,132,37,105,231,182,108,65,205,155,54,211,223,56,66,17,106,146,45,57,101,144,62,113,131,37,92,42,120,239,163,
143,105,236,203,207,136,146,187,184,255,161,39,168,243,109,183,138,146,53,176,4,22,19,255,11,103,7,238,252,24,157,76,70,15,117,211,150,205,244,187,246,122,142,37,163,86,123,168,24,10,105,221,234,28,106,
217,188,133,38,222,117,245,158,181,213,88,250,230,135,31,233,177,135,239,211,63,163,243,145,170,233,73,61,147,203,242,74,82,92,214,118,101,101,211,202,175,190,166,73,126,246,119,68,2,44,14,105,221,178,
37,181,107,219,86,95,75,142,118,204,210,30,54,179,52,61,49,99,39,211,34,14,70,61,252,164,214,219,107,68,191,252,250,27,101,105,162,22,106,137,24,110,62,190,178,246,154,165,9,9,50,178,225,105,185,108,190,
125,203,13,199,190,161,189,122,106,79,61,59,40,40,40,160,183,39,78,166,229,66,100,85,47,253,242,61,24,23,44,93,70,75,230,133,158,224,52,66,151,228,52,106,222,172,137,230,64,173,168,81,3,4,162,255,9,173,
79,63,251,76,123,173,127,66,148,206,230,222,81,143,81,151,14,183,41,123,32,206,95,178,148,222,121,243,21,81,114,23,119,220,253,0,245,234,222,77,148,172,1,155,47,255,224,35,122,125,204,115,226,202,217,
252,227,137,103,232,230,27,110,16,165,191,130,97,187,237,59,118,107,29,169,245,180,105,243,86,205,55,213,196,86,247,222,233,212,179,91,215,63,5,71,21,197,151,178,98,204,252,206,161,131,201,142,220,229,
96,245,111,107,233,254,123,236,59,58,178,107,175,52,253,45,191,172,214,62,120,128,30,61,118,52,100,103,22,75,84,235,104,15,173,11,207,63,79,123,75,218,174,31,186,109,6,75,34,142,167,103,176,215,50,252,
28,27,33,240,218,141,108,109,24,43,174,88,169,210,159,167,208,31,59,118,156,22,44,91,78,25,83,199,235,101,213,140,123,119,170,173,187,68,231,47,89,166,137,207,191,244,201,154,1,41,88,118,169,102,162,207,
7,76,243,227,170,213,244,240,168,187,196,149,179,193,80,81,29,237,149,22,235,202,177,25,9,155,153,176,201,194,136,93,206,59,183,21,181,108,209,92,255,92,60,56,23,44,93,78,227,223,120,89,148,206,102,236,
27,239,104,15,199,243,68,201,58,211,50,230,24,202,214,230,68,112,182,230,128,84,117,147,117,56,75,241,254,123,2,167,167,29,113,207,67,154,160,118,17,165,51,62,130,205,82,152,160,252,237,247,245,250,231,
80,182,199,166,51,108,134,193,102,26,172,118,201,218,179,55,232,144,195,75,99,222,162,75,218,93,160,84,192,193,254,3,7,104,218,236,185,250,106,142,59,238,126,80,123,24,118,21,63,81,207,250,141,27,105,
228,240,129,162,164,150,212,129,35,168,103,215,46,84,185,242,153,147,181,176,195,53,63,47,79,31,251,223,162,137,51,134,201,140,216,37,216,207,131,97,73,196,3,209,189,247,0,61,225,125,155,86,173,244,220,
12,193,198,157,55,110,222,76,75,87,124,64,31,154,172,64,48,166,78,159,163,245,56,173,101,216,11,198,246,29,59,233,131,79,62,213,199,160,147,187,118,182,165,23,145,151,159,71,239,76,153,118,214,27,11,140,
222,234,156,115,232,250,107,174,210,3,18,1,6,83,98,162,20,66,142,225,158,237,59,118,208,110,237,85,114,209,156,192,27,57,58,39,165,234,227,154,88,123,140,19,208,49,153,180,96,233,210,160,137,232,23,46,
122,207,242,46,77,31,184,231,113,147,167,210,162,32,67,8,78,38,41,101,16,141,28,60,80,153,192,97,47,69,114,82,103,81,58,155,238,189,251,107,34,222,77,159,100,207,218,147,173,175,233,199,124,202,123,65,
118,187,38,245,29,168,31,0,129,88,192,112,5,252,5,19,145,62,159,129,191,124,254,229,215,250,1,4,37,133,4,61,204,59,6,13,160,74,21,229,230,85,140,128,183,217,133,203,222,211,199,232,59,220,114,179,118,
127,234,118,162,150,4,177,48,48,93,253,202,24,44,11,237,214,169,3,181,104,214,76,92,57,27,140,215,103,239,217,163,231,67,217,180,101,155,22,91,211,196,79,212,160,76,196,33,42,152,157,190,160,109,91,77,
92,154,233,43,62,140,128,25,229,247,63,254,132,198,254,235,89,113,69,13,24,11,238,175,96,55,93,40,176,234,4,189,96,59,142,147,2,48,207,231,95,126,69,207,60,245,136,184,114,134,135,31,251,167,246,90,125,
189,190,10,37,24,152,212,218,179,111,47,109,222,186,85,223,206,139,213,49,86,198,71,49,30,62,164,127,63,237,193,172,232,40,184,194,2,122,11,195,82,11,172,141,253,71,138,46,61,251,209,93,67,7,235,155,180,
84,128,229,104,147,102,204,10,58,46,30,10,248,62,86,135,32,61,70,179,38,77,180,24,168,25,114,114,27,113,248,233,103,159,211,75,207,61,41,174,156,225,137,167,95,212,19,57,169,238,133,251,192,138,19,188,
13,96,21,139,157,96,87,240,140,57,243,148,175,94,185,255,193,199,169,227,173,183,132,140,67,31,88,73,179,254,143,205,180,122,205,26,125,117,154,217,222,119,113,148,109,243,187,246,170,43,53,209,236,163,
31,65,100,84,192,1,42,127,253,53,215,80,175,126,106,79,200,199,144,141,213,236,122,70,128,243,217,37,224,0,193,115,197,37,23,235,175,108,62,240,74,141,89,124,35,142,131,224,69,15,236,198,246,237,105,80,
191,84,234,147,212,131,254,241,196,179,212,189,79,186,248,13,57,84,231,150,62,153,147,167,79,230,186,21,220,59,234,160,18,179,109,12,155,194,182,176,49,108,13,155,195,246,70,86,39,193,151,224,83,240,45,
31,240,57,248,158,93,2,14,16,59,118,11,56,128,22,248,134,113,85,1,205,130,118,25,21,112,0,109,132,70,66,43,161,153,42,80,38,226,24,223,54,123,154,52,198,146,208,171,68,15,66,21,24,22,192,54,97,47,128,
4,63,41,61,123,208,75,175,188,65,207,188,48,150,58,223,126,139,169,161,27,136,67,131,122,117,245,182,30,62,48,157,222,120,107,162,158,255,68,134,121,51,39,210,7,159,254,159,233,220,242,37,65,98,164,211,
90,47,208,173,224,222,81,7,21,160,77,209,182,104,99,25,96,67,216,18,54,133,109,97,99,51,15,2,248,20,124,11,62,6,95,131,207,193,247,188,0,180,64,101,126,33,104,21,218,218,55,14,46,11,180,18,154,169,2,101,
34,190,105,203,22,125,104,193,44,72,199,121,209,5,231,139,146,117,202,107,14,169,234,244,119,39,128,76,136,151,94,116,17,93,125,249,165,250,70,8,171,84,172,80,145,206,107,125,46,245,239,211,91,11,216,
183,164,30,160,111,140,121,94,79,100,134,215,239,172,236,61,226,170,57,144,20,205,109,137,175,138,131,123,183,154,242,24,109,136,182,68,155,162,109,141,2,155,193,118,176,33,108,9,155,90,5,190,5,31,131,
175,193,231,188,2,180,0,154,160,10,104,149,149,52,204,208,74,104,166,10,148,137,56,198,240,172,108,223,197,43,219,181,87,94,161,207,246,171,32,90,123,133,44,39,241,154,83,90,193,171,224,165,23,181,163,
91,110,188,65,74,200,177,126,253,133,103,30,167,89,243,23,232,107,155,127,248,249,103,125,147,133,236,20,139,234,188,209,145,64,182,14,104,35,180,21,218,12,109,135,54,68,91,202,236,9,128,173,96,51,216,
78,230,117,190,180,2,45,128,38,168,0,26,5,173,178,50,204,4,173,180,50,239,81,28,165,214,255,253,143,63,164,131,184,56,152,44,187,237,230,155,244,60,213,86,49,147,6,178,52,115,126,155,214,116,249,197,23,
139,146,113,48,81,52,107,202,56,122,248,129,123,116,65,90,180,124,5,253,177,105,179,158,233,206,8,16,51,183,99,180,14,104,19,180,13,218,8,109,133,54,67,219,153,153,108,131,173,96,51,198,56,42,52,1,218,
4,141,178,50,177,15,141,132,86,170,66,169,136,103,238,216,65,57,6,19,99,5,2,171,73,218,95,117,185,223,147,176,101,136,97,17,151,2,189,138,171,174,184,148,134,221,105,62,135,9,122,146,227,94,127,137,238,
24,150,78,51,230,204,165,31,87,173,210,15,4,8,246,96,199,146,58,183,19,172,14,168,59,218,0,109,129,54,65,219,160,141,172,236,196,133,141,96,43,59,39,28,189,136,85,77,128,38,65,155,172,174,120,131,70,66,
43,85,161,124,157,248,187,147,102,80,139,166,77,69,201,28,72,8,133,141,52,19,222,126,85,92,145,231,241,209,47,232,179,237,140,28,72,159,185,96,201,82,154,85,108,3,22,182,92,55,170,95,79,95,151,142,147,
85,144,235,101,223,254,125,250,142,91,56,100,176,158,36,150,36,94,212,238,124,173,215,216,70,123,157,61,179,54,217,7,92,111,242,204,12,154,61,237,29,113,197,157,164,12,184,131,6,167,165,158,85,183,156,
220,92,250,117,237,90,250,121,213,175,65,95,157,49,52,130,87,125,236,248,75,172,145,168,231,34,65,122,88,172,219,222,190,115,215,95,4,191,31,54,150,116,239,70,149,227,212,157,228,84,90,64,190,163,103,
71,255,67,148,228,193,195,19,27,146,144,240,203,10,27,183,108,161,225,67,250,139,146,117,148,139,248,3,143,60,69,183,223,252,55,203,189,4,236,230,66,130,156,247,22,154,75,6,245,220,139,99,233,202,203,
46,21,37,70,6,108,27,254,101,245,106,125,219,127,227,70,13,245,141,64,241,126,18,28,97,120,224,224,193,67,250,70,134,109,90,207,98,199,206,221,122,175,211,223,218,87,108,56,105,119,126,91,145,252,39,70,
247,15,172,198,24,63,121,170,242,181,187,225,6,34,60,98,240,64,61,161,26,194,233,228,201,147,122,18,184,85,191,174,241,187,209,10,123,42,48,105,216,160,126,93,106,220,160,129,190,33,174,90,181,170,250,
97,32,37,57,122,236,152,190,161,103,219,246,76,125,219,251,133,23,92,96,40,255,13,115,54,223,124,255,3,61,246,200,253,162,36,71,231,228,84,61,193,157,213,93,217,240,143,15,63,253,63,122,229,197,167,197,
21,235,40,23,241,228,212,65,90,175,164,159,146,53,218,43,191,254,134,70,63,254,160,40,201,49,230,181,241,116,161,38,26,76,248,192,57,136,187,179,179,104,227,230,45,90,47,114,163,95,1,195,230,152,230,77,
154,82,163,134,245,105,123,230,78,122,245,101,115,249,34,156,198,223,31,122,242,207,58,109,218,186,197,239,230,37,60,200,90,157,211,130,90,52,107,74,117,107,215,49,189,36,151,49,199,47,218,67,117,212,
125,255,219,111,33,195,232,103,255,69,237,21,172,235,206,203,207,215,222,62,103,209,66,133,25,94,149,139,56,122,25,120,229,80,145,166,20,189,186,233,179,231,253,37,93,165,81,198,189,51,85,15,24,38,252,
192,165,144,224,108,235,182,109,122,102,203,113,175,151,142,195,64,2,49,242,222,7,245,140,117,77,26,55,214,19,36,89,125,75,101,204,129,142,197,200,59,228,243,167,32,205,116,122,202,153,183,39,171,32,143,
10,134,138,85,236,212,244,161,124,109,18,110,110,243,150,109,162,100,13,52,154,217,33,17,217,28,218,140,58,32,82,88,210,213,188,105,83,74,234,210,133,102,102,44,164,17,247,152,123,163,114,51,168,51,234,
142,54,64,91,160,77,88,192,35,135,89,77,128,6,169,90,51,15,109,84,41,224,192,150,5,166,91,182,111,211,39,39,85,208,186,229,57,52,112,88,240,3,10,252,225,165,141,10,110,6,162,133,124,238,73,93,58,211,235,
111,77,164,110,189,205,109,247,119,19,168,35,234,138,58,163,238,44,220,206,192,140,38,64,123,160,65,42,128,38,66,27,85,99,139,136,227,248,167,253,7,212,44,29,195,86,224,107,174,188,66,106,35,10,242,150,
115,79,220,89,96,67,10,82,223,34,219,35,230,77,188,10,234,134,58,162,174,188,9,199,89,64,19,160,13,70,129,230,64,123,84,101,39,133,38,66,27,85,99,139,151,33,63,48,82,63,170,2,41,42,177,66,194,40,88,202,
230,165,45,247,94,1,61,82,28,147,215,225,230,155,61,121,96,46,234,132,186,161,142,220,251,118,30,208,4,104,131,81,160,57,42,211,227,66,19,161,141,170,177,173,171,128,100,232,170,192,186,76,108,115,237,
216,195,88,224,87,142,171,28,150,204,104,140,57,16,24,88,161,225,53,80,39,149,65,207,168,5,154,0,109,48,2,180,6,154,99,117,77,120,113,84,106,98,113,108,19,241,93,89,187,245,229,52,170,192,70,8,163,167,
201,96,61,173,214,239,59,83,96,28,7,122,169,56,149,223,107,160,78,220,3,119,50,101,132,54,132,6,90,3,205,81,5,180,16,154,104,7,182,137,56,206,151,219,158,169,112,107,169,22,28,87,95,113,57,117,235,21,
122,167,83,99,15,10,132,215,240,183,177,197,237,120,177,78,94,195,136,54,64,99,160,53,42,31,200,208,66,187,14,144,183,117,230,5,169,22,85,46,67,199,235,16,26,55,24,29,123,164,80,109,155,79,243,97,172,
131,157,136,94,195,139,117,242,26,208,6,104,68,48,160,49,42,135,99,161,129,170,210,206,250,195,86,17,223,188,117,187,210,83,91,240,100,60,255,188,54,148,54,120,164,184,114,54,56,67,48,54,150,147,95,57,
29,156,171,232,53,188,88,39,175,1,109,128,70,4,2,218,2,141,81,217,11,135,6,66,11,237,194,86,17,199,129,160,59,119,239,18,37,107,224,105,134,156,30,191,173,251,93,63,55,50,16,109,90,181,228,165,93,46,128,
69,156,137,4,208,6,104,68,32,160,45,208,24,104,141,170,81,4,104,160,234,195,145,139,99,187,218,109,216,184,201,82,99,224,111,113,220,255,202,175,190,166,105,25,25,122,238,131,5,25,147,197,79,255,10,198,
178,154,55,51,190,20,145,137,12,56,169,221,142,245,178,145,6,117,66,221,24,103,3,141,8,52,183,6,109,129,198,64,107,160,57,208,30,171,250,5,13,180,19,219,69,28,39,172,23,20,26,59,32,160,56,168,124,246,
158,189,250,73,248,83,51,102,211,211,79,62,76,11,103,159,157,80,169,56,231,182,60,71,63,94,138,113,54,249,5,133,116,84,209,249,130,78,2,117,66,221,24,103,3,141,128,86,4,3,90,3,205,129,246,64,131,160,69,
102,196,28,218,7,13,180,19,229,9,176,252,49,105,74,6,53,109,108,108,197,8,110,103,119,86,54,125,253,253,15,180,117,251,118,195,121,6,144,120,11,217,19,171,87,171,42,174,48,78,37,107,207,30,74,237,155,
36,74,222,34,99,206,34,170,83,171,150,40,49,78,229,192,193,67,122,54,65,25,125,193,18,210,171,46,187,148,234,74,164,82,192,218,240,33,131,172,159,84,22,140,176,12,30,175,219,176,33,228,83,12,63,223,187,
111,159,126,116,85,90,191,158,52,254,141,151,165,18,197,180,110,213,138,170,85,77,16,37,198,201,236,63,112,80,124,242,30,94,174,155,151,128,86,64,51,140,2,45,130,38,65,155,160,81,208,42,35,154,6,237,179,
155,176,136,248,214,109,153,122,90,217,64,224,112,128,255,172,92,73,51,231,46,208,143,174,146,165,75,114,26,93,125,249,101,74,103,148,25,251,216,127,96,191,248,228,61,188,92,55,47,1,173,128,102,64,59,
100,129,70,65,171,160,89,208,174,64,64,243,160,125,118,19,22,17,199,204,172,191,202,228,231,231,211,143,191,156,57,123,240,185,167,31,163,247,151,200,47,134,199,107,78,251,171,175,164,170,9,85,196,21,
198,201,156,121,227,242,174,208,161,110,161,122,104,140,51,128,102,64,59,160,33,178,64,171,160,89,250,89,178,154,134,65,203,74,2,205,179,115,85,138,143,176,136,56,88,183,97,253,159,206,93,80,88,72,235,
214,111,160,25,115,231,211,67,163,238,10,57,97,233,15,52,124,143,62,3,233,42,237,105,218,174,173,177,237,248,76,228,201,207,47,160,67,135,189,187,20,15,117,67,29,25,119,0,237,128,134,64,75,204,136,57,
180,11,26,6,45,131,166,65,219,192,153,161,148,245,250,103,187,9,203,196,38,232,156,148,74,169,189,122,210,225,35,135,233,219,31,127,162,105,19,222,20,63,49,6,26,56,38,38,90,95,168,223,176,126,61,253,120,
171,132,42,85,244,244,146,60,140,226,30,112,50,252,148,153,25,244,129,203,207,213,12,68,135,110,125,104,80,90,42,85,171,202,19,236,110,1,18,136,245,225,88,231,143,227,5,51,119,238,162,93,89,89,116,242,
164,255,243,98,131,49,96,216,221,116,197,37,23,107,218,148,64,25,243,23,208,123,139,204,157,17,44,67,216,68,28,244,232,51,128,22,207,53,254,122,209,169,71,10,213,168,81,131,154,54,106,72,141,26,54,160,
218,53,19,169,66,5,78,49,235,102,176,102,118,196,240,1,162,228,77,198,191,59,141,90,182,104,46,74,140,27,41,40,200,167,236,189,251,244,156,39,91,182,103,210,254,253,251,105,197,98,227,195,189,178,90,103,
133,176,138,184,17,186,247,73,167,166,141,27,235,203,121,208,227,142,21,39,163,51,222,224,139,175,190,166,167,159,120,72,148,188,201,83,207,188,76,215,93,125,149,40,49,110,7,18,121,226,228,73,189,135,
142,101,207,91,182,109,163,37,115,167,139,159,70,30,71,136,56,134,74,32,218,23,93,112,1,53,110,212,128,15,147,245,48,115,23,45,161,9,111,143,17,37,111,50,236,206,81,212,39,169,187,40,49,94,2,114,137,67,
192,183,109,223,65,63,175,94,45,181,151,197,46,194,54,177,25,136,228,148,65,148,212,165,147,254,213,172,73,35,62,76,214,195,228,229,231,233,99,226,94,7,117,68,93,25,239,1,109,130,70,65,171,124,186,5,13,
139,36,17,21,241,110,189,210,41,185,107,23,125,248,132,147,86,121,159,195,135,143,210,137,32,235,106,189,2,234,136,186,50,222,6,154,5,237,130,134,65,203,34,69,68,149,243,252,54,173,41,177,70,117,238,121,
151,18,178,247,238,165,15,35,252,234,25,14,80,71,212,149,241,62,208,46,104,24,180,44,82,68,84,196,107,84,175,198,2,94,138,216,157,149,37,62,121,159,210,84,215,210,14,52,12,90,22,41,34,42,226,232,173,56,
108,113,12,99,19,176,243,238,236,61,162,228,125,80,87,246,237,210,1,236,28,201,55,175,136,138,248,154,117,235,232,200,81,30,59,44,13,28,59,126,188,84,29,95,134,186,162,206,140,247,129,134,65,203,34,69,
68,69,252,189,133,72,188,254,141,246,36,83,119,132,27,227,76,144,143,249,189,133,179,68,201,251,160,174,168,51,227,109,160,93,208,48,104,89,164,136,168,136,131,63,54,109,162,204,157,246,28,229,207,56,
7,85,199,244,185,137,210,88,231,210,6,180,11,26,22,73,34,46,226,200,161,241,223,175,191,249,51,113,12,227,61,48,102,184,99,87,233,123,80,163,206,60,46,238,93,160,89,208,174,72,231,1,138,184,136,131,221,
217,217,180,246,247,240,100,252,98,194,207,201,156,28,58,112,176,244,29,150,128,58,163,238,140,55,129,102,65,187,34,141,35,68,28,219,86,191,249,225,7,61,63,1,227,61,178,178,247,80,97,97,145,40,149,30,
80,103,212,157,241,30,208,42,104,86,164,183,220,3,71,136,56,88,48,107,50,125,255,211,207,252,250,233,65,50,119,238,116,132,179,135,27,212,25,117,103,188,5,52,10,90,5,205,114,2,142,17,113,240,243,234,53,
165,242,181,219,235,108,223,81,122,133,172,52,215,221,171,64,163,160,85,78,193,81,34,254,254,226,12,250,236,191,95,113,111,220,67,156,212,94,59,103,78,126,91,148,74,31,168,59,218,128,241,6,208,38,104,
20,180,202,41,56,74,196,1,82,59,110,218,186,85,148,24,183,147,185,139,151,217,113,27,120,7,104,19,52,202,73,56,78,196,49,142,248,197,151,95,81,126,1,159,83,232,118,208,107,65,222,229,210,14,218,128,223,
46,221,15,52,9,218,228,180,249,29,199,137,56,152,61,237,93,250,101,245,175,236,248,46,231,212,169,83,180,99,23,143,9,163,13,208,22,140,123,129,22,65,147,160,77,78,195,145,34,14,190,251,241,39,206,171,
226,114,96,191,131,135,188,123,178,189,81,208,6,236,203,238,6,246,131,38,57,17,199,138,248,210,249,51,232,203,111,191,227,222,184,139,217,150,185,131,62,94,94,250,150,22,150,4,109,128,182,96,220,9,52,
8,90,4,77,114,34,142,21,113,176,126,195,31,218,171,40,79,10,185,149,173,219,51,197,39,134,219,194,189,64,131,160,69,78,197,209,34,142,156,4,88,206,83,88,200,147,156,110,35,55,55,151,118,241,193,8,127,
130,182,64,155,48,238,2,218,3,13,138,116,126,148,96,56,90,196,193,244,137,111,210,175,107,127,23,37,198,45,32,73,254,210,121,211,69,137,65,91,240,145,109,238,3,218,3,13,114,50,142,23,113,240,245,119,63,
208,209,99,156,96,223,77,108,217,230,172,181,180,78,128,219,196,93,64,115,160,61,78,199,21,34,190,120,238,84,250,242,155,111,69,137,113,58,69,69,133,180,125,7,79,228,149,4,109,130,182,97,220,1,52,7,218,
227,116,92,33,226,96,237,239,191,107,61,153,109,162,196,56,153,195,71,142,209,129,131,135,68,137,241,129,54,65,219,48,206,7,90,3,205,113,3,174,17,241,15,151,205,163,79,63,251,130,242,242,242,197,21,198,
169,108,203,204,164,15,150,204,17,37,198,7,218,4,109,195,56,27,104,12,180,6,154,227,6,92,35,226,96,222,204,137,244,249,151,156,32,203,201,192,54,155,183,242,27,83,32,208,54,236,191,206,5,182,129,198,64,
107,220,130,171,68,28,172,254,237,55,218,184,121,139,40,49,78,3,201,242,179,247,240,65,8,129,64,219,240,225,39,206,5,218,2,141,113,19,101,180,39,143,235,186,5,73,125,7,80,106,175,158,148,80,165,138,184,
226,28,208,156,8,210,253,7,14,210,161,195,135,245,237,186,135,143,28,209,211,145,230,231,23,80,94,126,62,157,58,125,138,202,150,41,67,229,202,149,167,10,21,202,83,165,138,149,40,58,58,138,226,98,98,41,
46,46,150,170,196,87,161,248,248,56,170,28,27,167,151,203,104,191,235,22,54,108,220,68,35,134,15,16,37,198,31,227,223,157,70,45,91,52,23,37,231,3,159,62,126,252,4,29,59,113,156,142,30,61,174,249,244,17,
189,124,252,228,9,202,201,201,213,124,58,143,10,10,10,245,73,219,83,218,239,150,45,83,86,243,233,138,84,177,98,5,138,137,137,209,227,180,74,124,60,85,77,72,160,26,213,171,81,172,118,205,137,62,141,56,
205,152,191,128,22,205,153,38,174,184,3,87,138,56,184,227,238,7,168,123,167,78,186,8,70,2,159,88,31,58,124,132,246,237,223,167,125,29,208,147,197,67,180,49,166,182,124,225,44,241,155,230,184,173,107,31,
189,110,209,81,81,148,88,163,26,37,86,175,65,53,19,19,181,207,53,40,190,114,156,246,179,10,226,55,157,197,251,159,124,74,99,94,124,90,148,24,127,140,122,228,41,234,120,203,205,162,228,44,10,10,10,244,
165,117,251,246,239,167,189,251,52,191,62,176,95,251,124,144,114,114,115,117,161,254,104,153,181,77,47,93,146,251,81,165,74,21,117,81,175,94,77,243,235,26,213,181,175,68,77,224,171,68,84,220,81,183,37,
43,86,208,59,111,190,34,174,184,7,215,138,56,24,253,204,203,116,237,85,87,134,197,240,104,38,244,58,178,247,238,163,237,59,50,41,115,231,46,58,162,61,185,115,243,242,194,154,154,178,99,247,190,20,27,27,
171,59,127,221,58,181,169,65,189,122,84,45,161,170,222,147,143,116,239,6,169,58,39,77,159,73,11,103,79,17,87,24,127,36,167,12,162,33,233,105,84,49,194,15,98,159,79,31,60,124,72,223,90,190,59,43,91,239,
140,156,56,113,130,222,15,227,196,244,109,93,123,83,84,165,74,84,69,235,177,55,172,95,143,26,53,104,72,181,107,38,134,205,167,209,14,56,181,126,244,19,15,137,43,238,194,213,34,222,65,19,180,46,183,223,
74,231,52,183,231,213,84,119,242,220,60,218,150,185,93,31,38,216,181,59,139,22,207,117,222,171,86,143,62,3,244,94,77,3,61,0,234,235,189,118,244,118,194,45,234,56,138,108,222,226,37,142,203,183,236,52,
32,90,189,123,116,215,109,21,78,224,207,120,75,68,239,26,182,218,161,117,68,240,246,232,84,159,174,87,183,142,62,236,212,184,97,35,237,141,180,146,109,254,252,199,166,77,180,252,195,143,93,187,162,202,
213,34,14,96,236,148,158,73,84,173,106,85,113,197,58,200,253,188,71,123,149,92,189,230,204,36,234,18,151,109,31,239,222,123,0,213,169,157,168,245,106,26,80,147,70,13,181,87,213,170,84,174,92,89,219,69,
253,223,95,172,164,231,158,126,84,148,152,96,60,246,212,243,116,211,117,237,69,201,30,16,218,69,69,167,232,144,214,211,70,2,174,204,157,59,40,43,123,159,230,207,238,26,243,237,222,59,157,90,52,107,74,
23,180,61,143,106,37,38,82,217,178,234,214,99,28,60,116,136,102,47,88,228,200,7,153,81,92,47,226,160,255,224,187,52,33,239,65,21,43,86,20,87,204,1,241,198,214,232,239,127,254,133,118,106,175,151,94,233,
81,246,234,55,132,26,106,189,62,8,58,94,85,99,180,215,84,213,192,141,38,76,155,225,170,165,89,145,164,119,218,80,26,54,160,191,45,15,214,147,57,185,250,144,159,46,220,90,143,123,254,172,73,226,39,238,
6,111,48,245,235,213,163,203,46,186,144,154,54,110,100,89,204,243,243,243,53,1,95,76,51,38,191,37,174,184,19,79,136,56,184,103,212,163,212,229,246,219,76,25,22,77,0,241,198,54,219,233,147,220,109,208,
80,32,16,234,214,174,173,189,166,54,211,122,55,205,169,74,124,101,37,66,178,59,59,155,102,205,91,192,67,41,6,129,29,250,245,238,169,219,194,42,240,223,35,71,143,105,111,141,155,104,195,198,205,186,45,
188,110,135,244,33,119,209,53,87,94,161,139,185,25,255,69,135,109,249,135,31,209,27,99,158,23,87,220,139,103,68,28,60,253,220,43,116,205,21,151,27,54,42,170,190,239,192,1,250,252,191,95,233,59,233,74,
155,0,117,236,158,162,247,208,47,56,175,141,30,12,229,203,155,91,233,131,118,252,175,246,0,28,253,248,131,226,10,99,132,209,207,254,139,174,213,132,200,236,67,180,176,176,80,239,124,172,254,109,173,222,
227,126,127,201,108,241,147,210,1,30,132,141,27,54,164,235,175,189,154,18,171,87,151,138,123,28,242,240,212,99,15,136,43,238,198,83,34,126,123,183,62,116,251,223,110,162,54,231,182,10,105,208,252,130,
124,250,225,167,95,232,187,31,127,166,21,139,51,196,213,210,75,202,128,59,232,194,243,207,163,214,45,91,233,171,2,100,128,11,77,153,53,155,50,166,142,23,87,24,35,164,14,28,65,131,250,165,72,139,56,86,
148,172,219,176,158,126,249,245,55,154,61,237,29,113,181,244,210,169,71,42,93,126,201,69,116,233,197,23,82,197,10,193,135,84,225,171,107,127,95,79,31,254,223,191,233,67,7,231,8,151,193,83,34,14,58,39,
247,163,238,157,58,106,79,232,6,226,202,95,65,117,247,107,189,239,143,255,253,25,77,121,247,117,113,149,241,209,179,223,96,186,248,130,11,232,188,214,173,13,143,157,99,133,67,207,228,46,162,196,200,176,
96,225,114,125,101,145,17,48,214,253,219,186,117,244,211,234,213,180,96,214,100,113,149,241,49,104,248,189,116,235,77,55,80,141,32,189,114,28,147,183,100,197,251,244,158,197,125,28,78,194,115,34,14,146,
250,14,164,158,221,186,232,155,99,138,131,170,174,223,184,145,254,239,179,47,92,183,226,36,220,96,50,244,178,139,47,162,243,180,183,154,96,19,198,104,211,111,126,248,137,30,127,228,62,113,133,145,225,
217,23,95,163,43,47,189,56,104,111,28,19,112,191,105,189,199,239,127,250,217,51,147,148,118,129,149,44,127,187,225,58,106,213,162,197,89,109,138,205,75,11,150,46,167,69,115,156,159,94,86,6,215,229,78,
49,2,140,180,236,131,15,233,104,177,19,198,79,159,62,165,137,205,143,180,226,163,79,88,192,13,0,177,120,224,254,145,52,107,254,2,253,193,119,234,84,145,248,201,95,193,54,107,76,168,49,230,64,219,161,13,
253,129,54,71,219,195,6,176,5,11,120,104,16,219,136,113,196,58,98,222,7,180,0,154,224,53,1,7,158,236,137,251,24,48,244,110,234,217,189,11,69,85,138,162,207,191,252,146,126,248,121,21,175,158,48,201,176,
59,255,78,55,182,111,175,239,20,45,222,195,193,58,219,228,164,206,162,196,152,97,225,162,247,254,178,207,1,33,137,157,147,255,89,185,146,38,188,253,170,184,202,200,128,73,207,75,47,106,71,215,95,115,13,
229,230,229,210,130,37,203,105,154,195,143,89,51,139,167,69,28,12,30,113,63,213,173,93,147,158,121,234,31,226,10,99,22,76,28,183,107,219,150,174,185,226,50,138,142,142,214,175,125,253,253,15,244,248,35,
247,235,159,25,115,60,251,226,88,186,234,178,75,245,207,57,57,57,244,229,183,223,211,170,53,107,60,51,241,22,73,158,120,250,5,218,157,189,151,38,143,31,43,174,120,15,207,139,56,163,158,158,169,131,232,
186,171,175,214,119,209,205,94,184,136,166,79,244,246,218,122,187,73,31,122,23,165,36,39,233,187,131,191,248,234,43,90,144,193,185,103,24,227,176,136,51,166,192,235,106,131,122,117,105,231,238,44,238,
49,90,4,111,56,245,235,214,161,29,187,118,243,112,31,35,13,139,56,195,48,140,139,241,228,234,20,134,97,152,210,2,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,134,69,156,97,24,198,
197,176,136,51,12,195,184,24,22,113,134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,134,69,156,97,24,198,197,176,136,51,12,
195,184,24,22,113,134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,134,69,156,97,24,198,197,176,136,51,12,195,184,24,22,113,
134,97,24,23,195,34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,134,69,156,97,24,198,197,176,136,51,12,195,184,24,22,113,134,97,24,23,195,
34,206,48,12,227,98,88,196,25,134,97,92,12,139,56,195,48,140,139,97,17,103,24,134,113,49,44,226,12,195,48,46,134,69,156,97,24,198,197,176,136,51,12,195,184,24,22,113,134,97,24,23,195,34,206,48,12,227,
98,88,196,25,134,97,92,12,139,56,195,48,140,107,33,250,127,217,194,83,76,34,234,110,115,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GUI::hands_png = (const char*) resource_GUI_hands_png;
const int GUI::hands_pngSize = 19407;

// JUCER_RESOURCE: hands1_png, 15642, "../../../../Pictures/hands/hands1.png"
static const unsigned char resource_GUI_hands1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,113,0,0,1,0,8,6,0,0,0,69,249,70,192,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,
72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,60,188,73,68,65,84,120,94,237,157,103,155,220,54,178,182,223,95,119,142,179,146,149,115,206,97,148,173,156,243,40,141,194,40,231,44,75,178,102,70,210,
72,246,174,247,188,63,140,167,111,234,244,46,221,126,154,4,72,176,155,100,215,135,251,178,119,61,4,8,84,213,211,36,8,84,253,191,169,83,167,70,134,97,24,70,61,49,17,55,12,195,168,49,38,226,134,97,24,53,
198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,
163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,
134,97,212,24,19,241,62,176,104,197,250,232,242,149,91,209,171,215,239,163,241,137,47,209,199,143,127,68,239,199,38,163,91,119,30,71,235,54,239,138,254,251,167,89,242,58,195,232,55,248,38,62,138,175,226,
179,248,46,62,140,47,227,211,248,182,186,206,40,15,19,241,30,179,96,217,218,232,67,203,241,255,248,227,255,75,190,124,249,87,116,241,242,141,232,251,233,115,229,245,134,209,47,240,73,124,19,31,85,190,
11,248,54,62,174,174,55,202,193,68,188,199,156,60,115,89,58,127,146,223,127,255,159,232,192,145,211,242,122,195,232,23,248,36,190,169,124,54,9,62,174,174,55,202,193,68,188,199,220,123,240,92,58,126,39,
231,206,95,147,215,27,70,191,192,39,149,175,118,130,143,171,235,141,114,48,17,239,49,239,223,79,74,199,239,228,210,200,77,121,189,97,244,11,124,82,249,106,39,248,184,186,222,40,7,19,241,30,242,195,140,
249,209,231,148,245,196,36,215,70,239,201,54,12,163,95,224,147,202,87,59,193,199,241,117,213,134,17,30,19,241,30,50,119,241,106,167,53,69,184,121,251,145,108,195,48,250,5,62,169,124,181,19,124,28,95,87,
109,24,225,49,17,239,33,171,214,111,115,22,241,59,247,158,202,54,12,163,95,224,147,202,87,59,193,199,241,117,213,134,17,30,19,241,30,50,180,99,159,179,136,63,120,244,66,182,97,24,253,2,159,84,190,218,
9,62,142,175,171,54,140,240,152,136,247,144,189,7,79,72,167,87,60,121,250,90,182,97,24,253,2,159,84,190,170,192,215,85,27,70,120,76,196,123,200,177,83,23,164,195,43,158,191,120,43,219,48,140,126,129,79,
42,95,85,224,235,170,13,35,60,38,226,61,100,248,226,117,233,240,138,103,38,226,70,197,192,39,149,175,42,240,117,213,134,17,30,19,241,30,114,245,250,93,233,240,138,151,175,222,203,54,12,163,95,224,147,
202,87,21,248,186,106,195,8,207,64,137,248,55,63,205,138,214,108,220,22,29,57,49,28,157,187,112,45,58,114,252,92,52,111,73,239,182,66,145,52,72,57,188,130,132,66,170,13,195,232,23,248,164,242,85,5,190,
174,218,40,3,98,152,88,142,99,186,21,219,196,56,177,174,254,182,137,12,140,136,47,94,185,33,122,241,242,221,95,118,135,240,239,147,147,127,70,43,215,109,149,215,132,230,254,67,183,175,251,240,235,155,
113,217,134,97,244,11,124,82,249,170,2,95,87,109,132,134,216,37,134,59,227,154,88,39,230,213,53,77,99,32,68,252,191,127,154,29,141,141,117,63,238,222,139,245,59,82,120,62,125,246,70,246,175,120,245,122,
76,182,99,24,253,2,159,84,190,170,192,215,123,145,82,57,237,59,19,49,79,236,171,235,154,196,96,60,137,207,90,148,154,62,243,230,237,135,250,186,128,124,51,101,118,244,242,213,111,178,127,197,139,151,191,
201,118,12,163,95,224,147,202,87,21,248,58,62,175,218,9,9,177,171,250,7,98,158,216,87,215,53,137,129,16,241,185,139,87,181,94,177,186,139,248,163,39,175,74,255,197,198,161,125,158,100,158,61,183,221,41,
70,181,192,39,149,175,42,240,245,178,69,156,152,37,118,85,255,64,204,19,251,234,218,38,49,16,34,190,108,245,166,191,172,153,117,194,7,155,239,167,149,91,132,1,135,246,89,83,124,244,228,165,108,167,12,
184,183,25,115,151,68,107,55,237,136,246,28,56,30,231,141,230,227,208,247,211,231,201,191,55,122,15,182,192,38,216,6,27,97,43,108,214,139,167,221,54,248,164,242,85,5,190,94,246,189,17,179,105,31,91,137,
121,98,95,93,219,36,6,66,196,215,109,218,153,42,226,148,151,250,177,228,172,107,56,180,207,215,253,187,247,123,151,59,101,243,246,189,209,167,201,127,254,165,127,230,139,251,221,188,125,95,79,214,54,13,
13,115,143,13,176,69,167,15,99,51,108,167,174,43,3,124,50,217,127,26,220,111,217,34,78,204,18,187,170,127,96,190,136,125,117,109,147,24,8,17,223,182,251,160,52,114,27,140,61,109,118,185,107,103,4,163,
207,235,232,213,209,222,237,179,61,113,250,162,188,7,96,110,54,110,253,69,94,103,148,15,115,223,41,222,73,176,157,186,174,12,240,73,117,15,10,124,189,236,31,127,98,54,109,110,128,216,87,215,54,137,129,
16,241,125,135,78,74,3,39,153,191,100,141,188,54,20,56,244,253,7,207,100,223,138,83,231,70,100,59,101,48,122,243,129,188,135,54,219,118,29,144,215,25,229,195,220,43,155,180,193,118,234,186,50,192,39,213,
61,40,240,245,178,69,156,152,85,125,39,33,246,213,181,77,98,32,68,220,37,103,73,47,82,103,250,28,187,223,185,247,176,108,35,52,4,218,243,151,239,228,61,180,49,17,239,31,89,34,142,237,202,22,203,54,248,
164,186,7,69,47,182,237,18,179,170,239,36,131,144,195,101,32,68,252,220,133,171,210,192,73,122,145,58,147,39,135,123,247,159,69,227,227,159,83,95,3,223,190,251,16,205,94,184,66,182,17,154,41,179,22,101,
150,140,219,190,251,144,188,214,40,31,230,94,217,164,13,182,195,134,234,218,208,224,147,248,166,186,15,192,167,241,109,124,188,236,55,91,32,102,213,125,36,33,246,213,181,77,98,32,68,124,228,218,29,105,
224,36,189,74,157,201,83,19,107,121,84,62,89,182,102,75,180,110,243,206,248,195,21,107,119,67,59,246,199,39,208,166,205,94,44,175,45,3,182,96,125,254,252,167,156,147,54,219,118,53,127,93,177,170,48,247,
202,38,109,176,93,47,183,209,225,155,248,40,190,138,207,226,187,248,48,190,140,79,227,219,189,122,51,112,73,237,76,236,171,107,155,196,64,136,184,75,89,169,227,3,154,58,147,173,106,106,62,146,216,114,
74,255,200,90,78,1,108,168,174,109,58,196,172,154,143,36,131,80,230,112,32,68,220,165,34,201,133,203,55,228,181,77,135,61,199,106,62,146,152,136,247,15,23,17,199,134,234,218,166,67,204,170,249,72,50,8,
21,178,26,47,226,241,135,59,135,60,200,55,110,149,123,244,158,251,216,48,180,59,58,121,230,114,52,114,245,118,116,253,198,253,232,218,232,253,248,223,135,47,126,205,168,200,26,31,175,164,189,122,29,133,
225,11,215,228,124,36,217,98,165,182,250,6,115,175,108,146,4,27,170,107,203,0,223,196,71,241,85,124,22,223,197,135,241,101,124,154,127,199,199,241,245,178,253,152,152,85,243,145,132,216,239,101,60,245,
131,198,139,56,7,14,92,78,74,62,124,252,74,94,31,138,217,11,87,102,238,105,229,191,3,121,39,22,44,91,43,219,9,205,221,251,217,219,30,55,111,235,221,129,18,227,175,48,247,202,38,73,176,161,186,54,52,248,
36,190,217,246,83,117,47,109,248,239,248,188,106,39,20,196,172,234,59,73,47,78,142,246,155,198,139,248,183,45,3,190,127,255,73,26,56,9,169,43,191,155,54,71,182,17,130,161,157,251,101,191,221,56,117,246,
146,108,39,36,56,247,155,183,19,178,255,36,27,134,236,176,79,191,96,238,149,77,146,96,195,94,8,21,62,169,250,239,6,62,175,218,9,1,177,74,204,170,126,147,16,251,104,128,106,163,41,12,192,147,248,156,232,
195,135,223,165,129,147,188,109,5,66,153,71,239,211,78,69,42,202,94,222,129,233,115,150,68,19,19,217,115,179,118,0,142,46,87,21,230,94,217,36,9,54,196,150,234,250,144,184,44,95,36,41,243,52,41,177,74,
204,170,126,147,16,251,104,128,106,163,41,52,255,73,124,234,156,232,211,167,127,72,3,39,25,27,255,18,77,45,241,232,253,245,27,247,100,191,221,120,242,244,87,217,78,72,22,173,88,31,125,78,73,209,219,102,
213,250,222,20,205,48,254,14,115,175,108,146,4,27,98,75,117,125,72,240,73,213,127,55,240,121,213,78,16,90,177,74,204,170,126,147,16,251,104,128,108,163,33,12,132,136,127,116,16,113,254,134,172,112,170,
141,162,240,170,155,150,50,83,193,90,158,106,43,36,228,229,80,125,39,97,109,115,233,170,230,103,130,171,42,204,125,214,250,51,244,34,191,141,79,22,78,192,231,203,90,230,33,86,93,227,218,68,188,230,176,
30,246,155,195,154,56,135,38,126,158,183,76,182,81,148,239,167,207,77,61,233,166,120,247,219,199,210,215,57,15,30,57,45,251,78,66,98,253,69,203,203,127,202,51,52,204,125,90,65,147,54,216,82,93,31,10,124,
17,159,84,125,119,3,159,199,247,85,123,69,33,86,179,14,169,1,177,111,107,226,13,128,83,101,47,95,141,165,62,209,60,126,250,58,250,161,164,53,241,41,51,23,254,45,213,107,22,28,167,254,161,228,124,222,23,
71,110,202,190,147,112,223,108,41,83,215,27,229,195,220,187,248,14,182,84,215,135,2,95,204,74,207,208,9,247,141,239,171,246,138,66,172,18,179,170,95,32,214,137,121,98,95,93,223,36,6,66,196,219,76,153,
185,40,46,158,202,49,225,173,187,14,70,187,246,30,141,115,83,44,95,179,185,212,95,235,57,139,168,44,148,253,74,156,132,28,20,63,149,20,0,109,92,10,55,127,248,240,71,105,111,40,70,54,204,61,54,80,182,73,
82,118,97,98,124,17,159,84,125,119,3,159,199,247,85,123,33,32,102,137,93,98,152,88,38,166,137,109,98,156,88,87,215,52,145,129,18,241,126,177,124,205,22,233,228,105,140,143,127,41,61,135,138,203,235,49,
129,91,214,211,148,145,13,115,239,34,158,216,82,93,31,10,124,17,159,84,125,167,129,239,171,246,140,112,12,156,136,179,191,148,87,67,214,234,122,181,245,136,234,43,202,193,211,152,248,240,123,52,99,238,
82,217,94,16,102,45,140,62,126,204,126,194,123,251,246,67,227,79,188,85,25,230,30,27,40,219,36,193,150,216,84,181,17,2,124,17,159,84,125,167,209,171,202,67,196,50,49,77,108,151,121,222,163,138,12,196,
135,205,131,71,207,196,165,165,40,25,197,193,8,62,184,0,95,219,159,191,120,19,221,185,247,36,58,123,254,106,156,157,77,181,81,20,151,252,36,157,16,148,179,22,148,151,142,150,211,119,46,31,134,202,62,201,
106,100,227,114,50,17,91,150,121,202,23,95,116,249,209,239,164,172,188,46,196,42,49,75,236,18,195,196,114,59,174,137,113,98,157,152,39,246,237,195,102,205,89,178,114,163,116,46,5,134,255,174,132,130,201,
46,217,214,58,97,127,235,156,69,229,29,91,158,191,116,109,235,201,234,75,230,90,253,249,75,229,39,247,55,210,193,6,202,54,109,176,33,182,196,166,234,250,16,224,139,46,231,45,58,41,35,59,40,49,74,172,170,
254,20,104,128,106,167,41,52,94,196,183,120,44,101,224,164,179,22,44,151,237,20,225,252,165,81,217,95,26,147,147,255,136,202,206,19,205,211,21,243,115,232,216,217,248,30,121,170,225,137,134,189,181,236,
44,224,159,235,55,239,146,215,26,189,3,27,36,109,130,141,176,21,54,195,118,216,176,204,183,54,192,23,241,73,229,171,105,112,143,170,189,34,16,163,62,63,40,204,143,106,167,41,52,94,196,247,122,44,101,240,
68,195,215,110,213,78,17,178,106,88,42,38,39,255,140,230,45,233,207,214,62,214,20,167,205,89,28,253,52,115,129,252,239,70,239,193,22,216,164,95,235,189,248,34,62,169,124,53,141,50,106,128,18,163,62,187,
189,208,0,213,78,83,104,188,136,31,61,49,44,13,219,13,42,150,168,118,138,240,240,241,75,217,87,26,101,175,113,26,134,15,174,223,80,58,193,247,85,123,69,32,70,85,95,221,64,3,84,59,77,161,241,34,238,83,
161,27,14,28,57,37,219,201,11,71,126,179,10,17,43,200,135,177,112,249,58,217,102,81,248,40,68,14,234,147,103,46,69,123,14,156,136,95,215,233,139,210,90,255,245,163,237,68,169,58,216,8,91,97,51,108,135,
13,177,37,54,45,235,227,60,125,185,228,217,233,4,223,15,125,236,157,24,85,125,117,3,13,80,237,52,133,198,139,248,69,135,234,31,73,78,159,187,34,219,201,11,39,203,124,115,78,64,124,220,189,164,164,70,215,
70,255,154,140,139,87,83,158,178,200,134,199,215,253,123,15,158,199,95,254,215,111,217,213,248,47,251,117,0,27,96,11,108,130,109,176,17,182,194,102,157,203,10,216,86,181,81,20,124,209,229,248,127,39,248,
126,232,147,208,196,168,234,171,27,104,128,106,167,41,52,94,196,59,5,43,139,43,161,11,171,206,90,24,189,31,243,59,174,12,4,231,146,149,27,116,155,5,32,7,6,137,253,85,159,157,112,15,101,61,217,25,238,96,
3,215,53,96,108,91,70,206,29,124,209,245,30,146,224,251,161,247,175,19,163,170,175,110,148,245,195,86,21,26,47,226,183,238,60,145,134,237,198,189,7,97,171,164,144,231,57,207,254,90,2,102,233,170,240,31,
89,121,42,242,89,219,180,210,108,253,199,165,68,91,27,108,91,70,14,32,124,49,143,136,227,251,161,115,157,19,163,170,175,110,160,1,170,157,166,208,120,17,119,201,15,146,132,53,60,213,78,94,102,206,95,222,
114,126,255,215,80,88,182,58,124,10,216,197,43,54,200,190,186,81,102,117,22,195,13,223,170,80,216,88,181,83,4,124,81,245,149,5,190,79,12,168,54,243,226,251,141,169,236,188,50,253,166,209,34,206,90,162,
111,34,251,183,239,62,6,61,102,206,1,12,213,143,11,43,214,13,201,54,139,176,213,83,16,54,109,219,35,219,49,122,7,54,80,182,233,6,54,86,237,20,1,95,84,125,185,16,242,16,82,156,134,160,21,163,170,159,110,
160,1,77,254,182,211,104,17,103,79,237,139,151,110,235,191,109,198,198,39,163,31,103,132,219,31,157,247,9,6,202,16,113,223,50,113,124,80,83,237,20,97,249,218,161,104,223,161,147,113,14,236,29,191,144,
69,114,75,45,247,164,115,207,220,59,99,96,44,140,137,177,169,191,45,2,54,80,182,233,70,25,101,209,138,136,120,200,55,74,98,147,24,85,253,116,3,13,232,215,254,250,94,208,104,17,39,33,142,75,33,224,36,31,
62,134,77,60,181,122,195,118,217,143,11,101,136,184,111,157,196,208,31,54,127,152,49,239,111,187,117,88,107,101,237,244,230,237,135,61,41,51,86,20,238,145,123,229,158,59,215,137,191,238,198,8,155,7,30,
27,36,251,200,162,140,250,172,69,68,156,24,80,109,230,129,216,36,70,85,63,221,64,3,202,42,78,81,5,26,45,226,4,147,239,206,144,201,207,255,140,230,45,89,35,219,203,131,75,9,180,110,132,22,113,158,70,92,
119,166,180,9,157,119,130,253,198,105,223,8,158,191,8,251,77,162,12,184,71,117,239,192,216,66,239,239,247,201,255,3,216,56,244,147,103,17,17,15,89,58,142,216,36,70,85,63,221,64,3,66,255,176,86,137,70,
139,248,79,63,47,240,222,25,242,117,87,72,184,215,191,109,187,14,200,126,92,88,190,54,108,46,102,18,229,251,228,156,96,46,230,47,13,247,131,6,187,247,29,147,125,181,33,177,145,186,174,74,100,37,95,98,
140,234,186,188,96,3,159,157,33,216,56,116,81,4,124,81,245,229,2,49,160,218,204,131,107,205,209,36,104,0,90,160,218,107,2,141,22,113,28,57,207,41,179,144,73,159,118,238,61,44,251,200,34,244,143,9,240,
132,168,250,234,6,9,151,102,47,12,155,73,241,234,245,244,125,251,117,127,18,7,198,168,174,203,11,54,112,41,209,150,36,244,219,64,30,241,108,67,12,168,54,243,64,108,170,62,210,64,3,154,92,233,167,209,34,
206,254,84,101,212,44,118,236,57,36,219,203,195,158,3,233,79,158,221,224,116,28,101,166,84,155,121,25,242,216,111,12,20,1,248,121,94,184,239,3,172,75,102,157,94,125,250,236,141,188,182,74,112,143,234,
222,219,48,198,144,107,176,216,192,183,32,3,182,86,109,229,5,95,204,115,98,19,136,1,213,102,30,136,77,213,71,22,161,247,170,87,137,70,139,56,233,57,149,65,179,56,124,252,156,108,47,15,123,15,250,23,132,
128,201,214,147,215,130,192,249,161,143,157,58,47,251,234,198,251,177,207,209,212,89,225,74,196,177,213,44,235,160,209,163,39,213,47,66,193,61,170,123,111,195,24,131,230,246,110,217,0,91,168,190,186,129,
173,101,91,57,193,23,241,73,213,87,22,196,128,106,51,15,196,166,234,35,139,178,83,245,246,147,70,139,56,107,137,202,160,89,12,95,12,87,8,97,247,190,163,178,143,44,88,199,155,57,63,108,129,226,235,55,238,
203,190,186,65,142,142,31,3,158,254,219,185,231,136,236,39,201,253,135,207,229,181,85,130,123,84,247,158,132,177,170,107,243,128,13,176,133,234,167,27,216,90,181,149,23,124,209,247,251,82,27,98,64,181,
153,7,98,83,245,145,69,232,111,59,85,162,209,34,238,187,6,220,38,228,22,173,53,27,183,231,114,254,223,222,127,106,189,146,135,251,162,206,97,135,103,207,223,202,190,186,241,250,215,177,232,219,169,225,
150,5,46,93,185,37,251,73,114,251,110,245,143,72,115,143,234,222,147,48,86,117,109,30,176,1,182,80,253,116,3,91,135,60,224,130,47,226,147,170,175,52,240,125,98,64,181,153,7,223,45,178,109,66,127,35,168,
18,141,22,113,223,35,230,109,158,62,251,85,182,151,155,217,139,162,249,75,214,196,201,236,87,111,216,22,173,223,178,59,174,54,178,125,247,161,214,171,230,201,232,248,169,139,209,197,145,27,209,205,219,
143,162,135,143,94,198,175,235,33,151,116,98,226,68,92,126,175,228,47,2,166,32,224,164,221,171,215,217,66,52,122,51,252,30,231,208,112,143,234,222,147,48,214,144,39,127,177,133,234,167,27,95,151,194,194,
38,158,194,39,241,77,124,20,95,197,103,241,93,124,24,95,198,167,241,109,124,28,95,199,231,241,125,213,86,94,136,77,53,222,44,202,72,69,80,21,154,253,36,190,44,223,147,248,111,239,63,202,246,234,204,156,
69,171,188,119,23,60,126,242,90,182,149,135,184,208,174,195,246,198,171,163,129,179,72,150,0,247,168,238,61,9,99,13,185,14,139,45,84,63,221,192,214,216,92,181,85,103,136,77,53,222,44,208,2,213,94,19,104,
180,136,83,220,85,25,52,11,94,1,191,159,30,62,19,92,63,89,183,121,167,28,107,26,33,51,58,174,219,188,203,233,71,228,226,200,77,121,125,149,224,30,213,189,39,97,172,140,89,93,159,7,223,204,125,128,205,
85,91,117,133,152,204,187,46,95,102,209,241,126,211,104,17,159,210,122,157,204,99,116,14,75,76,155,29,102,75,18,251,107,73,72,68,18,163,21,107,183,196,123,126,73,21,202,137,58,242,62,183,225,213,187,204,
170,58,228,245,80,99,77,131,163,229,170,173,60,28,59,233,182,51,230,220,133,107,242,250,42,193,61,170,123,239,132,49,171,235,243,128,45,84,31,105,96,115,213,86,8,240,85,124,54,233,195,248,52,190,141,143,
227,235,248,60,190,31,234,188,3,49,233,115,88,173,13,26,128,22,168,54,155,64,163,69,28,72,190,195,90,222,229,43,183,162,91,119,30,199,107,122,124,244,225,104,114,155,167,207,223,68,143,30,191,140,43,136,
95,106,61,101,177,179,0,167,84,237,249,192,113,99,181,183,150,255,239,253,251,79,241,201,191,231,47,222,198,89,214,184,47,82,102,142,222,122,16,29,57,49,28,77,15,152,191,5,242,84,220,191,122,253,174,108,
43,15,183,238,60,146,125,116,114,234,236,37,121,125,149,224,30,213,189,119,194,152,213,245,121,192,22,170,143,52,66,87,154,199,39,241,77,124,20,95,197,103,241,93,124,24,95,198,167,187,249,123,136,163,
247,196,36,177,73,140,18,171,196,44,177,155,140,101,98,155,251,34,214,137,121,98,191,140,148,206,85,162,241,34,222,79,70,115,126,73,231,85,156,192,8,185,59,197,55,175,58,132,42,107,197,19,219,187,223,
220,214,50,15,31,59,43,219,168,18,220,163,186,247,78,24,115,168,143,155,190,101,6,33,100,30,109,124,17,159,244,253,174,210,134,88,80,237,26,197,49,17,47,9,94,45,223,121,230,61,78,66,176,172,90,31,38,131,
224,119,83,179,79,74,42,206,12,135,169,55,202,105,185,201,73,183,215,224,61,251,195,29,12,41,11,238,81,221,123,39,140,57,212,73,65,108,161,250,72,3,155,99,123,213,158,47,248,98,94,1,7,98,33,116,82,46,
227,43,141,23,113,28,231,187,105,115,163,239,91,240,79,248,161,245,84,193,1,10,146,226,144,83,129,127,178,150,23,98,9,165,77,156,239,34,199,250,93,146,80,107,154,188,6,79,76,124,145,125,164,113,252,212,
5,217,158,47,236,12,112,61,178,189,117,103,184,100,73,101,193,61,170,123,239,132,49,135,218,21,129,45,84,31,105,96,243,80,203,114,121,190,169,36,33,22,66,230,225,33,86,137,217,100,12,19,211,196,118,59,
206,255,19,243,205,254,241,104,180,136,99,104,138,164,190,125,59,17,189,121,251,33,62,245,198,191,243,79,94,117,223,253,246,41,94,199,227,159,84,11,121,253,235,120,188,198,55,114,237,78,180,227,151,195,
133,68,189,72,234,206,54,167,207,93,150,109,251,178,96,217,90,103,17,77,114,240,232,25,217,158,47,4,23,235,179,204,115,218,211,28,255,109,205,198,29,178,141,42,193,61,102,141,131,177,50,230,80,39,94,177,
133,234,43,13,108,142,237,85,123,190,224,139,170,15,31,138,164,86,38,22,137,73,98,147,24,37,86,137,217,100,12,19,211,201,24,143,99,190,245,239,104,64,200,7,180,170,209,104,17,159,54,103,113,174,44,134,
64,32,82,181,69,181,235,194,144,227,211,90,26,161,182,219,249,84,75,79,18,242,184,52,252,52,115,97,188,107,97,255,225,83,209,149,107,119,227,3,44,99,227,95,226,61,213,228,27,249,240,225,143,104,222,146,
213,242,218,42,193,61,114,175,220,51,247,206,24,24,11,99,98,108,140,145,177,170,107,243,146,39,125,3,54,15,85,212,195,101,91,101,22,196,132,106,219,5,98,49,143,15,3,26,128,22,168,118,155,64,163,69,60,
239,97,31,192,97,56,133,166,218,117,33,207,147,83,39,215,111,132,73,105,202,171,230,161,99,103,227,189,198,36,200,39,173,41,227,203,10,10,78,224,169,246,66,194,43,241,172,5,203,91,79,140,235,162,185,139,
87,7,61,229,88,22,220,35,247,202,61,115,239,140,65,253,93,72,176,133,178,81,155,182,61,177,45,54,198,214,216,28,219,171,246,124,193,23,85,191,62,20,121,179,35,22,179,252,53,13,59,236,83,83,124,203,90,
117,82,100,77,216,117,47,113,26,101,148,217,66,128,248,216,198,177,104,158,238,70,174,222,238,154,19,99,89,235,111,84,27,70,239,193,22,202,70,216,14,27,98,75,108,138,109,203,248,33,204,155,179,36,73,145,
51,0,121,190,9,36,9,93,102,176,74,52,90,196,55,12,229,47,141,6,69,146,251,135,120,114,185,125,247,177,108,59,52,4,61,101,175,246,28,56,17,141,222,188,255,239,239,7,211,2,228,189,224,195,18,53,17,217,169,
193,94,98,196,128,67,48,27,134,118,71,63,207,95,46,175,169,35,140,133,49,49,54,198,200,88,25,51,99,103,14,212,53,62,96,139,246,58,47,54,194,86,216,172,87,111,46,248,162,242,81,31,138,188,89,102,21,19,
201,2,45,80,237,54,129,70,139,248,214,2,165,209,224,201,179,215,185,131,228,193,163,151,178,77,31,66,101,244,227,184,50,121,60,166,56,174,211,146,53,47,212,23,253,110,235,241,252,127,147,147,127,198,7,
52,248,104,182,108,245,230,82,79,172,134,134,123,229,158,185,119,198,192,88,186,141,51,212,83,32,54,113,205,42,137,173,177,121,168,244,17,46,153,27,179,32,38,84,219,89,16,131,196,162,106,211,21,180,64,
181,221,4,26,45,226,59,247,102,231,175,78,99,124,226,115,43,104,242,137,217,43,135,140,125,89,220,189,95,60,119,201,47,251,143,199,95,237,63,126,250,35,30,15,167,220,142,28,63,23,45,94,177,177,21,224,
225,210,204,118,131,117,89,151,181,76,62,18,46,9,92,142,174,76,184,215,172,2,23,192,216,153,3,213,70,72,176,37,54,197,182,216,24,91,99,115,108,143,15,168,107,124,192,23,213,248,124,32,38,84,219,89,16,
131,140,71,181,233,10,90,160,218,110,2,141,22,241,189,7,79,72,131,186,66,0,206,200,177,207,150,39,135,177,241,98,78,7,247,10,138,56,235,163,236,162,80,109,243,197,158,195,32,28,77,222,213,114,112,242,
45,135,206,47,193,211,42,41,75,85,255,138,58,173,91,250,124,111,97,14,66,191,101,96,43,108,134,237,176,33,182,236,182,19,11,31,40,122,232,8,95,84,109,251,64,76,228,121,179,37,6,93,30,4,210,64,11,84,219,
77,160,209,34,126,240,200,105,105,80,31,216,46,166,218,78,131,221,10,121,179,173,37,41,90,229,102,219,238,131,206,206,207,223,241,145,140,245,220,245,155,119,230,126,3,73,66,27,62,167,86,235,148,227,130,
123,85,99,80,48,7,161,230,19,219,96,35,108,229,99,91,124,65,181,233,138,75,53,163,44,136,137,60,59,121,136,65,213,158,15,104,129,106,187,9,52,90,196,121,181,84,6,245,97,231,30,255,74,221,63,207,91,22,
229,173,71,152,36,239,26,98,27,118,45,168,118,179,32,232,207,12,95,149,109,250,192,154,172,143,208,132,58,152,210,11,184,87,159,177,133,200,45,142,77,92,251,236,4,95,80,109,186,18,226,27,15,49,65,108,
168,246,211,32,6,85,123,62,160,5,170,237,38,208,104,17,47,186,45,9,242,100,213,163,168,172,203,122,105,22,100,99,83,237,187,146,167,156,86,155,39,207,126,45,124,202,141,204,117,170,109,5,75,1,117,202,
249,204,189,250,28,36,43,154,197,15,91,96,19,213,182,11,248,130,106,215,21,124,81,181,235,3,49,145,167,248,183,107,214,200,52,66,165,144,168,34,141,22,241,83,103,71,164,65,125,224,213,85,181,157,198,178,
2,167,203,146,60,126,154,191,178,14,79,126,170,77,87,216,34,87,116,107,156,207,143,40,39,31,243,60,165,245,11,238,213,165,82,81,155,162,34,130,45,176,137,106,219,149,34,111,3,248,162,106,211,7,98,130,
216,80,237,167,65,12,170,246,124,64,11,84,219,77,160,209,34,126,246,252,85,105,80,31,158,191,124,231,189,158,73,69,149,16,34,78,110,100,213,190,11,155,183,239,45,116,15,236,36,40,186,123,197,103,111,49,
71,215,167,5,202,248,215,11,184,87,238,89,141,69,81,116,207,63,182,40,178,227,9,95,192,39,84,219,46,248,22,217,86,112,15,190,213,134,136,61,98,80,181,231,3,90,160,218,111,2,141,22,241,60,133,16,58,153,
248,240,123,244,211,76,191,163,203,219,10,238,79,111,195,254,99,213,190,11,69,19,22,209,55,89,224,84,219,46,144,77,238,205,219,9,217,182,130,173,112,190,243,220,79,184,87,238,89,141,69,193,92,48,39,170,
45,23,176,5,54,81,109,187,82,36,161,90,209,190,219,16,27,170,253,110,48,207,196,160,106,203,135,208,5,50,170,68,163,69,156,173,87,202,160,62,240,244,192,201,56,213,126,55,138,110,109,108,67,224,171,246,
93,200,83,4,34,73,158,55,144,36,188,186,251,100,78,140,115,95,79,11,87,4,163,108,184,87,159,28,237,204,69,145,229,140,16,79,164,69,138,68,248,252,32,167,225,187,213,143,216,11,241,86,139,22,168,246,155,
64,163,69,252,202,181,236,170,228,46,248,30,217,117,173,39,153,69,222,143,81,172,159,78,76,20,123,122,33,221,103,145,35,221,155,183,165,39,108,234,132,44,128,69,250,235,53,220,43,247,172,198,210,13,230,
68,181,229,2,253,97,19,213,174,43,248,68,222,239,28,69,62,146,39,241,173,59,90,52,117,70,27,180,64,181,223,4,26,45,226,215,111,220,151,6,245,197,119,143,105,136,228,87,48,62,241,69,182,159,5,169,82,85,
123,62,20,45,237,229,251,61,226,73,129,143,184,253,130,123,86,99,233,70,209,117,217,162,111,87,144,55,213,47,190,168,218,243,197,55,9,86,136,179,30,128,22,168,246,155,64,163,69,220,181,56,111,22,190,175,
98,215,70,195,252,120,176,22,152,103,73,131,10,227,170,61,31,56,101,168,218,118,129,237,112,79,61,183,195,221,189,255,84,182,85,101,184,103,53,150,110,48,39,69,182,109,250,156,126,237,6,190,161,218,78,
3,31,12,177,46,13,196,134,234,163,27,33,150,68,33,100,209,234,170,209,104,17,167,34,182,50,168,47,190,251,181,67,28,140,0,78,184,229,201,7,157,167,30,99,39,87,174,231,63,28,50,99,222,82,239,19,171,100,
230,83,109,85,25,238,89,141,165,27,204,9,115,163,218,114,1,155,168,118,125,200,83,55,21,31,12,113,2,25,124,15,176,133,216,159,14,104,129,106,191,9,52,90,196,239,61,40,126,84,24,40,3,229,35,166,175,127,
45,158,252,10,168,75,56,109,182,223,182,59,214,78,31,4,56,34,61,124,241,186,108,223,133,213,27,182,121,127,140,186,124,37,76,21,163,94,194,61,171,177,116,131,57,97,110,84,91,46,96,19,213,174,15,248,134,
239,183,7,124,176,104,189,216,54,196,134,234,67,65,204,17,123,170,29,95,208,2,213,71,19,104,180,136,147,205,77,25,212,23,118,22,248,20,121,245,57,4,146,6,85,90,124,119,52,224,248,239,199,138,39,223,58,
121,198,255,164,106,155,60,235,152,103,134,235,119,24,131,123,86,99,73,163,72,14,15,108,162,218,244,1,223,240,125,187,195,7,241,69,213,158,47,196,134,234,67,65,204,229,169,13,171,64,11,84,31,77,192,89,
196,249,245,246,253,5,239,39,100,141,43,250,53,63,201,218,77,110,135,20,168,173,24,98,75,20,124,254,252,79,239,237,141,28,107,14,209,127,145,82,90,195,23,253,63,236,30,61,49,44,219,170,50,220,179,26,75,
26,204,141,106,203,133,16,37,255,240,13,223,163,239,248,32,190,168,218,243,133,254,93,235,143,18,115,170,141,60,160,5,117,202,87,239,163,183,153,34,206,132,239,59,116,50,122,216,250,37,227,232,237,222,
131,199,163,31,127,46,191,166,96,81,190,157,50,59,122,254,162,248,41,179,54,7,14,187,61,65,133,18,81,32,55,199,162,229,27,100,63,221,8,117,208,104,247,190,99,178,125,23,134,118,238,143,198,198,39,101,
187,221,8,93,148,185,23,248,22,47,102,78,152,27,213,150,11,216,68,181,235,139,239,129,27,124,208,39,79,76,26,62,63,34,196,156,106,35,15,104,1,154,160,250,169,18,104,43,26,139,214,162,185,104,111,214,143,
94,87,17,231,87,139,95,66,117,160,129,35,184,121,114,32,244,146,239,166,114,194,173,88,174,137,36,87,71,239,202,126,58,89,187,105,123,48,17,167,29,223,121,62,123,190,248,71,77,40,34,54,48,101,214,162,
104,253,150,93,209,233,225,145,248,41,232,227,199,127,164,206,139,235,155,78,149,72,123,82,100,172,140,153,177,51,7,204,5,115,162,218,113,5,155,168,190,124,193,71,84,251,221,8,149,11,8,104,135,24,81,253,
116,66,204,169,54,242,128,22,160,9,170,159,170,192,60,171,244,6,104,48,190,214,237,77,162,171,136,239,59,116,34,53,19,31,105,37,171,156,163,151,35,206,161,62,48,2,78,240,141,195,235,13,73,250,213,245,
121,192,225,87,111,112,115,248,54,161,118,198,172,223,188,75,182,159,23,214,97,201,11,205,146,0,149,216,147,79,118,172,183,206,156,95,159,228,87,109,184,231,228,90,49,99,98,108,140,145,177,250,174,61,
103,129,77,218,125,21,193,119,135,8,62,24,74,196,129,24,81,253,36,33,214,66,62,132,161,5,69,210,30,148,13,90,154,150,190,26,45,70,147,213,181,93,69,156,146,82,170,177,36,24,150,77,244,63,230,72,244,94,
54,63,206,88,16,23,149,85,247,157,7,10,222,254,236,32,52,39,78,95,148,215,231,197,39,133,41,79,122,239,199,252,150,49,186,145,167,24,134,15,188,34,110,220,186,39,254,88,199,222,229,58,125,111,105,195,
61,115,239,140,129,177,184,174,245,230,37,68,113,4,192,71,124,222,10,124,82,10,187,64,140,168,126,146,16,107,196,156,186,62,15,104,1,154,160,250,234,39,104,39,26,234,242,35,217,173,204,95,87,17,159,181,
96,121,215,210,94,157,60,126,242,58,154,81,177,52,162,83,102,182,4,237,125,24,65,131,175,79,197,217,219,195,66,190,2,130,79,69,150,69,43,214,203,54,242,176,104,249,122,217,71,22,231,47,94,143,171,178,
179,6,57,114,237,78,156,43,131,251,10,85,120,185,78,48,102,198,206,28,48,23,204,9,115,195,28,169,191,207,2,155,40,91,229,129,251,82,125,40,240,65,213,70,94,92,150,38,243,108,83,77,3,45,64,19,84,95,253,
2,205,68,59,213,253,118,130,22,163,201,170,157,212,53,241,171,215,221,5,137,44,103,115,23,175,146,109,245,131,105,179,23,23,206,31,210,73,214,142,13,158,204,92,141,226,202,47,251,221,63,48,238,218,235,
247,161,45,141,60,5,26,150,118,41,30,252,229,203,159,209,219,183,19,45,241,26,141,215,67,243,148,232,170,11,140,141,49,50,86,198,204,216,59,231,131,57,98,174,212,245,105,96,147,206,182,242,130,175,168,
62,20,248,160,106,35,47,196,72,214,155,87,136,157,56,73,208,2,52,65,245,213,15,208,74,159,204,144,104,177,247,154,56,172,90,191,213,235,215,144,164,245,85,17,114,138,171,126,250,20,102,91,84,155,172,2,
17,28,79,14,181,156,209,198,231,187,195,197,17,191,195,39,221,192,230,211,231,248,59,252,240,133,236,195,40,180,77,70,60,62,246,45,92,182,174,150,203,40,157,48,6,198,194,152,24,155,75,204,48,87,170,173,
52,176,73,168,167,83,124,69,245,161,200,179,239,63,13,98,36,43,157,68,136,66,16,73,208,130,60,69,207,203,0,141,244,41,240,129,205,209,98,213,22,164,138,56,175,131,79,159,189,145,13,119,131,204,110,85,
168,208,194,61,132,58,40,208,134,211,99,223,166,124,225,102,157,81,93,87,132,99,142,21,97,16,146,103,47,138,39,207,7,230,205,119,125,23,95,121,239,153,233,142,39,82,242,129,44,89,233,183,141,178,74,112,
239,140,33,109,19,128,130,185,242,93,98,194,38,161,124,26,95,113,253,1,197,7,85,27,69,72,91,147,39,198,66,157,212,108,195,188,85,69,151,124,179,95,162,193,105,190,146,42,226,144,231,85,234,222,253,103,
173,78,251,187,157,39,228,171,103,27,118,34,164,29,190,89,188,98,163,188,174,8,174,185,46,120,202,8,181,124,148,39,103,203,202,117,126,111,109,73,66,84,17,234,7,69,170,237,48,87,204,153,106,183,27,216,
36,84,14,19,124,197,245,201,52,68,46,158,78,136,21,213,23,16,99,161,78,136,38,233,119,13,87,52,17,109,84,247,150,70,214,146,106,166,136,79,157,181,208,59,131,25,14,122,250,156,127,162,157,144,240,122,
171,238,173,40,67,59,246,201,254,128,242,87,234,154,34,92,184,124,67,246,213,73,17,17,237,132,178,99,63,204,240,219,142,133,189,85,91,46,224,95,83,103,85,103,189,210,153,214,61,23,201,238,231,27,35,216,
196,167,36,92,26,62,63,34,248,160,106,163,8,105,165,226,136,49,117,77,81,208,4,213,95,175,192,222,190,49,250,53,54,114,30,246,73,146,231,24,53,55,203,182,43,213,94,47,88,182,122,147,188,175,162,164,229,
67,62,236,176,45,211,23,62,104,168,190,58,9,249,33,136,178,99,190,123,106,125,170,220,116,194,199,191,170,172,87,250,192,61,171,15,151,174,48,103,170,221,110,96,19,159,146,112,89,100,125,168,111,227,179,
193,193,21,98,69,245,5,161,242,241,119,130,38,168,254,122,1,90,152,231,33,203,37,77,131,147,136,243,11,150,231,6,198,91,79,13,253,122,133,89,181,126,155,188,167,162,176,62,165,250,131,80,31,22,147,220,
188,237,86,109,127,244,214,3,121,125,30,16,23,159,229,176,57,139,86,231,242,143,54,92,91,87,17,47,58,110,230,78,181,173,192,38,69,126,44,59,193,103,84,63,157,224,131,234,250,34,164,125,88,245,253,14,231,
10,154,160,250,43,27,52,16,45,84,247,148,6,254,225,242,246,224,36,226,240,240,113,190,170,34,15,31,191,138,190,159,222,251,45,101,33,147,231,36,225,40,245,20,241,209,143,237,63,119,115,172,119,101,113,
231,94,118,177,4,10,13,176,255,88,93,159,7,190,156,251,124,116,219,115,160,88,77,81,62,58,85,237,156,129,11,220,115,209,15,141,204,157,106,91,129,77,124,118,53,100,129,207,184,20,169,192,7,213,245,69,
32,86,212,150,57,98,139,24,83,215,20,165,31,169,29,208,62,52,80,221,79,22,104,174,106,179,19,103,17,31,218,153,63,177,82,145,180,166,121,217,48,180,91,222,75,81,126,255,253,95,209,242,53,155,255,214,31,
95,212,159,7,218,29,146,196,165,76,218,156,69,171,130,229,123,6,223,34,201,69,43,40,113,92,189,174,79,226,69,19,67,249,84,156,193,38,69,139,37,39,193,103,240,29,213,87,146,16,101,225,58,33,86,212,78,47,
98,139,24,83,215,20,5,77,232,236,175,108,138,164,15,70,115,85,155,157,56,139,248,247,211,231,229,46,150,58,57,249,167,247,151,248,162,108,28,218,35,239,37,4,219,127,57,244,183,254,88,175,12,85,17,60,137,
75,158,11,156,179,200,107,125,39,188,206,186,102,124,99,199,196,135,130,59,38,216,195,235,91,252,162,10,124,45,150,80,108,23,5,115,231,186,19,8,155,132,92,106,192,103,92,132,45,84,62,158,36,196,138,250,
238,66,108,169,191,15,1,154,208,217,95,153,160,121,104,159,186,151,44,208,90,52,87,181,219,137,179,136,195,137,51,23,115,139,5,217,220,122,185,141,108,205,198,29,242,62,138,194,135,44,149,89,144,167,164,
208,167,53,129,74,44,157,125,117,18,122,31,47,37,177,92,107,65,174,221,84,124,158,39,40,8,61,187,90,71,162,157,104,221,51,247,174,198,228,3,115,40,219,239,0,155,132,42,87,214,198,229,28,66,136,74,81,157,
16,43,234,109,143,216,42,242,177,56,13,52,161,179,191,178,64,235,242,214,51,64,99,209,90,213,174,194,75,196,231,46,94,157,251,181,157,27,243,205,99,92,4,214,43,67,159,158,100,103,192,206,61,221,51,176,
241,106,74,97,87,142,91,135,122,50,190,227,80,27,240,246,221,199,242,218,188,240,250,236,122,16,196,183,170,189,226,221,111,159,162,31,3,103,252,235,5,220,51,247,174,198,228,131,107,21,124,108,18,122,
105,3,223,81,125,37,193,7,213,181,190,16,19,196,6,49,146,182,140,67,140,133,220,133,3,104,65,47,191,187,160,117,121,53,0,141,69,107,85,187,10,47,17,135,34,21,183,123,93,34,137,228,243,215,70,239,198,41,
45,95,189,30,107,245,255,170,245,191,239,69,199,79,93,140,118,236,57,20,31,101,197,153,248,152,66,174,97,158,116,248,5,229,127,255,60,111,105,252,223,22,44,91,27,205,111,181,67,129,91,87,97,3,158,50,102,
204,93,18,95,207,107,21,251,98,217,180,127,252,244,197,232,202,245,59,241,19,21,79,113,89,134,206,58,30,205,61,229,93,230,234,6,233,84,187,229,105,72,242,221,180,121,65,62,180,145,38,212,245,213,177,74,
112,207,33,210,29,127,253,144,156,61,126,108,130,109,84,27,121,193,119,178,252,58,107,215,21,62,140,47,227,211,248,54,62,142,175,227,243,248,62,49,64,44,248,124,103,225,158,136,57,98,143,235,137,69,98,
146,216,36,70,137,85,98,150,255,205,127,35,150,137,105,98,155,24,39,214,137,121,98,31,13,240,173,102,84,148,34,165,33,209,88,213,102,55,188,69,124,221,230,157,185,127,97,248,53,236,199,19,23,6,255,102,
202,28,47,17,46,27,238,133,192,101,251,209,150,150,179,159,60,115,57,222,5,192,147,74,251,8,55,167,243,40,38,160,174,111,67,112,164,229,33,206,195,173,59,110,149,193,23,46,207,183,245,180,147,167,207,
221,215,224,171,68,188,70,221,186,119,53,38,31,152,67,230,82,245,209,9,182,81,109,228,5,223,193,135,84,95,109,240,193,246,73,81,124,19,31,197,87,241,89,124,23,31,198,151,171,22,95,196,188,235,178,96,72,
208,184,188,171,0,248,2,26,171,218,237,134,183,136,243,43,248,226,165,123,246,173,36,60,113,248,252,26,15,26,56,30,91,146,248,96,70,145,216,105,14,235,196,100,195,11,149,79,163,77,86,162,175,54,135,143,
159,147,215,251,82,231,74,228,220,187,26,147,47,204,165,106,191,147,208,137,161,240,29,151,140,138,248,226,87,159,92,18,251,104,149,4,187,106,160,113,121,223,80,209,86,223,111,135,222,34,14,7,142,156,
146,55,144,6,107,135,107,54,250,85,169,49,178,241,205,52,233,2,175,163,170,175,36,84,94,121,28,232,35,219,181,209,251,178,143,58,192,189,171,49,249,194,92,186,84,142,194,54,234,250,188,224,59,105,25,242,
140,124,160,117,121,190,151,160,173,170,189,52,114,137,248,207,243,151,199,9,116,212,77,116,194,107,216,185,11,87,43,145,65,172,87,240,75,76,94,105,170,118,240,212,194,73,187,178,158,92,190,111,181,205,
177,232,144,95,244,249,240,164,250,74,194,58,228,228,100,152,189,233,105,169,12,170,78,168,35,226,204,37,115,170,250,72,130,109,212,245,121,192,103,240,29,124,72,245,85,20,124,30,223,39,6,136,5,98,98,
144,222,196,209,60,180,207,53,105,25,154,138,182,170,182,210,200,37,226,144,230,76,252,186,127,252,132,120,95,115,114,204,126,16,127,24,105,57,216,180,57,139,163,5,203,214,197,79,35,155,182,237,141,118,
238,57,28,237,61,120,50,126,189,165,140,20,155,245,79,159,187,28,157,58,123,57,58,118,242,124,92,231,142,45,97,106,173,141,177,146,44,232,217,243,55,113,42,77,62,26,81,22,138,87,43,62,250,240,42,76,18,
28,62,250,112,4,120,250,220,165,45,167,46,46,240,92,207,214,44,178,205,241,49,135,117,203,34,79,231,20,52,80,253,36,9,85,121,29,142,158,24,150,125,212,1,238,93,141,41,15,204,169,234,35,9,182,81,215,186,
128,79,224,27,248,8,190,130,207,132,240,61,124,24,95,198,167,241,109,124,28,95,199,231,241,125,98,128,88,32,38,136,13,98,68,233,2,49,69,108,17,99,196,26,49,71,236,17,131,196,34,49,73,108,18,163,196,42,
49,75,236,18,195,196,114,63,214,191,93,96,172,104,33,154,152,22,151,46,15,79,138,220,34,190,108,205,102,121,35,99,99,159,163,163,39,47,196,95,146,213,117,253,128,60,204,236,17,221,127,248,84,252,165,157,
117,76,28,57,239,241,94,12,177,231,192,241,191,244,49,179,245,11,154,167,28,220,187,119,31,226,83,123,136,1,5,105,191,119,216,165,144,6,65,197,218,229,246,221,135,226,50,88,121,210,211,18,56,170,237,36,
161,182,157,193,158,253,127,157,203,58,193,189,171,49,229,129,57,85,125,36,193,54,234,218,52,240,1,124,1,159,192,55,138,10,55,62,138,175,226,179,248,46,62,172,250,77,131,88,33,102,146,237,18,83,121,31,
62,136,101,98,154,216,38,198,137,117,98,190,236,186,167,62,160,137,104,35,26,169,198,128,166,170,235,178,200,45,226,252,234,181,215,68,153,120,54,182,239,248,229,144,247,162,124,153,44,111,61,105,112,
218,140,251,107,211,57,113,121,121,248,248,229,95,130,33,196,129,27,238,143,19,94,124,249,223,185,247,112,252,250,153,28,79,30,176,19,79,72,23,46,143,58,167,49,205,250,200,198,113,243,16,135,92,218,108,
73,73,239,91,117,184,119,53,166,60,48,167,89,233,7,92,63,38,99,107,108,142,237,67,60,161,226,139,248,36,190,137,143,134,136,165,228,65,35,98,137,152,82,127,151,135,100,204,163,1,104,65,114,60,253,4,141,
68,43,209,204,246,60,198,223,68,114,218,41,183,136,3,149,190,71,174,221,142,95,203,92,182,136,113,243,108,98,39,63,194,210,213,155,90,191,146,229,110,55,60,127,41,255,171,103,22,108,200,79,86,249,15,189,
245,11,227,98,228,169,30,85,201,179,160,218,247,80,203,102,220,235,231,207,221,183,37,238,222,215,253,64,19,108,202,153,86,179,27,46,5,168,171,10,247,174,198,148,7,230,148,185,85,253,180,193,54,234,90,
192,166,216,22,27,7,173,236,222,242,193,164,224,132,34,185,149,149,88,10,153,255,167,19,180,224,47,99,10,12,90,134,166,161,109,104,156,203,195,44,154,137,118,162,161,104,169,250,27,23,10,137,120,214,107,
25,255,157,245,32,214,250,216,192,78,73,42,42,118,224,12,240,246,237,135,212,74,57,69,9,93,121,190,19,94,41,233,135,143,53,190,37,151,92,96,142,78,157,27,249,219,184,146,240,186,136,144,176,183,148,106,
232,20,131,117,181,11,235,142,172,89,118,6,103,214,241,228,243,151,178,107,105,250,208,239,100,253,69,8,93,124,132,185,85,253,180,233,76,39,129,237,176,33,182,196,166,46,182,199,71,240,21,124,6,223,201,
90,114,192,7,59,125,36,4,196,76,251,67,39,177,164,254,38,20,46,21,246,243,130,134,161,101,204,17,160,113,104,29,154,135,246,185,218,69,253,255,46,20,18,241,174,204,90,28,109,223,125,48,46,69,148,181,238,
60,122,243,190,211,214,170,60,220,189,31,62,133,102,18,210,105,242,5,122,197,218,161,210,158,34,62,124,252,93,190,177,96,244,205,219,247,197,233,68,219,1,198,63,89,111,35,73,18,71,185,73,110,52,125,78,
250,65,14,146,16,173,88,187,37,58,117,246,82,244,224,225,139,255,123,250,79,15,234,188,123,96,21,220,51,31,197,84,63,117,128,123,111,207,127,8,152,91,213,207,191,105,217,6,27,97,43,108,134,237,178,10,
120,224,3,248,2,62,129,111,224,35,73,159,193,135,240,37,37,36,248,30,62,216,121,159,33,32,102,136,29,98,168,140,52,206,73,208,130,206,177,133,0,237,66,195,84,159,109,208,64,180,16,77,44,163,130,85,48,
17,199,1,230,183,126,145,206,12,95,141,222,143,185,239,143,228,176,1,167,190,84,155,69,96,125,41,196,105,186,44,40,159,84,70,61,192,54,4,217,190,67,39,255,54,62,190,208,187,28,242,225,163,22,14,188,247,
224,241,214,19,193,202,194,235,163,172,217,134,170,243,8,108,173,251,241,231,222,231,155,15,5,247,30,106,171,37,48,183,69,211,242,98,99,108,141,205,177,189,203,199,109,124,9,159,234,108,11,223,11,249,
35,213,9,177,83,164,196,157,43,104,65,136,111,3,157,160,93,62,135,237,208,70,52,18,173,44,242,244,157,36,152,136,243,145,34,111,218,197,119,239,62,70,51,231,135,221,71,206,211,73,200,42,40,253,100,124,
252,243,95,150,157,120,165,206,243,228,207,246,50,18,40,237,222,119,52,119,214,192,89,11,86,4,21,113,182,157,177,61,76,245,85,7,184,247,144,149,217,153,91,230,88,245,149,73,203,166,216,22,27,183,83,55,
248,128,79,37,151,210,240,57,124,79,253,109,221,64,11,178,222,88,124,65,179,208,46,213,95,22,104,165,75,6,73,23,130,137,248,174,189,71,229,205,186,66,9,168,160,191,148,179,22,5,43,42,91,5,198,39,62,199,
175,207,71,78,156,111,61,185,20,31,23,123,86,47,141,220,116,206,217,145,100,227,214,95,130,37,221,242,201,93,94,69,226,252,41,129,114,124,51,167,204,173,234,39,13,108,136,45,177,169,106,215,7,124,11,31,
195,215,240,57,245,55,117,4,45,8,185,73,0,173,42,90,182,14,205,84,109,251,18,76,196,227,109,103,5,94,139,120,101,235,220,123,93,4,78,62,21,173,186,50,8,240,42,120,234,236,136,247,15,40,91,206,120,234,
43,154,67,253,214,157,236,84,168,85,135,49,168,177,185,194,28,50,151,190,91,74,177,25,182,243,121,157,31,84,208,130,60,167,33,187,81,100,79,59,160,149,69,151,205,218,4,253,176,89,36,77,45,240,42,25,106,
167,2,79,39,170,15,67,195,22,172,60,111,66,92,67,186,80,158,220,168,214,226,235,216,101,111,253,234,5,190,91,89,153,35,230,138,57,99,238,242,206,123,153,91,104,155,72,158,183,78,5,26,85,116,73,209,55,
221,108,26,65,69,156,253,169,69,63,130,60,121,246,107,228,146,91,57,11,18,208,168,246,13,13,118,59,120,228,140,156,75,87,120,146,164,24,237,245,27,247,91,175,246,110,107,246,7,143,22,235,179,10,48,6,53,
182,78,152,19,230,134,57,42,122,144,11,91,21,141,181,65,35,68,2,62,180,9,141,82,237,187,130,221,208,74,213,126,30,130,138,56,121,137,139,174,67,51,64,158,80,92,138,18,164,177,117,87,254,194,206,131,202,
228,231,127,70,43,215,13,201,249,244,101,238,226,85,209,233,225,145,120,93,53,77,108,242,172,1,87,13,198,160,198,6,140,157,57,96,46,152,19,117,189,47,216,8,91,169,254,140,238,160,9,106,62,93,65,147,208,
166,162,63,158,104,100,86,14,119,31,130,138,56,140,222,122,32,111,220,7,178,171,21,21,147,189,7,79,200,182,141,116,72,159,201,246,167,228,92,242,212,184,126,243,206,104,228,234,237,56,1,211,47,251,143,
199,251,147,201,49,157,181,20,192,186,223,241,211,23,90,142,251,119,49,231,127,251,148,161,170,42,140,65,141,141,49,51,246,172,181,79,230,144,185,100,78,153,91,230,152,185,102,206,59,159,216,177,77,136,
146,112,131,8,154,144,156,75,95,208,164,16,217,66,209,72,213,126,94,130,139,120,145,218,114,73,56,205,245,195,140,252,203,42,156,96,83,237,26,217,240,164,112,228,248,185,150,136,236,138,15,136,112,24,
68,253,29,203,3,28,60,25,190,112,237,235,19,245,172,238,167,69,57,112,114,228,196,112,124,146,173,237,31,236,198,200,179,30,92,53,24,67,123,183,14,99,99,140,140,181,219,65,171,120,142,90,115,197,156,49,
119,204,97,183,229,39,230,30,27,96,11,108,210,164,29,87,189,6,77,80,246,112,1,45,10,113,42,27,255,8,93,107,56,184,136,83,23,239,67,160,125,196,69,214,75,67,229,121,54,220,97,239,43,53,32,249,114,223,77,
192,56,28,51,180,99,127,116,113,228,70,252,79,245,55,117,36,57,166,110,135,151,152,19,230,134,57,202,123,166,194,200,79,145,188,245,174,223,61,178,64,27,209,72,213,71,94,130,139,56,79,25,161,210,148,178,
150,216,153,174,210,21,146,221,171,54,141,242,225,105,131,45,93,55,90,175,141,107,55,89,53,39,230,128,185,96,78,66,188,165,26,249,64,19,148,125,178,64,131,66,237,153,71,27,67,157,212,108,19,92,196,33,
100,142,229,188,91,208,66,230,187,54,242,131,104,61,124,252,42,200,206,128,186,193,152,25,187,9,119,53,112,201,215,174,8,185,149,179,140,220,249,165,136,56,121,27,66,149,11,227,40,240,146,149,27,100,63,
105,132,58,69,103,132,129,3,41,36,235,159,18,240,212,92,85,97,140,140,213,14,225,84,11,52,65,217,43,13,180,39,84,114,59,52,17,109,84,253,20,161,20,17,39,189,228,179,231,111,229,64,242,112,251,238,99,175,
15,96,228,242,229,48,133,106,203,232,31,60,145,82,178,43,244,154,96,149,96,108,140,209,158,190,171,7,154,224,83,180,6,205,65,123,84,91,121,64,19,203,168,49,90,138,136,3,245,241,212,64,242,192,47,24,169,
52,85,63,10,202,32,133,200,47,98,148,3,213,97,154,88,48,151,49,49,54,53,102,163,255,160,9,62,101,35,209,156,80,43,10,128,38,170,126,138,82,154,136,83,22,74,13,36,47,108,239,249,110,154,91,224,47,93,181,
169,117,141,61,9,85,21,158,82,55,109,75,175,96,83,71,24,147,61,129,87,153,255,137,181,65,217,174,19,180,38,116,161,23,52,81,245,85,148,210,68,156,215,150,80,91,13,129,224,160,146,182,234,171,19,146,9,
169,54,140,234,64,197,115,101,187,58,195,152,212,88,141,234,16,167,97,22,182,235,4,173,9,249,131,140,22,250,44,229,248,80,154,136,3,121,34,212,128,242,50,62,241,37,154,226,80,189,122,244,86,177,20,145,
70,249,228,221,238,85,101,108,91,107,245,65,27,148,237,146,160,49,104,141,186,62,47,104,161,234,43,4,165,138,120,168,211,155,109,104,235,204,240,21,217,87,27,146,244,231,77,212,110,244,142,147,103,46,
73,251,213,25,198,164,198,106,84,7,180,33,171,8,9,26,19,90,183,66,159,210,76,82,170,136,115,180,56,244,201,52,202,57,45,88,182,86,247,215,98,229,186,173,182,181,171,6,236,218,155,94,81,191,142,48,38,53,
86,163,58,160,13,104,132,178,31,160,45,161,203,45,162,129,101,212,214,108,83,174,136,183,8,117,232,134,95,51,242,70,112,116,150,194,170,170,47,184,104,235,146,181,128,42,235,202,126,117,134,49,169,177,
26,213,2,141,80,246,3,180,5,141,65,107,66,61,141,231,61,100,228,74,233,34,78,241,213,34,147,193,181,175,127,29,139,14,28,62,149,153,190,241,235,90,86,115,74,74,53,149,201,214,147,206,156,69,97,210,178,
86,9,198,196,216,212,152,141,234,128,70,100,125,91,67,107,208,28,180,167,168,126,169,2,212,33,41,93,196,73,195,153,167,246,31,131,39,187,219,208,142,125,206,95,117,249,242,92,100,194,141,222,192,83,78,
136,194,31,85,131,49,89,150,193,234,131,70,184,238,82,65,123,208,32,180,40,143,182,160,125,161,202,176,117,163,116,17,7,159,26,132,76,212,195,71,47,227,170,219,62,137,98,248,219,151,175,222,203,54,141,
106,241,248,233,107,105,195,38,192,216,212,152,141,106,129,86,248,234,11,154,132,54,249,136,121,47,106,200,246,68,196,93,202,182,241,223,159,61,127,19,151,174,82,109,100,49,180,51,236,78,24,163,60,200,
43,162,108,216,4,24,155,26,179,81,45,208,10,52,67,217,48,11,52,10,173,114,209,180,144,101,216,186,209,19,17,231,203,236,216,248,164,28,40,144,80,127,207,129,99,209,119,83,243,109,134,255,113,198,130,232,
245,175,227,178,109,163,122,236,59,84,172,194,74,149,97,108,106,204,70,245,64,51,208,14,101,199,44,208,42,52,171,93,12,68,129,230,149,185,43,165,77,111,68,188,197,229,43,183,254,54,72,42,70,159,62,55,
146,249,193,50,13,94,115,168,124,210,217,182,81,77,120,58,89,181,190,251,22,175,186,195,216,236,141,176,62,160,29,62,203,42,157,160,93,104,152,170,126,143,230,169,107,66,211,51,17,95,179,113,219,191,157,
155,125,152,212,16,44,82,95,145,137,159,54,123,73,116,248,248,57,219,23,94,35,62,124,248,35,119,161,143,58,192,216,24,163,26,187,81,61,208,14,52,4,45,41,34,230,104,25,154,214,222,99,142,214,161,121,234,
111,67,211,51,17,255,97,250,188,56,21,227,245,27,247,162,197,57,242,131,199,162,61,103,113,156,89,236,204,240,72,244,248,201,235,104,60,224,94,78,163,55,188,122,253,62,250,182,1,117,53,187,193,216,24,
163,26,187,81,77,208,16,180,4,77,65,91,208,24,180,38,143,168,163,109,104,28,90,135,230,169,191,9,77,207,68,28,166,205,246,91,31,250,126,218,220,214,164,108,140,14,31,59,27,221,127,248,60,250,148,99,171,
162,81,45,174,141,222,147,182,110,18,140,81,141,221,168,15,104,13,154,131,246,160,65,104,145,178,117,55,124,181,174,8,61,21,113,39,102,47,138,182,238,58,16,141,92,187,19,127,52,176,39,237,102,113,224,
200,105,109,247,6,193,24,213,216,141,122,130,6,161,69,104,18,218,132,70,41,187,247,139,74,136,56,175,45,236,193,188,121,251,177,21,147,109,56,105,121,43,154,2,99,84,99,55,234,15,218,132,70,161,85,190,
103,89,202,162,239,34,206,105,166,155,183,31,218,199,201,1,224,195,199,223,75,63,189,86,5,24,35,99,85,115,96,52,7,52,11,237,234,183,79,247,85,196,167,204,92,20,127,0,176,39,239,193,128,66,181,223,84,224,
201,165,108,24,163,21,234,30,12,208,46,52,12,45,83,190,208,11,250,42,226,251,15,157,50,1,31,32,206,95,26,149,126,208,68,24,171,154,3,163,121,160,97,104,153,242,131,94,208,87,17,191,100,71,148,7,138,237,
187,15,74,63,104,34,140,85,205,129,209,76,208,50,229,7,189,160,175,34,30,186,142,157,81,93,176,243,188,37,107,164,31,52,17,198,106,190,61,24,96,103,215,250,191,101,208,87,17,255,97,198,188,232,215,55,
150,243,100,16,120,251,238,67,203,222,243,165,31,52,17,198,202,152,213,92,24,205,2,13,67,203,148,31,244,130,190,138,56,108,222,182,183,245,75,102,59,83,154,78,153,133,98,171,74,232,66,225,70,245,64,187,
208,48,101,255,94,209,119,17,231,152,242,221,251,207,228,4,25,205,97,239,193,227,210,254,77,134,49,171,185,48,154,3,218,213,239,52,18,125,23,113,88,186,106,83,240,226,164,70,117,96,205,112,209,138,245,
210,246,77,134,49,219,186,120,115,65,179,208,46,101,251,94,82,9,17,231,212,211,240,197,235,114,162,140,250,243,126,108,210,185,196,94,147,96,204,140,93,205,137,81,127,208,44,59,177,153,224,231,249,203,
204,225,27,202,141,91,15,43,225,236,189,134,49,51,118,53,39,70,189,65,171,208,44,101,247,94,83,25,17,135,125,135,78,218,235,103,3,217,123,176,185,149,124,178,96,236,106,78,140,250,130,70,161,85,202,222,
253,160,82,34,78,181,240,23,47,223,201,137,51,234,203,130,101,235,164,189,7,1,198,174,230,196,168,47,104,20,90,165,236,221,15,42,37,226,64,102,48,123,26,111,14,99,173,215,78,101,231,65,130,57,80,115,99,
212,15,180,9,141,82,118,238,23,149,19,113,214,17,71,111,61,144,19,104,212,143,171,163,119,165,157,7,9,230,64,205,141,81,63,208,166,170,125,223,169,156,136,195,220,197,171,162,143,159,254,33,39,209,168,
15,60,181,236,248,229,176,180,241,32,193,28,216,219,101,253,65,147,208,38,101,227,126,82,73,17,135,19,167,47,154,227,215,156,207,159,255,140,230,44,90,41,237,59,72,48,7,204,133,154,35,163,30,160,69,104,
146,178,111,191,169,172,136,79,153,185,208,242,170,212,28,10,6,255,215,143,131,183,181,176,19,230,192,138,39,215,27,180,8,77,82,246,237,55,149,21,113,24,218,185,223,158,198,107,204,217,243,87,165,93,7,
17,230,66,205,145,81,125,208,32,180,72,217,181,10,84,90,196,201,73,112,239,129,229,85,169,43,235,54,239,146,118,29,68,152,11,53,71,70,245,65,131,250,157,31,37,141,74,139,56,44,90,177,33,154,156,180,143,
156,117,99,98,226,75,52,101,86,181,170,130,247,19,230,130,57,81,115,101,84,23,180,7,13,82,54,173,10,149,23,113,176,87,209,250,113,231,222,19,105,203,65,134,57,81,115,101,84,151,58,44,9,214,66,196,167,
205,94,18,189,125,247,81,78,178,81,77,6,249,168,125,55,236,8,126,189,64,115,208,30,101,203,42,81,11,17,135,109,187,172,102,97,93,248,252,249,159,209,130,101,107,165,29,7,25,230,132,185,81,115,102,84,15,
52,71,217,177,106,212,70,196,191,249,105,86,116,235,206,35,57,217,70,181,120,249,234,125,244,237,212,57,210,142,131,12,115,194,220,168,57,51,170,5,90,131,230,40,59,86,141,218,136,56,204,90,176,34,250,
240,225,15,57,233,70,117,56,51,124,69,218,207,152,26,207,141,154,51,163,58,160,49,104,141,178,95,21,169,149,136,195,206,61,71,108,239,120,133,193,54,171,55,108,151,182,51,166,198,115,99,254,91,93,176,
13,26,163,108,87,85,106,39,226,36,159,177,2,180,213,229,183,247,159,42,123,178,173,10,48,55,204,145,154,59,163,255,160,45,117,43,96,82,59,17,135,233,115,22,87,246,72,62,191,228,4,233,157,123,79,163,115,
23,174,69,251,15,159,138,54,110,253,37,90,190,102,115,180,112,217,186,248,53,141,138,32,179,22,44,143,230,46,94,29,215,97,92,185,110,107,180,105,219,158,104,207,254,227,113,126,134,171,215,239,69,143,
158,188,138,222,189,251,88,187,167,182,107,163,247,164,205,140,255,192,28,169,185,171,42,248,32,190,136,79,226,155,248,40,190,138,207,226,187,248,48,190,140,79,127,245,237,21,177,175,227,243,248,62,49,
64,44,16,19,196,70,85,125,26,77,65,91,148,205,170,76,45,69,28,86,111,216,22,125,250,212,191,47,253,109,177,190,255,240,69,116,246,252,149,214,43,216,225,216,105,127,158,183,52,250,113,198,124,121,207,
62,252,247,79,179,163,31,90,237,204,156,191,60,90,183,121,71,116,240,200,233,86,0,221,141,63,140,125,170,112,134,199,173,187,14,200,241,24,255,129,57,82,115,87,5,240,45,124,12,95,195,231,240,61,124,16,
95,196,39,213,120,124,32,54,136,17,98,133,152,33,118,136,161,126,139,59,90,130,166,168,123,174,58,181,21,113,192,201,122,101,120,250,25,27,251,28,221,186,243,36,46,205,196,41,46,94,141,123,253,234,245,
221,212,57,255,39,236,59,163,99,167,206,71,15,30,189,136,239,171,10,79,55,164,234,156,49,119,169,188,111,227,63,48,71,85,72,181,220,246,105,124,8,95,194,167,240,45,124,76,221,119,89,16,67,196,18,49,69,
108,17,99,189,244,105,250,65,75,212,189,213,129,90,139,56,91,182,174,223,40,239,213,52,118,242,241,47,209,200,181,219,209,134,161,221,209,180,217,213,124,213,226,190,86,172,29,138,14,31,63,215,122,170,
121,30,77,76,252,222,23,81,191,123,255,89,207,127,212,234,8,115,196,92,169,57,44,19,124,2,223,192,71,240,21,124,166,202,62,77,204,17,123,196,96,153,254,140,134,212,121,75,108,173,69,28,48,118,232,52,159,
95,190,252,43,122,252,244,117,180,227,151,67,209,212,58,230,255,152,181,56,90,187,105,123,116,242,204,165,232,249,139,183,209,228,228,159,61,17,245,61,7,142,235,251,49,254,6,115,165,230,48,36,216,28,219,
227,3,248,2,62,129,111,168,251,169,52,173,24,36,22,137,73,98,83,141,53,47,104,71,85,127,200,92,169,189,136,195,194,101,235,163,143,31,139,239,31,199,65,110,220,122,24,45,111,61,161,52,233,137,146,87,228,
109,187,15,70,87,174,223,137,159,106,212,216,139,130,96,212,105,111,109,191,97,174,202,250,97,197,198,216,26,155,99,123,213,127,29,33,38,137,77,98,52,132,152,163,25,104,135,234,171,78,52,66,196,129,175,
224,121,13,75,48,221,188,253,40,90,180,188,254,6,205,130,64,88,186,106,83,116,234,236,165,232,215,55,19,193,132,132,157,11,182,148,226,14,115,197,156,169,185,244,5,27,98,75,108,138,109,7,193,14,196,42,
49,155,215,127,209,10,52,67,181,93,55,26,35,226,112,232,216,89,47,163,242,183,207,90,175,154,28,192,24,68,1,250,110,234,220,184,114,55,123,99,39,39,243,239,244,97,30,15,30,61,35,251,48,186,195,156,229,
21,33,192,102,216,14,27,98,75,213,71,147,33,102,137,93,98,216,55,238,209,10,213,102,29,105,148,136,127,51,101,118,116,105,228,166,147,65,63,126,250,35,58,114,252,92,244,253,180,121,178,173,65,131,125,
190,103,134,71,162,241,28,203,45,204,247,188,37,107,100,187,70,119,152,179,60,34,142,141,176,21,54,83,237,14,26,196,48,177,76,76,171,249,74,194,124,163,17,104,133,106,171,142,52,74,196,129,253,172,28,
42,80,6,4,140,200,135,30,94,59,213,245,131,14,135,53,248,8,230,179,118,254,242,213,111,178,45,35,27,230,78,205,169,2,155,96,27,108,164,218,26,116,136,105,98,59,237,135,17,109,64,35,212,245,117,165,113,
34,14,211,231,44,137,158,61,127,243,55,3,98,92,62,248,212,114,199,73,143,225,131,24,9,241,179,62,24,51,167,71,79,94,144,109,24,217,48,119,105,162,3,216,0,91,52,233,35,101,105,180,98,155,24,87,115,138,
38,160,13,242,186,26,211,72,17,135,57,139,86,70,111,223,78,252,219,128,191,255,254,175,86,192,156,111,212,107,84,47,152,191,116,77,116,117,244,110,244,229,203,159,127,9,136,54,159,191,252,43,62,118,173,
174,53,178,97,238,152,67,53,183,204,57,115,143,13,212,181,134,134,24,39,214,137,249,246,92,162,5,104,130,250,251,186,211,88,17,135,197,43,54,68,227,19,95,79,126,237,59,116,98,32,63,94,134,98,229,186,161,
214,147,204,223,95,85,217,103,171,254,222,112,167,243,156,3,115,204,92,51,231,234,239,141,108,136,117,98,158,185,68,3,208,2,245,119,77,160,209,34,14,203,214,108,137,141,169,254,155,225,7,79,56,187,247,
29,139,198,199,63,255,91,112,120,226,81,127,107,184,195,28,182,231,147,185,101,142,237,141,49,12,196,62,26,160,254,91,83,104,188,136,27,225,33,129,209,200,213,219,113,178,36,91,74,41,14,115,200,92,50,
167,204,173,250,27,195,232,134,137,184,145,11,94,87,87,172,221,98,79,140,1,96,14,153,75,91,238,51,242,96,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,
134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,
68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,
198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,
97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,
195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,109,153,26,253,47,78,138,0,3,224,198,87,248,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GUI::hands1_png = (const char*) resource_GUI_hands1_png;
const int GUI::hands1_pngSize = 15642;

// JUCER_RESOURCE: hands1_png2, 15633, "../../../../Pictures/hands/hands1.png"
static const unsigned char resource_GUI_hands1_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,113,0,0,1,0,8,6,0,0,0,69,249,70,192,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,
72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,60,179,73,68,65,84,120,94,237,157,103,155,220,54,178,182,223,95,119,142,179,146,149,115,206,97,148,173,156,243,40,141,194,40,231,44,75,178,102,70,210,
72,246,174,247,188,63,140,167,111,234,244,46,221,126,154,4,72,176,155,100,215,135,251,178,119,61,4,8,84,213,211,36,8,84,253,191,67,135,14,69,134,97,24,70,61,49,17,55,12,195,168,49,38,226,134,97,24,53,
198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,
163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,
134,97,212,24,19,241,62,176,104,197,250,232,242,149,91,209,171,215,239,163,241,137,47,209,199,143,127,68,239,199,38,163,91,119,30,71,235,54,239,138,254,251,167,89,242,58,195,232,55,248,38,62,138,175,226,
179,248,46,62,140,47,227,211,248,182,186,206,40,15,19,241,30,179,96,217,218,232,67,203,241,255,248,227,255,75,190,124,249,87,116,241,242,141,232,251,233,115,229,245,134,209,47,240,73,124,19,31,85,190,
11,248,54,62,174,174,55,202,193,68,188,199,156,60,115,89,58,127,146,223,127,255,159,232,192,145,211,242,122,195,232,23,248,36,190,169,124,54,9,62,174,174,55,202,193,68,188,199,220,123,240,92,58,126,39,
231,206,95,147,215,27,70,191,192,39,149,175,118,130,143,171,235,141,114,48,17,239,49,239,223,79,74,199,239,228,210,200,77,121,189,97,244,11,124,82,249,106,39,248,184,186,222,40,7,19,241,30,242,195,140,
249,209,231,148,245,196,36,215,70,239,201,54,12,163,95,224,147,202,87,59,193,199,241,117,213,134,17,30,19,241,30,50,119,241,106,167,53,69,184,121,251,145,108,195,48,250,5,62,169,124,181,19,124,28,95,87,
109,24,225,49,17,239,33,171,214,111,115,22,241,59,247,158,202,54,12,163,95,224,147,202,87,59,193,199,241,117,213,134,17,30,19,241,30,50,180,99,159,179,136,63,120,244,66,182,97,24,253,2,159,84,190,218,
9,62,142,175,171,54,140,240,152,136,247,144,189,7,79,72,167,87,60,121,250,90,182,97,24,253,2,159,84,190,170,192,215,85,27,70,120,76,196,123,200,177,83,23,164,195,43,158,191,120,43,219,48,140,126,129,79,
42,95,85,224,235,170,13,35,60,38,226,61,100,248,226,117,233,240,138,103,38,226,70,197,192,39,149,175,42,240,117,213,134,17,30,19,241,30,114,245,250,93,233,240,138,151,175,222,203,54,12,163,95,224,147,
202,87,21,248,186,106,195,8,207,64,137,248,55,63,205,138,214,108,220,22,29,57,49,28,157,187,112,45,58,114,252,92,52,111,73,239,182,66,145,52,72,57,188,130,132,66,170,13,195,232,23,248,164,242,85,5,190,
174,218,40,3,98,152,88,142,99,186,21,219,196,56,177,174,254,182,137,12,140,136,47,94,185,33,122,241,242,221,95,118,135,240,239,147,147,127,70,43,215,109,149,215,132,230,254,67,183,175,251,240,235,155,
113,217,134,97,244,11,124,82,249,170,2,95,87,109,132,134,216,37,134,59,227,154,88,39,230,213,53,77,99,32,68,252,191,127,154,29,141,141,117,63,238,222,139,245,59,82,120,62,125,246,70,246,175,120,245,122,
76,182,99,24,253,2,159,84,190,170,192,215,123,145,82,57,237,59,19,49,79,236,171,235,154,196,64,136,248,212,89,139,82,211,103,222,188,253,80,94,23,146,111,166,204,142,94,190,250,77,246,175,120,241,242,
55,217,142,97,244,11,124,82,249,170,2,95,199,231,85,59,33,33,118,85,255,64,204,19,251,234,186,38,49,16,34,62,119,241,170,214,43,86,119,17,127,244,228,85,233,191,216,56,180,207,147,204,179,231,182,59,197,
168,22,248,164,242,85,5,190,94,182,136,19,179,196,174,234,31,136,121,98,95,93,219,36,6,66,196,151,173,222,244,151,53,179,78,248,96,243,253,180,114,139,48,224,208,62,107,138,143,158,188,148,237,148,1,247,
54,99,238,146,104,237,166,29,209,158,3,199,227,188,209,124,28,250,126,250,60,249,247,70,239,193,22,216,4,219,96,35,108,133,205,122,241,180,219,6,159,84,190,170,192,215,203,190,55,98,54,237,99,43,49,79,
236,171,107,155,196,64,136,248,186,77,59,83,69,156,242,82,63,150,156,117,13,135,246,249,186,127,247,126,239,114,167,108,222,190,55,250,52,249,207,191,244,207,124,113,191,155,183,239,235,201,218,166,161,
97,238,177,1,182,232,244,97,108,134,237,212,117,101,128,79,38,251,79,131,251,45,91,196,137,89,98,87,245,15,204,23,177,175,174,109,18,3,33,226,219,118,31,148,70,110,131,177,167,205,46,119,237,140,96,244,
121,29,189,58,218,187,125,182,39,78,95,148,247,0,204,205,198,173,191,200,235,140,242,97,238,59,197,59,9,182,83,215,149,1,62,169,238,65,129,175,151,253,227,79,204,166,205,13,16,251,234,218,38,49,16,34,
190,239,208,73,105,224,36,243,151,172,145,215,134,2,135,190,255,224,153,236,91,113,234,220,136,108,167,12,70,111,62,144,247,208,102,219,174,3,242,58,163,124,152,123,101,147,54,216,78,93,87,6,248,164,186,
7,5,190,94,182,136,19,179,170,239,36,196,190,186,182,73,12,132,136,187,228,44,233,69,234,76,159,99,247,59,247,30,150,109,132,134,64,123,254,242,157,188,135,54,38,226,253,35,75,196,177,93,217,98,217,6,
159,84,247,160,232,197,182,93,98,86,245,157,100,16,114,184,12,132,136,159,187,112,85,26,56,73,47,82,103,242,228,112,239,254,179,104,124,252,115,234,107,224,219,119,31,162,217,11,87,200,54,66,51,101,214,
162,204,146,113,219,119,235,107,141,242,97,238,149,77,218,96,59,108,168,174,13,13,62,137,111,170,251,0,124,26,223,198,199,203,126,179,5,98,86,221,71,18,98,95,93,219,36,6,66,196,71,174,221,145,6,78,210,
171,212,153,60,53,177,150,71,229,147,101,107,182,68,235,54,239,140,63,92,177,118,55,180,99,127,124,2,109,218,236,197,242,218,50,96,11,214,231,207,127,202,57,105,179,109,87,243,215,21,171,10,115,175,108,
210,6,219,245,114,27,29,190,137,143,226,171,248,44,190,139,15,227,203,248,52,190,221,171,55,3,151,212,206,196,190,186,182,73,12,132,136,187,148,149,58,62,160,169,51,217,170,166,230,35,137,45,167,244,143,
172,229,20,192,134,234,218,166,67,204,170,249,72,50,8,101,14,7,66,196,93,42,146,92,184,124,67,94,219,116,216,115,172,230,35,137,137,120,255,112,17,113,108,168,174,109,58,196,172,154,143,36,131,80,33,171,
241,34,30,127,184,115,200,131,124,227,86,185,71,239,185,143,13,67,187,163,147,103,46,71,35,87,111,71,215,111,220,143,174,141,222,143,255,125,248,226,215,140,138,172,241,241,74,218,171,215,81,24,190,112,
77,206,71,146,45,86,106,171,111,48,247,202,38,73,176,161,186,182,12,240,77,124,20,95,197,103,241,93,124,24,95,198,167,249,119,124,28,95,47,219,143,137,89,53,31,73,136,253,94,198,83,63,104,188,136,115,
224,192,229,164,228,195,199,175,228,245,161,152,189,112,101,230,158,86,254,59,144,119,98,193,178,181,178,157,208,220,189,159,189,237,113,243,182,222,29,40,49,254,10,115,175,108,146,4,27,170,107,67,131,
79,226,155,109,63,85,247,210,134,255,142,207,171,118,66,65,204,170,190,147,244,226,228,104,191,105,188,136,127,219,50,224,251,247,159,164,129,147,144,186,242,187,105,115,100,27,33,24,218,185,95,246,219,
141,83,103,47,201,118,66,130,115,191,121,59,33,251,79,178,97,200,14,251,244,11,230,94,217,36,9,54,236,133,80,225,147,170,255,110,224,243,170,157,16,16,171,196,172,234,55,9,177,143,6,168,54,154,194,0,60,
137,207,137,62,124,248,93,26,56,201,219,86,32,148,121,244,62,237,84,164,162,236,229,29,152,62,103,73,52,49,145,61,55,107,7,224,232,114,85,97,238,149,77,146,96,67,108,169,174,15,137,203,242,69,146,50,79,
147,18,171,196,172,234,55,9,177,143,6,168,54,154,66,243,159,196,167,206,137,62,125,250,135,52,112,146,177,241,47,209,212,18,143,222,95,191,113,79,246,219,141,39,79,127,149,237,132,100,209,138,245,209,
231,148,20,189,109,86,173,239,77,209,12,227,239,48,247,202,38,73,176,33,182,84,215,135,4,159,84,253,119,3,159,87,237,132,128,88,37,102,85,191,73,136,125,52,64,181,209,20,6,66,196,63,58,136,56,127,67,86,
56,213,70,81,120,213,77,75,153,169,96,45,79,181,21,18,242,114,168,190,147,176,182,185,116,85,243,51,193,85,21,230,62,107,253,25,122,145,223,198,39,11,39,224,243,101,45,243,16,171,174,113,109,34,94,115,
88,15,251,205,97,77,156,67,19,63,207,91,38,219,40,202,247,211,231,166,158,116,83,188,251,237,99,233,235,156,7,143,156,150,125,39,33,177,254,162,229,229,63,229,25,26,230,62,173,160,73,27,108,169,174,15,
5,190,136,79,170,190,187,129,207,227,251,170,189,162,16,171,89,135,212,128,216,183,53,241,6,192,169,178,151,175,198,82,159,104,30,63,125,29,253,80,210,154,248,148,153,11,255,150,234,53,11,142,83,255,80,
114,62,239,139,35,55,101,223,73,184,111,182,148,169,235,141,242,97,238,93,124,7,91,170,235,67,129,47,102,165,103,232,132,251,198,247,85,123,69,33,86,137,89,213,47,16,235,196,60,177,175,174,111,18,3,33,
226,109,166,204,92,20,23,79,229,152,240,214,93,7,163,93,123,143,198,185,41,150,175,217,92,234,175,245,156,69,84,22,202,126,37,78,66,14,138,159,74,10,128,54,46,133,155,63,124,248,163,180,55,20,35,27,230,
30,27,40,219,36,41,187,48,49,190,136,79,170,190,187,129,207,227,251,170,189,16,16,179,196,46,49,76,44,19,211,196,54,49,78,172,171,107,154,200,64,137,120,191,88,190,102,139,116,242,52,198,199,191,148,158,
67,197,229,245,152,192,45,235,105,202,200,134,185,119,17,79,108,169,174,15,5,190,136,79,170,190,211,192,247,85,123,70,56,6,78,196,217,95,202,171,33,107,117,189,218,122,68,245,21,229,224,105,76,124,248,
61,154,49,119,169,108,47,4,83,103,45,140,62,126,204,126,194,123,251,246,67,227,79,188,85,25,230,30,27,40,219,36,193,150,216,84,181,17,2,124,17,159,84,125,167,209,171,202,67,196,50,49,77,108,151,121,222,
163,138,52,94,196,121,229,58,120,244,76,92,90,138,146,81,28,140,224,131,11,240,181,253,249,139,55,209,157,123,79,162,179,231,175,198,217,217,84,27,69,113,201,79,210,9,65,57,107,65,121,233,104,57,125,231,
242,97,168,236,147,172,70,54,46,39,19,177,101,153,167,124,241,69,151,31,253,78,202,202,235,66,172,18,179,196,46,49,76,44,183,227,154,24,39,214,137,121,98,223,62,108,214,156,37,43,55,74,231,82,96,248,239,
74,40,152,236,146,109,173,19,246,183,206,89,84,222,177,229,249,75,215,182,158,172,190,100,174,213,159,191,84,126,114,127,35,29,108,160,108,211,6,27,98,75,108,170,174,15,1,190,232,114,222,162,147,50,178,
131,18,163,196,170,234,79,129,6,168,118,154,66,227,69,124,139,199,82,6,78,58,107,193,114,217,78,17,206,95,26,149,253,165,49,57,249,143,168,236,60,209,60,93,49,63,135,142,157,141,239,145,167,26,158,104,
216,91,203,206,2,254,185,126,243,46,121,173,209,59,176,65,210,38,216,8,91,97,51,108,135,13,203,124,107,3,124,17,159,84,190,154,70,124,143,162,189,34,16,163,62,63,40,177,143,139,118,154,66,227,69,124,175,
199,82,6,79,52,124,237,86,237,20,33,171,134,165,98,114,242,207,104,222,146,254,108,237,99,77,113,218,156,197,209,79,51,23,200,255,110,244,30,108,129,77,250,181,222,139,47,226,147,202,87,211,40,163,6,40,
49,234,179,219,11,13,80,237,52,133,198,139,248,209,19,195,210,176,221,160,98,137,106,167,8,15,31,191,148,125,165,81,246,26,167,97,248,224,250,13,165,19,124,95,181,87,4,98,84,245,213,13,52,64,181,211,20,
26,47,226,62,21,186,225,192,145,83,178,157,188,112,228,55,171,16,177,130,124,24,11,151,175,147,109,22,133,143,66,228,160,62,121,230,82,180,231,192,137,248,117,157,190,40,173,245,95,63,218,78,148,170,131,
141,176,21,54,195,118,216,16,91,98,211,178,62,206,211,151,75,158,157,78,240,253,208,199,222,137,81,213,87,55,208,0,213,78,83,104,188,136,95,116,168,254,145,228,244,185,43,178,157,188,112,178,204,55,231,
4,196,199,221,75,74,106,116,109,244,175,201,184,120,53,229,41,139,108,120,124,221,191,247,224,121,252,229,127,253,150,93,141,255,178,95,7,176,1,182,192,38,216,6,27,97,43,108,214,185,172,128,109,85,27,
69,193,23,93,142,255,119,130,239,135,62,9,77,140,170,190,186,129,6,168,118,154,66,227,69,188,83,176,178,184,18,184,176,42,123,119,223,143,249,29,87,6,130,115,201,202,13,178,205,34,144,3,131,196,254,170,
207,78,184,135,178,158,236,12,119,176,129,235,26,48,182,45,35,231,14,190,232,122,15,73,240,253,208,251,215,137,81,213,87,55,202,250,97,171,10,141,23,241,91,119,158,72,195,118,227,222,131,176,85,82,200,
243,156,103,127,45,1,179,116,85,248,143,172,60,21,249,172,109,90,105,182,254,227,82,162,173,13,182,45,35,7,16,190,152,71,196,241,253,208,185,206,137,81,213,87,55,208,0,213,78,83,104,188,136,187,228,7,
73,194,26,158,106,39,47,51,231,47,111,57,191,255,107,40,44,91,29,62,5,236,226,21,27,100,95,221,40,179,58,139,225,134,111,85,40,108,172,218,41,2,190,168,250,202,2,223,39,6,84,155,121,241,253,198,84,118,
94,153,126,211,104,17,103,45,209,55,145,253,219,119,31,131,30,51,231,0,134,234,199,133,21,235,134,100,155,69,216,234,41,8,155,182,237,145,237,24,189,3,27,40,219,116,3,27,171,118,138,128,47,170,190,92,
8,121,8,41,78,67,208,138,81,213,79,55,208,128,38,127,219,105,180,136,179,167,246,197,75,183,245,223,54,99,227,147,209,143,51,194,237,143,206,251,4,3,101,136,184,111,153,56,62,168,169,118,138,176,124,237,
80,180,239,208,201,56,7,246,142,95,190,38,8,171,227,158,116,238,153,123,103,12,140,133,49,49,54,245,183,69,192,6,202,54,221,40,163,44,90,17,17,15,249,70,73,108,18,163,170,159,110,160,1,253,218,95,223,
11,26,45,226,36,196,113,41,4,156,228,195,199,176,137,167,86,111,216,46,251,113,161,12,17,247,173,147,24,250,195,230,15,51,230,253,109,183,14,107,173,172,157,222,188,253,176,39,101,198,138,194,61,114,175,
220,115,231,58,241,215,221,24,97,243,192,99,131,100,31,89,148,81,159,181,136,136,19,3,170,205,60,16,155,196,168,234,167,27,104,64,89,197,41,170,64,163,69,156,96,242,221,25,50,249,249,159,209,188,37,107,
100,123,121,112,41,129,214,141,208,34,206,211,136,235,206,148,54,161,243,78,176,223,56,237,27,193,243,23,97,191,73,148,1,247,168,238,29,24,91,232,253,253,62,249,127,0,27,135,126,242,44,34,226,33,75,199,
17,155,196,168,234,167,27,104,64,232,31,214,42,209,104,17,255,233,231,5,222,59,67,190,238,10,9,247,250,183,109,215,1,217,143,11,203,215,134,205,197,76,162,124,159,156,19,204,197,252,165,225,126,208,96,
247,190,99,178,175,54,36,54,82,215,85,137,172,228,75,140,81,93,151,23,108,224,179,51,4,27,135,46,138,128,47,170,190,92,32,6,84,155,121,112,173,57,154,4,13,64,11,84,123,77,160,209,34,142,35,231,57,101,
22,50,233,211,206,189,135,101,31,89,132,254,49,1,158,16,85,95,221,32,225,210,236,133,97,51,41,94,189,158,190,111,191,238,79,226,192,24,213,117,121,193,6,46,37,218,146,132,126,27,200,35,158,109,136,1,213,
102,30,136,77,213,71,26,104,64,147,43,253,52,90,196,217,159,170,140,154,197,142,61,186,189,60,236,57,144,254,228,217,13,78,199,81,102,74,181,153,151,33,143,253,198,64,17,128,159,231,133,251,62,192,186,
100,214,233,213,167,207,222,200,107,171,4,247,168,238,189,13,99,12,185,6,139,13,124,11,50,96,107,213,86,94,240,197,60,39,54,129,24,80,109,230,129,216,84,125,100,17,122,175,122,149,104,180,136,147,158,
83,25,52,139,195,199,207,201,246,242,176,247,160,127,65,8,152,108,61,121,45,8,156,31,250,216,169,243,178,175,110,188,31,251,28,77,157,21,174,68,28,91,205,178,14,26,61,122,82,253,34,20,220,163,186,247,
54,140,49,228,182,58,108,128,45,84,95,221,192,214,170,173,188,224,139,248,164,234,43,11,98,64,181,153,7,98,83,245,145,69,217,169,122,251,73,163,69,156,181,68,101,208,44,134,47,134,43,132,176,123,223,81,
217,71,22,172,227,205,156,31,182,64,241,245,27,247,101,95,221,32,71,199,143,1,79,255,237,220,115,68,246,147,228,254,195,231,242,218,42,193,61,170,123,79,194,88,213,181,121,192,6,216,66,245,211,13,108,
173,218,202,11,190,232,251,125,169,13,49,160,218,204,3,177,169,250,200,34,244,183,157,42,209,104,17,247,93,3,110,19,114,139,214,154,141,219,115,57,255,111,239,63,181,94,201,195,125,81,231,176,195,179,
231,111,101,95,221,120,253,235,88,244,237,212,112,203,2,151,174,220,146,253,36,185,125,183,250,71,164,185,71,117,239,73,24,171,186,54,15,216,0,91,168,126,186,129,173,67,30,112,193,23,241,73,213,87,26,
248,62,49,160,218,204,131,239,22,217,54,161,191,17,84,137,70,139,184,239,17,243,54,79,159,253,42,219,203,203,212,217,139,162,249,75,214,196,201,236,87,111,216,22,173,223,178,59,174,54,178,125,55,203,45,
39,163,227,167,46,70,23,71,110,68,55,111,63,138,30,62,122,25,191,174,135,92,210,129,175,137,184,252,94,201,95,4,76,65,192,73,187,87,175,179,133,104,244,102,248,61,206,161,225,30,213,189,39,97,172,33,79,
254,98,11,213,79,55,190,46,133,133,77,60,133,79,226,155,248,40,190,138,207,226,187,248,48,190,140,79,227,219,248,56,190,142,207,227,251,170,173,188,16,155,106,188,89,148,145,138,160,42,52,251,73,124,89,
190,39,241,223,222,127,148,237,213,153,57,139,86,121,239,46,120,252,228,181,108,43,15,113,161,93,135,237,141,87,71,195,102,145,44,3,238,81,221,123,18,198,26,114,29,22,91,168,126,186,129,173,177,185,106,
171,206,16,155,106,188,89,160,5,170,189,38,208,104,17,167,184,171,50,104,22,188,2,126,63,61,124,38,184,126,178,110,243,78,57,214,52,66,102,116,92,183,121,151,211,143,200,197,145,155,242,250,42,193,61,
170,123,79,194,88,25,179,186,62,15,190,153,251,0,155,171,182,234,10,49,153,119,93,190,204,162,227,253,166,209,34,62,165,245,58,153,199,232,28,150,152,54,59,204,150,36,246,215,146,144,136,36,70,43,214,
110,137,247,252,146,42,148,19,117,228,125,110,195,171,119,153,85,117,200,235,161,198,154,6,71,203,85,91,121,56,118,210,109,103,204,185,11,215,228,245,85,130,123,84,247,222,9,99,86,215,231,1,91,168,62,
210,192,230,170,173,16,224,171,248,108,210,135,241,105,124,27,31,199,215,241,121,124,63,212,121,7,98,210,231,176,90,27,52,0,45,80,109,54,129,70,139,56,144,124,135,181,188,203,87,110,69,183,238,60,142,
215,244,248,232,195,209,228,54,79,159,191,137,30,61,126,25,87,16,191,212,122,202,98,103,1,78,169,218,243,129,227,198,106,111,45,255,223,251,247,159,226,147,127,207,95,188,141,179,172,113,95,164,204,28,
189,245,32,58,114,98,56,154,30,48,127,11,228,169,184,127,245,250,93,217,86,30,110,221,121,36,251,232,228,212,217,75,242,250,42,193,61,170,123,239,132,49,171,235,243,128,45,84,31,105,132,174,52,143,79,
226,155,248,40,190,138,207,226,187,248,48,190,140,79,119,243,247,16,71,239,137,73,98,147,24,37,86,137,89,98,55,25,203,196,54,247,69,172,19,243,196,126,25,41,157,171,68,227,69,188,159,140,230,252,146,206,
171,56,129,17,114,119,138,111,94,117,8,85,214,138,39,182,119,191,185,173,101,30,62,118,86,182,81,37,184,71,117,239,157,48,230,80,31,55,125,203,12,66,200,60,218,248,34,62,233,251,93,165,13,177,160,218,
53,138,99,34,94,18,188,90,190,243,204,123,156,132,96,89,181,62,76,6,193,239,166,102,159,148,84,156,25,14,83,111,148,211,114,147,147,110,175,193,123,246,135,59,24,82,22,220,163,186,247,78,24,115,168,147,
130,216,66,245,145,6,54,199,246,170,61,95,240,197,188,2,14,196,66,232,164,92,198,87,26,47,226,56,206,119,211,230,70,223,183,224,159,240,67,235,169,130,3,20,36,197,33,167,2,255,100,45,47,196,18,74,155,
56,223,69,142,245,187,36,161,214,52,121,13,158,152,248,34,251,72,227,248,169,11,178,61,95,216,25,224,122,100,123,235,206,112,201,146,202,130,123,84,247,222,9,99,14,181,43,2,91,168,62,210,192,230,161,150,
229,242,124,83,73,66,44,132,204,195,67,172,18,179,201,24,38,166,137,237,118,156,255,39,230,155,253,227,209,104,17,199,208,20,73,125,251,118,34,122,243,246,67,124,234,141,127,231,159,188,234,190,251,237,
83,188,142,199,63,169,22,242,250,215,241,120,141,111,228,218,157,104,199,47,135,11,137,122,145,212,157,109,78,159,187,44,219,246,101,193,178,181,206,34,154,228,224,209,51,178,61,95,8,46,214,103,153,231,
180,167,57,254,219,154,141,59,100,27,85,130,123,204,26,7,99,101,204,161,78,188,98,11,213,87,26,216,28,219,171,246,124,193,23,85,31,62,20,73,173,76,44,18,147,196,38,49,74,172,18,179,201,24,38,166,147,49,
30,199,124,235,223,209,128,144,15,104,85,163,209,34,62,109,206,226,92,89,12,129,64,164,106,139,106,215,133,33,199,167,181,52,66,109,183,243,169,150,158,36,228,113,105,248,105,230,194,120,215,194,254,195,
167,162,43,215,238,198,7,88,198,198,191,196,123,170,201,55,242,225,195,31,209,188,37,171,229,181,85,130,123,228,94,185,103,238,157,49,48,22,198,196,216,24,35,99,85,215,230,37,79,250,6,108,30,170,168,135,
203,182,202,44,136,9,213,182,11,196,98,30,31,6,52,0,45,80,237,54,129,70,139,120,222,195,62,128,195,112,10,77,181,235,66,158,39,167,78,174,223,8,147,210,52,206,165,124,236,108,188,215,152,4,249,164,53,
101,124,89,65,193,9,60,213,94,72,120,37,158,181,96,121,235,137,113,93,52,119,241,234,160,167,28,203,130,123,228,94,185,103,238,157,49,168,191,11,9,182,80,54,106,211,182,39,182,197,198,241,30,255,150,205,
99,219,139,246,124,193,23,85,191,62,20,121,179,35,22,179,252,53,13,59,236,83,83,124,203,90,117,82,100,77,216,117,47,113,26,101,148,217,66,128,248,216,198,177,104,158,238,70,174,222,238,154,19,99,89,235,
111,84,27,70,239,193,22,202,70,216,14,27,98,75,108,138,109,203,248,33,204,155,179,36,73,145,51,0,121,190,9,36,9,93,102,176,74,52,90,196,55,12,229,47,141,6,69,146,251,135,120,114,185,125,247,177,108,59,
52,4,61,101,175,246,28,56,17,141,222,188,255,239,239,7,211,2,228,189,224,195,18,53,17,217,169,193,94,98,196,128,67,48,27,134,118,71,63,207,95,46,175,169,35,140,133,49,49,54,198,200,88,25,51,99,103,14,
212,53,62,96,139,246,58,47,54,194,86,216,172,87,111,46,248,162,242,81,31,138,188,89,102,21,19,201,2,45,80,237,54,129,70,139,248,214,2,165,209,224,201,179,215,185,131,228,193,163,151,178,77,31,66,101,244,
227,184,50,121,60,166,56,174,211,146,53,47,212,23,253,110,235,241,252,127,147,147,127,198,7,52,248,104,182,108,245,230,82,79,172,134,134,123,229,158,185,119,198,192,88,186,141,51,212,83,32,54,113,205,
42,137,173,177,121,168,244,17,46,153,27,179,32,38,84,219,89,16,131,196,162,106,211,21,180,64,181,221,4,26,45,226,59,247,102,231,175,78,99,124,226,115,43,104,242,137,217,43,135,140,125,89,220,189,95,60,
119,201,47,251,143,199,95,237,63,126,250,35,30,15,167,220,142,28,63,23,45,94,177,177,21,224,225,210,204,118,229,216,89,167,181,76,62,18,46,9,92,142,174,76,184,215,172,2,23,192,216,153,3,213,70,72,176,
37,54,197,182,216,24,91,99,115,108,143,15,168,107,124,192,23,213,248,124,32,38,84,219,89,16,131,140,71,181,233,10,90,160,218,110,2,141,22,241,189,7,79,72,131,186,66,0,206,200,177,207,150,39,135,177,241,
98,78,7,247,10,138,56,235,163,236,162,80,109,243,197,158,195,32,28,77,222,213,114,112,242,45,135,206,47,193,211,42,41,75,85,255,138,58,173,91,250,124,111,97,14,66,191,101,96,43,108,134,237,176,33,182,
236,182,19,11,31,40,122,232,8,95,84,109,251,64,76,228,121,179,37,6,93,30,4,210,64,11,84,219,77,160,209,34,126,240,200,105,105,80,31,216,46,166,218,78,131,221,10,121,179,173,37,41,90,229,102,219,238,131,
206,206,207,223,241,145,140,245,220,245,155,119,230,126,3,73,66,27,62,167,86,235,148,227,130,123,85,99,80,48,7,161,230,19,219,96,35,108,229,99,91,124,65,181,233,138,75,53,163,44,136,137,60,59,121,136,
65,213,158,15,104,129,106,187,9,52,90,196,121,181,84,6,245,97,231,30,255,74,221,63,207,91,22,229,173,71,152,36,239,26,98,27,118,45,168,118,179,32,232,207,12,95,149,109,250,192,154,172,143,208,132,58,152,
210,11,184,87,159,177,133,200,45,142,77,92,251,236,4,95,80,109,186,18,226,27,15,49,65,108,168,246,211,32,6,85,123,62,160,5,170,237,38,208,104,17,47,186,45,9,242,100,213,163,168,172,203,122,105,22,100,
99,83,237,187,146,167,156,86,155,39,207,126,45,124,202,141,204,117,170,109,5,75,1,117,202,249,204,189,250,28,36,43,154,197,15,91,96,19,213,182,11,248,130,106,215,21,124,81,181,235,3,49,145,167,248,183,
107,214,200,52,66,165,144,168,34,141,22,241,83,103,71,164,65,125,224,213,85,181,157,198,178,2,167,203,146,60,126,154,191,178,14,79,126,170,77,87,216,34,87,116,107,156,207,143,40,39,31,243,60,165,245,11,
238,213,165,82,81,155,162,34,130,45,176,137,106,219,149,34,111,3,248,162,106,211,7,98,130,216,80,237,167,65,12,170,246,124,64,11,84,219,77,160,209,34,126,246,252,85,105,80,31,158,191,124,231,189,158,73,
69,149,16,34,78,110,100,213,190,11,155,183,239,45,116,15,236,36,40,186,123,197,103,111,49,71,215,167,5,202,248,215,11,184,87,238,89,141,69,81,116,207,63,182,40,178,227,9,95,192,39,84,219,46,248,22,217,
86,112,15,190,213,134,136,61,98,80,181,231,3,90,160,218,111,2,141,22,241,60,133,16,58,153,248,240,123,244,211,76,191,163,203,219,10,238,79,111,195,254,99,213,190,11,69,19,22,209,55,89,224,84,219,46,144,
77,238,205,219,9,217,182,130,173,112,190,243,220,79,184,87,238,89,141,69,193,92,48,39,170,45,23,176,5,54,81,109,187,82,36,161,90,209,190,219,16,27,170,253,110,48,207,196,160,106,203,135,208,5,50,170,68,
163,69,156,173,87,202,160,62,240,244,192,201,56,213,126,55,138,110,109,108,67,224,171,246,93,200,83,4,34,73,158,55,144,36,188,186,251,100,78,140,115,95,79,11,87,4,163,108,184,87,159,28,237,204,69,145,
229,140,16,79,164,69,138,68,248,252,32,167,225,187,213,143,216,11,241,86,139,22,168,246,155,64,163,69,252,202,181,236,170,228,46,248,30,217,117,173,39,153,69,222,143,81,172,159,78,76,20,123,122,33,221,
103,145,35,221,155,183,165,39,108,234,132,44,128,69,250,235,53,220,43,247,172,198,210,13,230,68,181,229,2,253,97,19,213,174,43,248,68,222,239,28,69,62,146,39,241,173,59,90,52,117,70,27,180,64,181,223,
4,26,45,226,215,111,220,151,6,245,197,119,143,105,136,228,87,48,62,241,69,182,159,5,169,82,85,123,62,20,45,237,229,251,61,226,73,129,143,184,253,130,123,86,99,233,70,209,117,217,162,111,87,144,55,213,
47,190,168,218,243,197,55,9,86,136,179,30,128,22,168,246,155,64,163,69,220,181,56,111,22,190,175,98,215,70,195,252,120,176,22,152,103,73,131,10,227,170,61,31,56,101,168,218,118,129,237,112,79,61,183,195,
221,189,255,84,182,85,101,184,103,53,150,110,48,39,69,182,109,250,156,126,237,6,190,161,218,78,3,31,12,177,46,13,196,134,234,163,27,33,150,68,33,100,209,234,170,209,104,17,167,34,182,50,168,47,190,251,
181,67,28,140,0,78,184,229,201,7,157,167,30,99,39,87,174,231,63,28,50,99,222,82,239,19,171,100,230,83,109,85,25,238,89,141,165,27,204,9,115,163,218,114,1,155,168,118,125,200,83,55,21,31,12,113,2,25,124,
15,176,133,216,159,14,104,129,106,191,9,52,90,196,239,61,40,126,84,24,40,3,229,35,166,175,127,45,158,252,10,168,75,56,109,182,223,182,59,214,78,31,4,56,34,61,124,241,186,108,223,133,213,27,182,121,127,
140,186,124,37,76,21,163,94,194,61,171,177,116,131,57,97,110,84,91,46,96,19,213,174,15,248,134,239,183,7,124,176,104,189,216,54,196,134,234,67,65,204,17,123,170,29,95,208,2,213,71,19,104,180,136,147,205,
77,25,212,23,118,22,248,20,121,245,57,4,146,6,85,90,124,119,52,224,248,239,199,138,39,223,58,121,198,255,164,106,155,60,235,152,103,134,235,119,24,131,123,86,99,73,163,72,14,15,108,162,218,244,1,223,240,
125,187,195,7,241,69,213,158,47,196,134,234,67,65,204,229,169,13,171,64,11,84,31,77,192,89,196,249,245,246,253,5,239,39,100,141,43,250,53,63,201,218,77,110,135,20,168,173,24,98,75,20,124,254,252,79,239,
237,141,28,107,14,209,127,145,82,90,195,23,253,63,236,30,61,49,44,219,170,50,220,179,26,75,26,204,141,106,203,133,16,37,255,240,13,223,163,239,248,32,190,168,218,243,133,254,93,235,143,18,115,170,141,
60,160,5,117,202,87,239,163,183,153,34,206,132,239,59,116,50,122,216,250,37,227,232,237,222,131,199,163,31,127,46,191,166,96,81,190,157,50,59,122,254,162,248,41,179,54,7,14,187,61,65,133,18,81,32,55,199,
162,229,27,100,63,221,8,117,208,104,247,190,99,178,125,23,134,118,238,143,198,198,39,101,187,221,8,93,148,185,23,248,22,47,102,78,152,27,213,150,11,216,68,181,235,139,239,129,27,124,208,39,79,76,26,62,
63,34,196,156,106,35,15,104,1,154,160,250,169,18,104,43,26,139,214,162,185,104,111,214,143,94,87,17,231,87,139,95,66,117,160,129,35,184,121,114,32,244,146,239,166,114,194,173,88,174,137,36,87,71,239,202,
126,58,89,187,105,123,48,17,167,29,223,121,62,123,190,248,71,77,40,34,54,48,101,214,162,104,253,150,93,209,233,225,145,248,41,232,227,199,127,164,206,139,235,155,78,149,72,123,82,100,172,140,153,177,51,
7,204,5,115,162,218,113,5,155,168,190,124,193,71,84,251,221,8,149,11,8,104,135,24,81,253,116,66,204,169,54,242,128,22,160,9,170,159,170,192,60,171,244,6,104,48,190,214,237,77,162,171,136,239,59,116,34,
53,19,31,105,37,171,156,163,151,35,206,161,62,48,2,78,240,141,195,235,13,73,250,213,245,121,192,225,87,111,112,115,248,54,161,118,198,172,223,188,75,182,159,23,214,97,201,11,205,146,0,149,216,147,79,118,
172,183,206,156,95,159,228,87,109,184,231,228,90,49,99,98,108,140,145,177,250,174,61,103,129,77,218,125,21,193,119,135,8,62,24,74,196,129,24,81,253,36,33,214,66,62,132,161,5,69,210,30,148,13,90,154,150,
190,26,45,70,147,213,181,221,151,83,142,157,149,141,37,193,176,108,162,255,49,71,162,247,178,249,113,198,130,184,168,172,186,239,60,80,240,246,103,7,161,57,113,250,162,188,62,47,62,41,76,121,210,123,63,
230,183,140,209,141,60,197,48,124,224,21,113,227,214,61,241,199,58,246,46,215,233,123,75,27,238,153,123,103,12,140,197,117,173,55,47,33,138,35,0,62,226,243,86,224,147,82,216,5,98,68,245,147,132,88,35,
230,212,245,121,64,11,208,4,213,87,63,65,59,209,80,151,31,201,110,101,254,186,138,248,172,5,203,187,150,246,234,228,241,147,215,209,140,138,165,17,157,50,179,37,104,239,195,8,26,124,125,42,206,222,30,
22,242,21,16,124,42,178,44,90,177,94,182,145,135,69,203,215,203,62,178,56,127,241,122,92,149,157,53,200,145,107,119,226,92,25,220,87,168,194,203,117,130,49,51,118,230,128,185,96,78,152,27,230,72,253,125,
22,216,68,217,42,15,220,151,234,67,129,15,170,54,242,226,178,52,153,103,155,106,26,104,1,154,160,250,234,23,104,38,218,169,238,183,19,180,24,77,86,237,164,174,137,95,189,238,46,72,100,57,155,187,120,149,
108,171,31,76,155,189,184,112,254,144,78,178,118,108,240,100,230,106,20,87,126,217,239,254,129,113,215,94,191,15,109,105,228,41,208,176,180,75,241,224,47,95,254,140,222,190,157,104,137,215,104,188,30,
154,167,68,87,93,96,108,140,145,177,50,102,198,222,57,31,204,17,115,165,174,79,3,155,116,182,149,23,124,69,245,161,192,7,85,27,121,33,70,178,222,188,66,236,196,73,130,22,160,9,170,175,126,128,86,250,100,
134,68,139,189,215,196,97,213,250,173,94,191,134,36,173,175,138,144,83,92,245,211,167,48,219,162,218,100,21,136,224,120,114,168,229,140,54,62,223,29,46,142,248,29,62,233,6,54,159,62,199,223,225,135,47,
100,31,70,161,109,50,226,241,177,111,225,178,117,181,92,70,233,132,49,48,22,198,196,216,92,98,134,185,82,109,165,129,77,66,61,157,226,43,170,15,69,158,125,255,105,16,35,89,233,36,66,20,130,72,130,22,228,
41,122,94,6,104,164,79,129,15,108,142,22,171,182,32,85,196,121,29,124,250,236,141,108,184,27,100,118,171,66,133,22,238,33,212,65,129,54,156,30,251,54,229,11,55,235,140,234,186,34,28,115,172,8,131,144,
60,123,81,60,121,62,48,111,190,235,187,248,202,123,207,76,119,60,145,146,15,100,201,74,191,109,148,85,130,123,103,12,105,155,0,20,204,149,239,18,19,54,9,229,211,248,138,235,15,40,62,168,218,40,66,218,
154,60,49,22,234,164,102,27,230,173,42,186,228,155,253,18,13,78,243,149,84,17,135,60,175,82,247,238,63,107,117,218,223,237,60,33,95,61,219,176,19,33,237,240,205,226,21,27,229,117,69,112,205,117,193,83,
70,168,229,163,60,57,91,86,174,243,123,107,75,18,162,138,80,63,40,82,109,135,185,98,206,84,187,221,192,38,161,114,152,224,43,174,79,166,33,114,241,116,66,172,168,190,128,24,11,117,66,52,73,191,107,184,
162,137,104,163,186,183,52,178,150,84,51,69,124,234,172,133,222,25,204,112,208,211,231,252,19,237,132,132,215,91,117,111,69,25,218,177,79,246,7,148,191,82,215,20,225,194,229,27,178,175,78,138,136,104,
39,148,29,251,97,134,223,118,44,236,173,218,114,1,255,154,58,171,58,235,149,174,112,207,69,178,251,249,198,8,54,241,41,9,151,134,207,143,8,62,168,218,40,66,90,169,56,98,76,93,83,20,52,65,245,215,43,176,
183,111,140,126,141,141,156,135,125,146,228,57,70,205,205,178,237,74,181,215,11,150,173,222,36,239,171,40,105,249,144,15,59,108,203,244,133,15,26,170,175,78,66,126,8,162,236,152,239,158,90,159,42,55,157,
240,241,175,42,235,149,62,112,207,234,195,165,43,204,153,106,183,27,216,196,167,36,92,22,89,31,234,219,248,108,112,112,133,88,81,125,65,168,124,252,157,160,9,170,191,94,128,22,230,121,200,114,73,211,224,
36,226,252,130,229,185,129,241,214,83,67,191,94,97,86,173,223,38,239,169,40,172,79,169,254,32,212,135,197,36,55,111,187,85,219,31,189,245,64,94,159,7,196,197,103,57,108,206,162,213,185,252,163,13,215,
214,85,196,139,142,155,185,83,109,43,176,73,145,31,203,78,240,25,213,79,39,248,160,186,190,8,105,31,86,125,191,195,185,130,38,168,254,202,6,13,68,11,213,61,165,129,127,184,188,61,56,137,56,60,124,156,
175,170,200,195,199,175,162,239,167,247,126,75,89,200,228,57,73,56,74,61,69,124,244,99,251,207,221,28,235,93,89,220,185,151,93,44,129,66,3,236,63,86,215,231,129,47,231,62,31,221,246,28,40,86,83,148,143,
78,85,59,103,224,2,247,92,244,67,35,115,167,218,86,96,19,159,93,13,89,224,51,46,69,42,240,65,117,125,17,136,21,181,101,142,216,34,198,212,53,69,233,71,106,7,180,15,13,84,247,147,5,154,171,218,236,196,
89,196,135,118,230,79,172,84,36,173,105,94,54,12,237,150,247,82,148,223,127,255,87,180,124,205,230,191,245,199,23,245,231,129,118,135,36,113,41,147,54,103,209,170,96,249,158,193,183,72,114,209,10,74,28,
87,175,235,147,120,209,196,80,62,21,103,176,73,209,98,201,73,240,25,124,71,245,149,36,68,89,184,78,136,21,181,211,139,216,34,198,212,53,69,65,19,58,251,43,155,34,233,131,209,92,213,102,39,206,34,254,253,
244,121,185,139,165,78,78,254,233,253,37,190,40,27,135,246,200,123,9,193,246,95,254,222,31,235,149,161,42,130,39,113,201,115,129,115,22,121,173,239,132,215,89,215,140,111,236,152,248,80,112,199,4,123,
120,125,139,95,84,129,175,197,18,138,237,162,96,238,92,119,2,97,147,144,75,13,248,140,139,176,133,202,199,147,132,88,81,223,93,136,45,245,247,33,64,19,58,251,43,19,52,15,237,83,247,146,5,90,139,230,170,
118,59,113,22,113,56,113,230,98,110,177,32,155,91,47,183,145,173,217,184,67,222,71,81,248,144,165,50,11,242,148,20,250,180,38,80,137,165,179,175,78,66,239,227,165,36,150,107,45,200,181,155,138,207,243,
196,196,151,104,234,236,106,29,137,118,129,123,230,222,213,152,124,96,14,85,251,157,96,147,80,229,202,218,184,156,67,8,81,41,170,19,98,69,189,237,17,91,69,62,22,167,129,38,116,246,87,22,104,93,222,122,
6,104,44,90,171,218,85,120,137,248,220,197,171,115,191,182,115,99,190,121,140,139,192,122,101,232,211,147,236,12,216,185,167,123,6,54,94,77,41,236,202,113,235,80,79,198,46,181,1,111,223,125,44,175,205,
11,175,207,174,7,65,124,171,218,43,222,253,246,41,250,49,112,198,191,94,192,61,115,239,106,76,62,184,86,193,199,38,161,151,54,240,29,213,87,146,80,181,106,137,9,98,131,24,73,91,198,33,198,66,238,194,1,
180,160,151,223,93,208,186,188,26,128,198,162,181,170,93,133,151,136,67,145,138,219,189,46,145,68,242,249,107,163,119,227,148,150,175,94,143,181,250,127,213,250,223,247,162,227,167,46,70,59,246,124,77,
43,128,51,241,49,133,92,195,60,233,240,11,202,255,254,121,222,210,248,191,45,88,182,54,154,223,106,135,2,183,174,194,6,60,101,204,152,187,36,190,158,215,42,246,197,178,105,255,248,233,139,209,149,235,
119,226,39,42,158,226,178,12,157,117,60,154,123,202,187,204,213,13,210,169,118,203,211,144,228,187,105,243,130,124,104,35,77,168,235,171,99,149,224,158,67,164,59,254,250,33,57,123,252,216,4,219,168,54,
242,130,239,100,249,117,214,174,43,124,24,95,198,167,241,109,124,28,95,199,231,241,125,98,128,88,240,249,206,194,61,17,115,196,30,215,19,139,196,36,177,73,140,18,171,196,44,255,155,255,70,44,19,211,196,
54,49,78,172,19,243,196,62,26,224,91,205,168,40,69,74,67,162,177,170,205,110,120,139,248,186,205,59,115,255,194,240,107,216,143,39,46,12,254,205,148,57,94,34,92,54,220,11,129,203,246,163,45,45,103,63,
121,230,114,188,11,128,39,149,246,17,110,78,231,81,76,64,93,223,134,224,72,203,67,156,135,91,119,220,42,131,47,92,158,111,235,105,39,79,159,187,175,193,87,137,120,141,186,117,239,106,76,62,48,135,204,
165,234,163,19,108,163,218,200,11,190,131,15,169,190,218,224,131,237,147,162,248,38,62,138,175,226,179,248,46,62,140,47,87,45,190,136,121,215,101,193,144,160,113,121,87,1,240,5,52,86,181,219,13,111,17,
231,87,240,197,75,247,236,91,73,120,226,240,249,53,30,52,112,60,182,36,241,193,140,34,177,211,28,214,137,201,134,23,42,159,70,155,172,68,95,109,14,31,63,39,175,247,165,206,149,200,185,119,53,38,95,152,
75,213,126,39,161,19,67,225,59,46,25,21,241,197,175,62,185,36,246,209,42,9,118,213,64,227,242,190,161,162,173,190,223,14,189,69,28,14,28,57,37,111,32,13,214,14,215,108,244,171,82,99,100,227,155,105,210,
5,94,71,85,95,73,168,188,242,56,208,71,182,107,163,247,101,31,117,128,123,87,99,242,133,185,116,169,28,133,109,212,245,121,193,119,210,50,228,25,249,64,235,242,124,47,65,91,85,123,105,228,18,241,159,231,
47,143,19,232,168,155,232,132,215,176,115,23,174,86,34,131,88,175,224,151,152,188,210,84,237,224,169,133,147,118,101,61,185,124,223,106,155,99,209,33,191,232,243,225,73,245,149,132,117,200,201,201,48,
123,211,211,82,25,84,157,80,71,196,153,75,230,84,245,145,4,219,168,235,243,128,207,224,59,248,144,234,171,40,248,60,190,79,12,16,11,196,196,32,189,137,163,121,104,159,107,210,50,52,21,109,85,109,165,145,
75,196,33,205,153,248,117,255,248,9,241,190,230,228,152,253,32,254,48,210,114,176,105,115,22,71,11,150,173,139,159,70,54,109,219,27,237,220,115,56,218,123,240,100,252,122,75,25,41,54,235,159,62,119,57,
58,117,246,114,116,236,228,249,184,206,29,91,194,212,90,27,99,37,89,208,179,231,111,226,84,154,124,52,162,44,20,175,86,124,244,225,85,152,36,56,124,244,225,8,240,244,185,75,91,78,93,92,224,185,158,173,
89,100,155,227,99,14,235,150,69,158,206,41,104,160,250,73,18,170,242,58,28,61,49,44,251,168,3,220,187,26,83,30,152,83,213,71,18,108,163,174,117,1,159,192,55,240,17,124,5,159,9,225,123,248,48,190,140,79,
227,219,248,56,190,142,207,227,251,196,0,177,64,76,16,27,196,136,210,5,98,138,216,34,198,136,53,98,142,216,35,6,137,69,98,146,216,36,70,137,85,98,150,216,37,134,137,229,126,172,127,187,192,88,209,66,52,
49,45,46,93,30,158,20,185,69,124,217,154,205,242,70,198,198,62,71,71,79,94,136,191,36,171,235,250,1,121,152,217,35,186,255,240,169,248,75,59,235,152,56,114,222,227,189,24,98,207,129,227,127,233,99,102,
235,23,52,79,57,184,119,239,62,196,167,246,16,3,10,210,126,239,176,75,33,13,130,138,181,203,237,187,191,150,138,203,147,158,150,192,81,109,39,9,181,237,12,246,236,255,235,92,214,9,238,93,141,41,15,46,
219,73,177,141,186,54,13,124,0,95,192,39,240,141,162,194,141,143,226,171,248,44,190,139,15,171,126,211,32,86,136,153,100,187,196,84,222,135,15,98,153,152,38,182,137,113,98,157,152,47,187,238,169,15,104,
34,218,136,70,170,49,160,169,234,186,44,114,139,56,191,122,237,53,81,38,158,141,237,59,126,249,250,225,83,253,125,63,88,222,122,210,224,180,25,247,215,166,115,226,242,242,240,241,203,191,4,67,136,3,55,
220,31,39,188,248,242,191,115,239,225,248,245,51,57,158,60,96,39,158,144,46,92,30,117,78,99,154,245,145,141,227,230,33,14,185,180,217,146,146,222,183,234,112,239,106,76,121,96,78,179,210,15,184,126,76,
198,214,216,28,219,135,120,66,197,23,241,73,124,19,31,13,17,75,201,131,70,196,18,49,165,254,46,15,201,152,71,3,208,130,228,120,250,9,26,137,86,162,153,237,121,140,191,137,228,180,83,110,17,7,42,125,143,
92,187,29,191,150,185,108,17,227,230,217,196,78,126,132,165,171,55,181,126,37,203,221,110,120,254,82,254,87,207,44,216,144,159,172,242,31,122,235,23,198,197,200,83,61,170,146,103,65,181,239,161,150,205,
184,215,207,159,187,111,75,220,189,175,251,129,38,216,148,51,173,102,55,92,10,80,87,21,238,93,141,41,15,204,41,115,171,250,105,131,109,212,181,128,77,177,45,54,14,89,217,29,31,76,10,78,40,146,91,89,137,
165,144,249,127,58,65,11,146,99,10,13,90,134,166,161,109,104,156,203,195,44,154,137,118,162,161,104,169,250,27,23,10,137,120,214,107,25,255,157,245,32,214,250,216,192,78,73,42,42,118,224,12,240,246,237,
135,212,74,57,69,9,93,121,190,19,94,41,233,135,143,53,190,37,151,92,96,142,78,157,27,249,219,184,146,240,186,136,144,176,183,148,106,232,20,131,117,181,11,235,142,172,89,118,6,103,214,241,228,243,151,
178,107,105,250,208,239,100,253,69,8,93,124,132,185,85,253,180,233,76,39,129,237,176,33,182,196,166,46,182,199,71,240,21,124,6,223,201,90,114,192,7,59,125,36,4,196,76,251,67,39,177,164,254,38,20,46,21,
246,243,130,134,161,101,204,17,160,113,104,29,154,135,246,185,218,69,253,255,46,20,18,241,110,80,241,100,251,238,131,113,41,162,172,117,231,209,155,247,157,182,86,229,225,238,253,240,41,52,147,144,78,
147,47,208,43,214,14,149,246,20,241,225,227,239,242,141,5,163,111,222,190,47,78,39,218,14,48,254,201,122,27,73,146,56,202,77,114,163,233,115,210,15,114,144,132,104,197,218,45,209,169,179,151,162,7,15,
95,252,223,211,127,122,80,231,221,3,171,224,158,249,40,166,250,169,3,220,123,123,254,67,192,220,170,126,218,96,27,108,132,173,176,25,182,203,42,224,129,15,224,11,248,4,190,129,143,36,125,6,31,194,151,
148,144,224,123,248,96,231,125,134,128,152,33,118,136,161,50,210,56,39,65,11,58,199,22,2,180,11,13,83,125,182,65,3,209,66,52,177,140,10,86,193,68,28,7,152,223,250,69,58,51,124,53,122,63,230,190,63,146,
195,6,156,250,82,109,22,129,245,165,16,167,233,178,160,124,82,25,245,0,219,16,100,251,14,157,252,219,248,248,66,239,114,200,135,143,90,56,240,222,131,199,91,79,4,43,11,175,143,178,102,27,170,206,35,176,
181,238,199,159,123,159,111,62,20,220,123,168,173,150,192,220,22,77,203,139,141,177,53,54,199,246,46,31,183,241,37,124,170,179,45,124,47,228,143,84,39,196,78,145,18,119,174,160,5,33,190,13,116,130,118,
249,28,182,67,27,209,72,180,178,200,211,119,146,96,34,206,71,138,188,105,23,223,189,251,24,205,156,31,118,31,57,79,39,33,171,160,244,147,241,241,207,127,89,118,226,149,58,207,147,63,219,203,72,160,180,
123,223,209,220,89,3,103,45,88,17,84,196,217,118,198,246,48,213,87,29,224,222,67,86,102,103,110,153,99,213,87,22,216,20,219,98,227,118,234,6,31,240,169,228,82,26,62,135,239,169,191,173,27,104,65,214,27,
139,47,104,22,218,165,250,203,2,173,116,201,32,233,66,48,17,223,181,247,168,188,89,87,40,1,21,242,151,146,143,49,161,138,202,86,129,241,137,207,241,235,243,145,19,231,91,79,46,197,199,197,158,213,75,35,
55,157,115,118,36,217,184,245,151,96,73,183,124,114,151,87,145,56,127,74,160,28,223,204,41,115,171,250,73,3,27,98,75,108,170,218,245,1,223,194,199,240,53,124,78,253,77,29,65,11,66,110,18,64,171,138,150,
173,67,51,85,219,190,4,19,241,120,219,89,129,215,34,94,217,58,247,94,23,129,147,79,69,171,174,12,2,188,10,158,58,59,226,253,3,202,150,51,158,250,138,230,80,191,117,39,59,21,106,213,97,12,106,108,174,48,
135,204,165,239,150,82,108,134,237,124,94,231,7,21,180,32,207,105,200,110,20,217,211,14,104,101,209,101,179,54,193,68,28,138,164,169,5,94,37,67,237,84,224,233,68,245,97,104,216,130,149,231,77,136,107,
72,23,202,147,27,213,90,124,29,187,236,173,95,189,192,119,43,43,115,196,92,49,103,204,93,222,121,47,115,11,109,19,201,243,214,169,64,163,138,46,41,250,166,155,77,35,168,136,179,63,181,232,71,144,39,207,
126,141,92,114,43,103,65,2,26,213,190,161,193,110,7,143,156,145,115,233,10,79,146,20,163,189,126,227,126,235,213,222,109,205,254,224,209,98,125,86,1,198,160,198,214,9,115,194,220,48,71,69,15,114,97,171,
162,177,54,104,132,72,192,135,54,161,81,170,125,87,176,27,90,169,218,207,67,80,17,39,47,113,209,117,104,6,200,19,138,75,81,130,52,182,238,202,95,216,121,80,153,252,252,207,104,229,186,33,57,159,190,204,
93,188,42,58,61,60,18,175,171,166,137,77,158,53,224,170,193,24,212,216,128,177,51,7,204,5,115,162,174,247,5,27,97,43,213,159,209,29,52,65,205,167,43,104,18,218,84,244,199,19,141,204,202,225,238,67,80,
17,135,209,91,15,228,141,251,64,118,181,162,98,178,247,224,9,217,182,145,14,233,51,217,254,148,156,75,158,26,215,111,222,25,141,92,189,29,39,96,250,101,255,241,120,127,50,57,166,179,150,2,88,247,59,126,
250,66,203,113,255,46,230,252,111,159,50,84,85,133,49,168,177,49,102,198,158,181,246,201,28,50,151,204,41,115,203,28,51,215,204,121,231,19,59,182,9,81,18,110,16,65,19,146,115,233,11,154,20,34,91,40,26,
169,218,207,75,112,17,47,82,91,46,9,167,185,126,152,145,127,89,133,19,108,170,93,35,27,158,20,142,28,63,215,18,145,93,241,1,17,14,131,168,191,99,121,128,131,39,195,23,174,197,79,163,28,100,232,182,247,
149,3,39,71,78,12,199,39,217,218,254,193,110,140,60,235,193,85,131,49,180,119,235,48,54,198,200,88,187,29,180,98,142,152,43,230,140,185,99,14,187,45,63,49,247,216,0,91,96,147,38,237,184,234,53,104,130,
178,135,11,104,81,136,83,217,248,71,232,90,195,193,69,156,186,120,31,2,237,35,46,178,94,26,42,207,179,225,14,123,95,169,1,201,151,251,110,2,198,225,152,161,29,251,163,139,35,55,226,127,170,191,169,35,
201,49,117,59,188,196,156,48,55,204,81,222,51,21,70,126,138,228,173,119,253,238,145,5,218,136,70,170,62,242,18,92,196,121,202,8,149,166,148,181,196,206,116,149,174,144,236,94,181,105,148,15,79,27,108,
233,186,209,122,109,92,187,201,170,57,49,7,204,5,115,18,226,45,213,200,7,154,160,236,147,5,26,20,106,207,60,218,24,234,164,102,155,224,34,14,33,115,44,231,221,130,22,50,223,181,145,31,68,235,225,227,87,
65,118,6,212,13,198,204,216,77,184,171,129,75,190,118,69,200,173,156,101,228,206,47,69,196,201,219,16,170,92,24,71,129,151,172,220,32,251,73,35,212,41,58,35,12,28,72,33,89,255,148,128,167,230,170,10,99,
100,172,118,8,167,90,160,9,202,94,105,160,61,161,146,219,161,137,104,163,234,167,8,165,136,56,233,37,159,61,127,43,7,146,135,219,119,31,123,125,0,35,151,47,135,41,84,91,70,255,224,137,148,146,93,161,215,
4,171,4,99,99,140,246,244,93,61,208,4,159,162,53,104,14,218,163,218,202,3,154,88,70,141,209,82,68,28,168,143,167,6,146,7,126,193,72,165,169,250,81,80,6,41,68,126,17,163,28,168,14,211,196,130,185,140,137,
177,169,49,27,253,7,77,240,41,27,137,230,132,90,81,0,52,81,245,83,148,210,68,156,178,80,106,32,121,97,123,207,119,211,220,2,127,233,170,77,173,107,236,73,168,170,240,148,186,105,91,122,5,155,58,194,152,
236,9,188,202,252,79,172,13,202,118,157,160,53,161,11,189,160,137,170,175,162,148,38,226,188,182,132,218,106,8,4,7,149,180,85,95,157,144,76,72,181,97,84,7,42,158,43,219,213,25,198,164,198,106,84,7,180,
65,217,174,19,180,38,228,15,50,90,232,179,148,227,67,105,34,14,228,137,80,3,202,203,248,196,151,104,138,67,245,234,209,91,197,82,68,26,229,147,119,187,87,149,177,109,173,213,7,109,80,182,75,130,198,160,
53,234,250,188,160,133,170,175,16,148,42,226,161,78,111,182,161,173,51,195,87,100,95,109,72,210,159,55,81,187,209,59,78,158,185,36,237,87,103,24,147,26,171,81,29,208,134,172,34,36,104,76,104,221,10,125,
74,51,73,169,34,206,209,226,208,39,211,40,231,180,96,217,90,217,31,172,92,183,213,182,118,213,128,93,123,211,43,234,215,17,198,164,198,106,84,7,180,1,141,80,246,3,180,37,116,185,69,52,176,140,218,154,
109,74,21,113,8,117,232,134,95,51,242,70,112,116,150,194,170,170,47,184,104,235,146,181,128,42,235,202,126,117,134,49,169,177,26,213,2,141,80,246,3,180,5,141,65,107,66,61,141,231,61,100,228,74,233,34,
78,241,213,34,147,193,181,175,127,29,139,14,28,62,149,153,190,241,235,90,86,115,74,74,53,149,201,214,147,206,156,69,97,210,178,86,9,198,196,216,212,152,141,234,128,70,100,125,91,67,107,208,28,180,167,
168,126,169,2,212,33,41,93,196,73,195,153,167,246,31,131,39,187,219,208,142,125,206,95,117,249,242,92,100,194,141,222,192,83,78,136,194,31,85,131,49,89,150,193,234,131,70,184,238,82,65,123,208,32,180,
40,143,182,160,125,161,202,176,117,163,116,17,7,159,26,132,76,212,195,71,47,227,170,219,62,137,98,248,219,151,175,222,203,54,141,106,241,248,233,107,105,195,38,192,216,212,152,141,106,129,86,248,234,11,
154,132,54,249,136,121,47,106,200,246,68,196,93,202,182,241,223,159,61,127,19,151,174,82,109,100,49,180,51,236,78,24,163,60,200,43,162,108,216,4,24,155,26,179,81,45,208,10,52,67,217,48,11,52,10,173,114,
209,180,144,101,216,186,209,19,17,231,203,236,216,248,164,28,40,144,80,127,207,129,99,209,119,83,243,109,134,255,113,198,130,232,245,175,227,178,109,163,122,236,59,84,172,194,74,149,97,108,106,204,70,
245,64,51,208,14,101,199,44,208,42,52,171,93,12,68,129,230,149,185,43,165,77,79,68,28,46,95,185,245,183,65,82,49,250,244,185,145,204,15,150,105,240,154,67,229,147,206,182,141,106,194,211,201,170,245,221,
183,120,213,29,198,102,111,132,245,1,237,240,89,86,233,4,237,66,195,84,245,123,52,79,93,19,154,158,137,248,154,141,219,254,237,220,236,195,164,134,96,145,250,138,76,252,180,217,75,162,195,199,207,217,
190,240,26,241,225,195,31,185,11,125,212,1,198,198,24,213,216,141,234,129,118,160,33,104,73,17,49,71,203,208,180,246,30,115,180,14,205,83,127,27,154,158,137,248,15,211,231,197,169,24,175,223,184,23,45,
206,145,31,60,22,237,57,139,227,204,98,103,134,71,162,199,79,94,71,227,1,247,114,26,189,225,213,235,247,209,183,13,168,171,217,13,198,198,24,213,216,141,106,130,134,160,37,104,10,218,130,198,160,53,121,
68,29,109,67,227,208,58,52,79,253,77,104,122,38,226,48,109,182,223,250,208,247,211,230,182,38,101,99,116,248,216,217,232,254,195,231,209,167,28,91,21,141,106,113,109,244,158,180,117,147,96,140,106,236,
70,125,64,107,208,28,180,7,13,66,139,148,173,187,225,171,117,69,232,169,136,187,48,117,246,162,104,235,174,3,209,200,181,59,241,71,3,123,210,110,22,7,142,156,150,118,111,18,140,81,141,221,168,39,104,16,
90,132,38,161,77,104,148,178,123,191,168,132,136,243,218,194,30,204,155,183,31,91,49,217,134,147,150,183,162,41,48,70,53,118,163,254,160,77,104,20,90,229,123,150,165,44,250,46,226,156,102,186,121,251,
161,125,156,28,0,62,124,252,189,244,211,107,85,128,49,50,86,53,7,70,115,64,179,208,174,126,251,116,95,69,124,202,204,69,241,7,0,123,242,30,12,40,84,251,77,5,158,92,202,134,49,90,161,238,193,0,237,66,195,
208,50,229,11,189,160,175,34,190,255,208,41,19,240,1,226,252,165,81,233,7,77,132,177,170,57,48,154,7,26,134,150,41,63,232,5,125,21,241,75,118,68,121,160,216,190,251,160,244,131,38,194,88,213,28,24,205,
4,45,83,126,208,11,250,42,226,161,235,216,25,213,5,59,207,91,178,70,250,65,19,97,172,230,219,131,1,118,118,173,255,91,6,125,21,241,31,102,204,139,126,125,99,57,79,6,129,183,239,62,180,236,61,95,250,65,
19,97,172,140,89,205,133,209,44,208,48,180,76,249,65,47,232,171,136,195,230,109,123,91,191,100,182,51,165,233,148,89,40,182,170,132,46,20,110,84,15,180,11,13,83,246,239,21,125,23,113,142,41,223,189,255,
76,78,144,209,28,246,30,60,46,237,223,100,24,179,154,11,163,57,160,93,253,78,35,209,119,17,135,165,171,54,5,47,78,106,84,7,214,12,23,173,88,47,109,223,100,24,179,173,139,55,23,52,11,237,82,182,239,37,
149,16,113,78,61,13,95,188,46,39,202,168,63,239,199,38,157,75,236,53,9,198,204,216,213,156,24,245,7,205,178,19,155,9,126,158,191,204,28,190,161,220,184,245,176,18,206,222,107,24,51,99,87,115,98,212,27,
180,10,205,82,118,239,53,149,17,113,216,119,232,164,189,126,54,144,189,7,155,91,201,39,11,198,174,230,196,168,47,104,20,90,165,236,221,15,42,37,226,84,11,127,241,242,157,156,56,163,190,44,88,182,78,218,
123,16,96,236,106,78,140,250,130,70,161,85,202,222,253,160,82,34,14,100,6,179,167,241,230,48,214,122,237,84,118,30,36,152,3,53,55,70,253,64,155,208,40,101,231,126,81,57,17,103,29,113,244,214,3,57,129,
70,253,184,58,122,87,218,121,144,96,14,212,220,24,245,3,109,170,218,247,157,202,137,56,204,93,188,42,250,248,233,31,114,18,141,250,192,83,203,142,95,14,75,27,15,18,204,129,189,93,214,31,52,9,109,82,54,
238,39,149,20,113,56,113,250,162,57,126,205,249,252,249,207,104,206,162,149,210,190,131,4,115,192,92,168,57,50,234,1,90,132,38,41,251,246,155,202,138,248,148,153,11,45,175,74,205,161,96,240,127,253,56,
120,91,11,59,97,14,172,120,114,189,65,139,208,36,101,223,126,83,89,17,135,161,157,251,237,105,188,198,156,61,127,85,218,117,16,97,46,212,28,25,213,7,13,66,139,148,93,171,64,165,69,156,156,4,247,30,88,
94,149,186,178,110,243,46,105,215,65,132,185,80,115,100,84,31,52,168,223,249,81,210,168,180,136,195,162,21,27,162,201,73,251,200,89,55,38,38,190,68,83,102,85,171,42,120,63,97,46,152,19,53,87,70,117,65,
123,208,32,101,211,170,80,121,17,7,123,21,173,31,119,238,61,145,182,28,100,152,19,53,87,70,117,169,195,146,96,45,68,124,218,236,37,209,219,119,31,229,36,27,213,100,144,143,218,119,195,142,224,215,11,52,
7,237,81,182,172,18,181,16,113,216,182,203,106,22,214,133,207,159,255,25,45,88,182,86,218,113,144,97,78,152,27,53,103,70,245,64,115,148,29,171,70,109,68,252,155,159,102,69,183,238,60,146,147,109,84,139,
151,175,222,71,223,78,157,35,237,56,200,48,39,204,141,154,51,163,90,160,53,104,142,178,99,213,168,141,136,195,172,5,43,162,15,31,254,144,147,110,84,135,51,195,87,164,253,140,67,241,220,168,57,51,170,3,
26,131,214,40,251,85,145,90,137,56,236,220,115,196,246,142,87,24,108,179,122,195,118,105,59,227,80,60,55,230,191,213,5,219,160,49,202,118,85,165,118,34,78,242,25,43,64,91,93,126,123,255,169,178,39,219,
170,0,115,195,28,169,185,51,250,15,218,82,183,2,38,181,19,113,152,62,103,113,101,143,228,243,75,78,144,222,185,247,52,58,119,225,90,180,255,240,169,104,227,214,95,162,229,107,54,71,11,151,173,139,95,211,
168,8,50,107,193,242,104,238,226,213,113,29,198,149,235,182,70,155,182,237,137,246,236,63,30,231,103,184,122,253,94,244,232,201,171,232,221,187,143,181,123,106,187,54,122,79,218,204,248,15,204,145,154,
187,170,130,15,226,139,248,36,190,137,143,226,171,248,44,190,139,15,227,203,248,244,87,223,94,17,251,58,62,143,239,19,3,196,2,49,65,108,84,213,167,209,20,180,69,217,172,202,212,82,196,97,245,134,109,209,
167,79,253,251,210,223,22,235,251,15,95,68,103,207,95,105,189,130,29,142,157,246,231,121,75,163,31,103,204,151,247,236,195,127,255,52,59,250,161,213,206,204,249,203,163,117,155,119,68,7,143,156,110,5,
208,221,248,195,216,167,10,103,120,220,186,235,128,28,143,241,31,152,35,53,119,85,0,223,194,199,240,53,124,14,223,195,7,241,69,124,82,141,199,7,98,131,24,33,86,136,25,98,135,24,234,183,184,163,37,104,
138,186,231,170,83,91,17,7,156,172,87,134,167,159,177,177,207,209,173,59,79,226,210,76,156,226,226,213,184,215,175,94,223,77,157,243,127,194,190,51,58,118,234,124,244,224,209,139,248,190,170,240,116,67,
170,206,25,115,151,202,251,54,254,3,115,84,133,84,203,109,159,198,135,240,37,124,10,223,194,199,212,125,151,5,49,68,44,17,83,196,22,49,214,75,159,166,31,180,68,221,91,29,168,181,136,179,101,235,250,141,
242,94,77,99,39,31,255,18,141,92,187,29,109,24,218,29,77,155,93,205,87,45,238,107,197,218,161,232,240,241,115,173,167,154,231,209,196,196,239,125,17,245,187,247,159,245,252,71,173,142,48,71,204,149,154,
195,50,193,39,240,13,124,4,95,193,103,170,236,211,196,28,177,71,12,150,233,207,104,72,157,183,196,214,90,196,1,99,135,78,243,249,229,203,191,162,199,79,95,71,59,126,57,20,77,173,97,254,143,169,179,22,
71,107,55,109,143,78,158,185,20,61,127,241,54,154,156,252,179,39,162,190,231,192,113,121,63,198,223,97,174,212,28,134,4,155,99,123,124,0,95,192,39,240,13,117,63,85,134,24,36,22,137,73,98,83,141,53,47,
104,71,85,127,200,92,169,189,136,195,194,101,235,163,143,31,139,239,31,199,65,110,220,122,24,45,111,61,161,52,233,137,146,87,228,109,187,15,70,87,174,223,137,159,106,212,216,139,130,96,212,105,111,109,
191,97,174,202,250,97,197,198,216,26,155,99,123,213,127,29,33,38,137,77,98,52,132,152,163,25,104,135,234,171,78,52,66,196,129,175,224,121,13,75,48,221,188,253,40,90,180,188,254,6,205,130,64,88,186,106,
83,116,234,236,165,232,215,55,19,193,132,132,157,11,182,148,226,14,115,197,156,169,185,244,5,27,98,75,108,138,109,7,193,14,196,42,49,155,215,127,209,10,52,67,181,93,55,26,35,226,49,199,206,122,25,149,
191,125,214,122,213,228,0,198,32,10,208,119,83,231,198,149,187,217,27,59,57,153,127,167,15,243,120,240,232,25,217,135,209,29,230,44,175,8,1,54,195,118,216,16,91,170,62,154,12,49,75,236,18,195,190,113,
143,86,168,54,235,72,163,68,252,155,41,179,163,75,35,55,157,12,250,241,211,31,209,145,227,231,162,239,167,205,147,109,13,26,236,243,61,51,60,18,141,231,88,110,97,190,231,45,89,35,219,53,186,195,156,229,
17,113,108,132,173,176,153,106,119,208,32,134,137,101,98,90,205,87,18,230,27,141,64,43,84,91,117,164,89,79,226,45,216,207,202,161,2,101,64,192,136,124,232,225,181,83,93,63,232,112,88,131,143,96,62,107,
231,47,95,253,38,219,50,178,97,238,212,156,42,176,9,182,193,70,170,173,65,135,152,38,182,211,126,24,209,6,52,66,93,95,87,26,39,226,48,125,206,146,232,217,243,55,127,51,32,198,229,131,79,29,119,156,244,
26,62,136,145,16,63,235,131,49,115,122,244,228,5,217,134,145,13,115,151,38,58,128,13,176,69,147,62,82,150,5,177,77,140,171,57,69,19,208,6,117,93,157,105,164,136,195,156,69,43,163,183,111,39,254,109,192,
223,127,255,87,43,96,206,55,234,53,170,23,204,95,186,38,186,58,122,55,250,242,229,207,191,4,68,155,207,95,254,21,31,187,86,215,26,217,48,119,204,161,154,91,230,156,185,199,6,234,90,67,67,140,19,235,196,
124,123,46,209,2,52,65,253,125,221,105,172,136,195,226,21,27,162,241,137,175,39,191,246,29,58,49,144,31,47,67,177,114,221,80,235,73,230,239,175,170,236,179,85,127,111,184,211,121,206,129,57,102,174,153,
115,245,247,70,54,196,58,49,207,92,162,1,104,129,250,187,38,208,104,17,135,101,107,182,196,198,84,255,205,240,131,39,156,221,251,142,69,227,227,159,255,45,56,60,241,168,191,53,220,97,14,219,243,201,220,
50,199,246,198,24,6,98,31,13,80,255,173,41,52,94,196,141,240,144,192,104,228,234,237,56,89,146,45,165,20,135,57,100,46,153,83,230,86,253,141,97,116,195,68,220,200,5,175,171,43,214,110,177,39,198,0,48,
135,204,165,45,247,25,121,48,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,
70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,
195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,
134,97,24,53,198,68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,
68,220,48,12,163,198,152,136,27,134,97,212,24,19,113,195,48,140,26,99,34,110,24,134,81,99,76,196,13,195,48,106,140,137,184,97,24,70,141,49,17,55,12,195,168,49,38,226,134,97,24,53,198,68,220,48,12,163,
182,28,138,254,23,47,45,141,49,170,30,60,248,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GUI::hands1_png2 = (const char*) resource_GUI_hands1_png2;
const int GUI::hands1_png2Size = 15633;

// JUCER_RESOURCE: hands2_png, 21115, "../../../../Pictures/hands/hands2.png"
static const unsigned char resource_GUI_hands2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,113,0,0,1,0,8,6,0,0,0,69,249,70,192,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,
72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,82,29,73,68,65,84,120,94,237,157,7,120,84,215,153,254,95,245,222,59,66,20,33,122,7,83,220,113,3,219,128,43,174,24,119,59,113,54,201,166,109,54,101,243,
15,217,148,221,205,110,118,55,101,55,155,196,113,236,184,198,189,208,59,152,222,65,128,4,8,161,46,161,46,161,94,255,247,189,92,37,32,52,51,183,156,25,205,29,157,159,31,30,230,12,50,220,115,206,247,189,
247,59,237,59,126,43,87,174,236,133,68,34,145,72,108,137,191,246,187,68,34,145,72,108,136,20,113,137,68,34,177,49,82,196,37,18,137,196,198,72,17,151,72,36,18,27,35,69,92,34,145,72,108,140,20,113,137,68,
34,177,49,82,196,37,18,137,196,198,72,17,151,72,36,18,27,35,69,92,34,145,72,108,140,20,113,137,68,34,177,49,82,196,37,18,137,196,198,72,17,151,72,36,18,27,35,69,92,34,145,72,108,140,20,113,137,68,34,177,
49,82,196,37,18,137,196,198,72,17,151,72,36,18,27,35,69,92,34,145,72,108,140,20,113,137,68,34,177,49,82,196,37,18,137,196,198,72,17,151,72,36,18,27,19,176,96,193,130,149,218,103,137,135,200,47,169,194,
152,204,113,200,204,28,139,145,35,51,145,145,49,10,41,169,233,240,15,12,197,185,194,82,28,207,57,139,140,180,36,237,167,37,18,239,97,207,225,83,8,9,141,196,184,113,19,49,118,236,120,140,24,49,26,105,195,
50,16,23,159,132,238,30,127,156,60,147,143,184,232,8,237,167,37,158,64,222,118,239,97,242,138,46,224,241,135,150,225,174,59,111,213,190,185,146,77,155,118,224,100,78,46,54,110,219,134,57,211,198,107,223,
74,36,131,207,129,227,167,113,199,130,5,152,60,113,2,110,191,253,38,237,219,43,89,187,110,11,222,122,239,125,100,141,72,209,190,145,184,27,25,137,123,152,180,180,17,120,230,169,71,181,210,213,100,102,
142,68,115,83,11,58,59,187,224,215,219,165,125,43,145,12,62,105,105,25,152,51,107,166,67,1,39,99,179,70,227,140,18,141,119,119,182,106,223,72,220,141,156,19,247,48,169,41,201,218,39,199,220,118,219,141,
136,142,140,210,74,18,137,119,64,155,164,109,186,66,143,141,75,196,33,69,220,195,36,196,197,105,159,156,19,20,20,168,125,146,72,188,3,189,54,169,215,198,37,98,144,34,238,65,14,102,159,69,104,88,168,86,
114,78,80,80,144,246,73,34,241,14,244,218,36,109,156,182,46,241,12,82,196,61,72,84,100,36,252,253,252,180,146,115,2,3,101,36,46,241,46,244,218,36,109,156,182,46,241,12,82,196,61,136,17,195,14,8,8,208,
62,73,36,222,129,17,155,148,34,238,57,164,136,123,144,136,240,48,237,147,107,2,3,165,136,75,188,11,35,54,105,196,214,37,214,144,34,238,65,194,195,195,117,173,238,147,64,25,137,75,188,12,189,54,73,27,167,
173,75,60,131,20,113,15,18,22,166,63,58,145,211,41,18,111,195,136,77,26,177,117,137,53,164,136,123,144,176,80,125,59,83,136,60,70,43,241,54,140,216,164,17,91,151,88,67,138,184,7,9,13,9,209,62,185,38,192,
95,70,226,18,239,194,136,77,26,177,117,137,53,134,148,136,239,61,124,10,21,53,23,225,31,28,133,200,152,100,248,7,69,226,76,65,185,246,167,238,39,56,56,88,251,228,26,157,59,17,37,18,143,97,196,38,141,216,
186,85,232,195,244,101,213,167,21,223,166,143,211,215,135,10,67,38,119,202,249,210,106,60,124,255,189,184,102,230,76,60,253,228,163,184,110,254,28,116,117,116,99,218,228,41,216,119,248,56,162,35,220,31,
57,36,36,166,96,198,244,201,90,201,57,185,167,243,80,121,161,76,43,73,36,131,79,106,106,58,38,78,28,167,149,156,147,125,34,23,245,117,213,90,201,125,148,86,54,226,241,101,203,48,50,99,56,150,63,254,32,
110,190,241,90,132,5,135,97,252,216,44,28,56,122,2,113,209,190,191,192,58,36,34,241,61,135,115,176,236,158,165,120,248,161,123,175,216,29,194,207,11,23,222,140,9,227,198,106,223,184,15,166,240,12,54,112,
10,179,167,71,206,138,75,188,11,35,54,73,91,167,205,187,27,250,46,125,184,191,95,211,215,233,243,244,125,95,103,72,136,120,88,104,8,66,157,44,180,68,69,186,63,255,177,159,50,22,53,178,207,182,167,167,
71,251,36,145,120,7,70,108,146,182,78,155,119,55,206,124,151,62,79,223,247,117,134,134,136,135,133,58,157,207,227,118,40,79,188,177,253,252,244,55,183,20,113,137,183,97,196,38,141,216,186,89,232,179,206,
182,50,210,231,233,251,190,206,16,137,196,217,145,142,85,156,43,233,129,1,238,111,10,127,127,253,145,73,87,119,167,246,201,253,236,61,146,131,236,211,5,184,80,219,140,142,158,32,244,248,135,169,139,67,
7,142,159,209,126,66,50,216,176,47,216,39,236,27,246,17,251,138,125,198,190,243,20,70,108,210,136,173,155,133,62,235,124,23,140,223,144,216,234,56,36,68,60,52,196,121,71,242,109,238,239,239,254,166,48,
18,201,240,82,8,79,193,69,160,23,158,126,10,255,251,203,159,227,167,63,250,30,126,244,131,111,99,217,189,247,226,233,199,31,69,93,83,151,71,230,54,37,3,195,182,103,31,176,47,216,39,236,27,246,17,251,138,
125,198,190,243,20,70,108,210,19,35,73,250,172,171,67,69,174,124,223,23,24,26,145,120,120,216,21,11,31,253,81,35,113,55,231,42,233,237,237,69,87,87,183,86,114,77,107,91,155,246,201,253,164,36,37,97,209,
194,5,90,233,18,108,175,101,15,46,197,210,59,23,98,92,214,24,237,91,137,167,97,219,179,15,216,23,253,109,152,125,198,190,243,20,70,108,146,182,78,155,119,39,244,89,103,145,56,219,139,190,239,235,12,161,
233,20,199,176,179,195,195,220,191,21,169,189,93,191,19,92,108,106,214,62,185,159,120,39,73,252,217,54,70,118,213,72,196,194,182,239,47,222,151,227,172,239,68,99,196,38,141,216,186,89,232,179,206,218,
134,200,233,20,31,193,217,206,148,62,34,34,220,187,67,229,218,89,147,80,83,87,175,149,92,83,91,87,171,125,114,47,28,174,199,198,198,104,37,137,221,96,223,121,106,186,203,136,77,210,214,105,243,238,68,
143,207,234,241,125,187,51,68,230,196,93,159,30,243,68,234,204,195,71,143,225,213,215,222,193,234,213,27,177,121,243,231,218,183,87,243,241,39,107,81,88,84,172,149,220,11,141,60,60,212,121,221,61,177,
211,64,50,48,174,218,158,125,231,41,161,162,77,210,54,29,65,155,166,109,211,198,105,235,238,70,143,207,234,241,125,187,227,183,114,229,74,159,63,85,146,144,156,129,47,191,244,172,86,26,152,127,90,249,
47,8,242,235,208,74,238,131,81,83,120,88,168,226,120,97,234,162,12,141,44,40,40,88,157,223,235,233,238,65,83,115,51,170,107,106,48,125,226,104,237,255,112,47,167,207,151,225,153,229,143,227,142,59,110,
214,190,185,154,111,125,103,37,162,194,220,191,219,64,114,53,23,91,123,241,31,255,234,248,80,245,198,141,219,241,167,55,223,194,248,209,195,180,111,220,203,177,156,243,72,76,72,64,164,18,5,251,7,248,171,
115,223,157,157,29,104,107,239,64,107,107,43,218,218,90,209,210,218,230,246,40,156,116,246,6,227,39,43,191,171,149,6,230,55,191,125,5,53,149,158,9,136,6,139,33,17,98,133,232,200,227,16,238,98,149,91,20,
52,238,233,19,51,21,167,75,195,136,212,88,36,199,133,35,46,50,16,81,161,126,136,137,8,64,122,114,180,199,4,156,196,198,196,56,21,240,75,200,211,163,131,135,243,182,103,223,177,15,61,5,109,147,54,74,91,
165,205,210,118,105,195,180,101,218,52,109,219,19,2,78,244,248,172,30,223,183,59,67,67,196,117,12,169,134,106,18,251,184,216,88,237,147,196,174,12,213,62,212,227,179,122,124,223,238,248,188,136,115,250,
194,27,34,113,62,71,117,67,27,66,194,227,145,144,52,28,41,105,163,144,156,58,74,253,28,21,123,41,163,98,67,115,23,78,159,47,247,216,66,21,73,208,177,187,161,91,158,30,29,52,244,180,189,158,62,20,5,109,
147,54,74,91,165,205,210,118,105,195,180,101,218,52,63,211,198,105,235,238,182,99,189,145,184,39,253,105,48,240,249,44,134,165,21,213,152,51,107,166,203,236,107,167,114,206,162,174,182,74,43,137,167,169,
165,3,203,31,90,134,39,159,120,8,115,231,204,194,53,179,103,96,206,53,51,212,207,215,206,159,131,155,111,188,14,129,254,65,152,53,125,26,38,142,27,139,61,135,142,33,62,198,253,151,205,166,166,13,199,204,
25,83,180,210,192,172,91,191,5,97,33,50,191,249,96,208,218,222,141,59,23,222,170,149,6,38,247,244,57,52,212,215,104,37,247,145,87,116,1,143,61,248,0,174,159,55,87,221,191,254,244,83,143,170,182,75,27,
166,45,211,166,249,249,134,235,231,33,36,48,4,167,114,79,35,41,62,90,251,191,197,147,156,50,12,211,167,57,159,186,57,115,230,28,14,31,59,142,225,105,158,219,79,239,105,124,62,18,231,114,92,80,96,224,165,
130,19,66,130,131,176,255,88,174,86,18,207,176,180,84,151,123,90,249,231,252,245,208,178,123,48,101,226,4,237,91,247,193,35,219,177,49,174,157,76,70,226,131,135,158,182,103,31,122,226,248,61,109,146,182,
217,103,167,206,224,159,211,230,221,5,125,149,62,235,10,250,190,175,47,201,251,188,136,247,42,93,24,168,67,196,121,168,194,157,183,233,36,37,36,104,159,244,17,23,235,254,33,50,135,163,33,193,174,179,188,
117,119,235,63,105,42,17,139,158,182,103,31,122,98,97,222,168,77,26,181,121,35,208,87,245,28,66,163,239,83,3,124,25,223,143,196,149,254,211,147,23,37,48,40,24,1,110,60,122,31,103,240,64,13,183,112,185,
155,200,200,8,4,233,136,102,186,187,61,151,199,69,114,37,122,218,158,125,200,190,116,55,70,109,210,168,205,27,129,190,74,159,117,5,125,223,3,25,113,7,21,159,23,113,162,103,131,28,247,105,7,184,41,9,22,
135,186,145,145,198,230,183,67,61,144,7,57,38,58,26,119,220,126,147,86,26,24,30,224,240,100,50,46,201,149,176,237,157,29,12,35,236,67,246,165,187,49,106,147,180,121,119,77,243,208,87,245,228,59,26,10,
155,99,125,95,196,123,123,209,209,225,250,16,15,141,194,93,39,19,3,2,252,13,71,49,1,1,1,110,159,231,140,215,177,53,141,73,140,228,116,202,224,193,182,215,147,72,74,79,95,90,129,182,72,155,52,2,109,158,
182,239,14,232,171,122,130,46,213,247,221,156,136,107,176,241,121,17,159,55,115,34,182,236,216,137,247,222,95,229,52,162,169,172,174,70,91,123,187,86,18,75,96,64,160,203,148,153,253,241,87,140,52,208,
160,211,24,37,78,231,246,194,206,46,25,137,15,22,108,123,61,139,155,122,250,210,10,180,69,218,164,17,104,243,180,125,119,64,95,165,207,58,130,190,78,159,167,239,83,3,124,153,33,113,236,190,143,35,39,243,
17,27,27,141,136,240,112,245,216,59,87,174,25,233,212,213,215,161,172,188,194,109,157,157,155,95,134,231,159,124,194,229,138,254,229,48,7,197,239,95,123,29,179,38,187,47,13,236,168,204,137,120,106,197,
195,90,105,96,214,174,221,130,87,222,120,19,83,198,141,208,190,145,120,146,19,103,138,240,236,19,203,113,215,93,206,183,25,190,246,250,187,40,200,119,223,200,237,240,201,115,120,241,169,21,88,188,248,
14,237,27,215,80,72,95,254,243,27,152,144,233,158,148,0,251,148,209,1,119,192,112,193,149,163,4,190,240,120,236,191,185,165,5,245,245,141,152,57,57,83,251,73,223,198,231,35,241,203,97,167,142,78,79,84,
143,9,71,135,249,33,44,168,27,145,161,64,70,106,156,91,223,214,124,105,24,17,240,75,248,185,109,142,190,15,61,219,11,123,122,152,27,195,115,183,12,73,174,132,109,207,62,112,133,158,190,180,194,37,91,52,
182,66,72,155,167,237,187,11,250,44,125,151,62,76,95,166,79,211,183,233,227,67,69,192,201,144,18,113,194,253,165,7,143,159,193,129,227,167,177,247,136,251,246,133,95,142,153,157,3,126,254,126,110,189,
109,232,232,169,115,234,105,54,87,112,97,205,93,211,76,18,215,176,237,245,44,44,179,47,217,167,238,66,221,229,97,226,202,53,79,236,154,33,244,101,250,52,125,219,157,231,61,188,17,159,23,113,14,185,122,
3,194,49,98,212,56,76,158,50,11,207,63,185,2,207,61,249,132,250,251,11,79,61,129,9,19,167,33,99,228,88,68,68,39,161,180,178,81,251,191,196,98,38,26,241,247,83,34,113,55,206,137,115,231,128,158,191,255,
98,115,179,199,18,26,73,174,134,109,207,62,112,5,251,210,232,14,40,35,240,239,167,77,26,197,93,145,56,125,149,62,75,223,165,15,211,151,47,247,109,250,58,125,158,190,79,13,240,101,124,126,78,188,160,180,
6,127,250,253,175,180,146,115,222,255,224,51,252,233,205,183,49,119,250,120,237,27,49,4,133,198,224,123,255,248,53,173,164,143,245,235,183,226,213,183,222,198,132,204,116,237,27,177,156,45,188,128,199,
31,122,64,61,40,226,108,170,231,191,126,245,127,104,172,187,160,149,36,131,65,116,92,10,190,254,213,47,106,165,171,225,220,115,123,71,59,222,122,239,67,140,29,153,162,125,43,150,220,252,82,60,253,248,
99,88,180,232,22,237,27,125,252,236,223,254,27,157,109,13,90,73,12,251,143,157,198,51,203,31,83,175,172,211,195,51,47,126,21,163,210,221,119,240,104,176,241,249,220,41,240,15,114,153,123,162,143,226,226,
50,156,204,205,69,82,188,216,67,10,145,81,113,184,118,222,53,90,73,31,249,249,5,56,118,226,36,18,227,162,180,111,196,146,16,27,137,77,219,247,160,188,162,2,251,14,28,198,145,163,217,200,201,57,131,243,
231,139,80,88,84,138,115,249,133,200,203,59,175,252,217,33,68,132,201,235,217,6,147,146,242,106,37,10,14,248,107,159,28,207,62,133,61,251,14,98,219,142,221,216,176,105,27,142,43,118,178,115,207,62,183,
45,32,146,154,250,38,204,156,54,5,99,198,24,75,147,124,240,240,49,180,183,53,105,37,49,52,52,181,98,254,53,215,32,43,75,223,179,108,223,177,11,161,193,238,221,233,53,152,248,252,116,138,145,225,28,143,
232,70,185,97,72,106,238,72,52,247,173,187,247,168,217,164,172,225,136,141,84,4,186,171,89,137,182,43,80,92,120,22,217,199,15,226,215,191,251,61,126,247,167,87,241,219,63,190,130,164,56,247,31,231,150,
56,135,125,192,190,96,159,176,111,216,71,236,43,246,25,251,142,125,200,190,116,39,151,108,209,184,92,184,35,29,0,125,84,79,42,141,62,220,185,184,234,13,248,188,136,27,185,186,138,211,10,209,81,226,87,
249,195,77,92,253,70,159,113,231,194,166,51,230,78,159,128,233,19,70,99,214,228,44,237,27,201,96,195,190,96,159,176,111,6,3,179,199,215,205,216,190,43,232,163,70,118,123,249,250,61,155,62,47,226,65,6,
111,246,136,138,18,187,154,190,239,104,46,130,13,62,131,138,226,49,238,138,196,185,40,20,21,147,140,144,240,56,116,244,4,163,170,174,21,231,138,43,113,44,39,31,187,15,249,118,238,101,95,128,125,196,190,
98,159,177,239,216,135,236,75,246,169,187,22,231,85,91,52,97,143,180,125,250,128,72,140,250,168,81,13,176,27,190,31,137,27,236,192,136,112,177,211,41,92,213,215,147,10,183,63,116,23,119,137,248,204,105,
83,241,141,175,189,132,239,252,195,87,241,211,31,125,23,247,47,93,140,21,143,60,140,231,159,124,18,47,61,247,52,70,142,158,160,174,252,87,213,183,250,252,202,190,29,96,31,176,47,216,39,236,27,246,17,251,
138,125,198,190,99,31,178,47,217,167,236,91,119,64,91,52,99,141,180,125,209,187,172,140,250,168,81,13,176,27,62,47,226,70,163,96,209,183,222,7,6,248,35,72,71,202,204,254,208,105,204,108,233,114,5,115,
96,36,38,196,107,165,75,112,104,202,187,26,239,190,251,54,220,119,239,93,120,250,201,71,240,173,175,127,9,247,47,89,140,225,233,238,217,29,35,209,15,251,128,125,193,62,97,223,176,143,216,87,236,179,254,
211,10,236,91,119,228,220,161,45,154,9,42,104,251,244,1,145,24,245,81,83,35,97,27,225,251,211,41,58,210,85,94,78,68,132,216,69,16,127,127,115,145,56,241,243,19,191,162,206,5,33,189,23,235,82,32,68,183,
135,196,56,236,3,189,115,192,236,91,35,139,126,122,49,107,139,180,125,250,128,72,140,218,164,81,13,176,27,67,64,196,141,25,180,209,68,85,174,80,167,83,12,62,3,161,211,250,249,137,223,194,207,251,24,93,
223,110,255,55,220,53,165,35,209,143,145,62,96,223,186,227,206,77,218,162,222,23,201,229,208,246,69,79,167,24,245,81,51,254,103,39,124,90,196,57,151,104,52,10,230,225,23,145,23,171,114,40,119,219,109,
206,115,118,59,194,95,176,241,147,132,120,99,14,46,211,208,14,62,70,251,192,104,31,235,193,172,45,210,246,69,78,103,208,55,245,220,70,117,57,212,0,95,94,219,241,105,17,103,174,7,163,67,203,192,64,127,
4,11,28,126,233,185,7,208,147,36,26,188,50,203,29,34,94,124,161,1,93,8,65,175,127,24,154,219,149,114,69,61,14,159,204,211,254,212,62,240,153,249,236,172,3,235,194,58,177,110,162,49,218,7,70,251,216,221,
136,244,1,250,38,125,212,8,212,0,51,121,95,236,130,111,139,184,50,12,53,58,148,226,208,47,88,160,209,121,219,124,92,66,252,149,139,154,174,232,232,16,155,193,240,96,246,25,220,125,199,109,248,241,15,191,
131,149,63,248,54,126,254,179,31,226,177,101,15,224,165,103,159,193,176,225,153,200,47,169,210,126,210,123,225,51,242,89,249,204,124,118,214,129,117,97,157,88,55,214,81,36,70,251,192,104,31,187,27,145,
62,64,223,52,58,61,67,13,240,229,105,65,159,23,113,163,145,56,13,36,36,68,220,213,104,34,95,8,86,97,118,55,163,247,30,138,78,67,27,23,27,139,152,232,43,83,9,112,174,245,206,59,111,197,11,207,173,80,68,
80,127,190,234,193,130,207,200,103,229,51,247,159,39,102,221,88,71,145,24,237,3,246,177,55,101,242,19,233,3,244,77,163,34,174,70,226,82,196,237,9,111,34,49,58,39,206,91,180,245,164,104,213,139,158,27,
185,29,161,231,90,46,35,4,5,6,35,58,74,127,46,22,38,86,234,236,18,43,226,233,105,195,156,174,17,184,235,58,47,145,56,123,70,214,141,117,20,9,251,192,217,173,84,253,97,31,179,175,69,98,197,22,173,248,64,
127,232,155,244,81,35,168,59,100,220,116,245,162,55,224,227,145,184,63,2,12,138,56,35,43,145,249,30,204,222,160,79,167,237,233,118,125,45,151,17,162,163,35,13,101,161,235,234,238,70,87,151,216,57,241,
12,23,251,206,187,5,215,217,29,184,122,70,87,117,52,10,251,128,125,161,23,246,49,251,90,36,180,69,35,47,146,203,49,235,3,3,65,223,52,186,75,134,26,224,174,251,115,189,1,159,22,113,70,76,174,110,115,31,
136,240,8,113,34,110,246,158,76,70,62,61,189,98,5,45,209,224,92,41,23,212,186,187,197,221,175,201,164,253,169,41,73,90,105,96,122,116,220,39,57,216,184,122,70,214,145,117,21,5,251,192,240,226,166,224,
121,113,218,162,217,104,92,228,93,177,102,124,147,26,96,135,17,158,89,124,90,196,205,30,122,136,140,16,23,197,152,157,139,163,80,116,11,142,130,19,250,157,212,116,5,35,206,174,46,113,162,26,27,19,235,
50,75,100,183,142,171,200,6,27,87,207,200,58,178,174,162,96,31,24,29,161,24,237,107,87,208,22,205,190,96,69,206,71,155,245,77,179,90,96,7,124,90,196,205,110,242,143,140,16,151,4,203,236,244,0,29,134,137,
254,69,146,16,103,84,196,25,1,138,139,196,211,211,210,92,30,52,114,199,150,70,209,184,122,70,214,145,117,21,133,153,126,48,218,215,174,160,45,154,21,113,145,83,100,102,125,211,151,15,252,248,180,136,155,
77,229,42,82,196,235,27,26,176,110,221,22,173,164,159,142,206,78,180,180,182,105,37,235,240,176,131,222,227,246,125,80,172,186,4,58,96,250,48,215,194,38,122,14,222,29,232,121,70,61,117,213,11,251,192,
232,203,141,125,45,242,128,11,109,145,54,105,20,218,62,125,64,20,102,125,115,176,210,58,123,2,159,190,158,237,124,73,53,94,253,195,175,181,146,126,222,126,231,67,156,57,157,173,149,172,115,52,39,31,17,
97,225,8,13,13,81,135,117,129,129,65,8,10,12,80,127,231,150,41,46,214,68,68,132,41,191,43,63,163,148,121,48,33,191,160,16,189,157,226,110,68,225,37,186,207,174,88,129,165,75,244,111,225,123,247,189,79,
144,115,234,168,86,178,6,79,218,241,238,195,101,15,46,209,190,25,152,223,253,225,117,84,148,229,107,37,239,36,117,88,38,190,240,194,10,173,52,48,239,127,176,10,47,255,249,117,97,247,147,78,156,52,3,15,
63,116,175,86,114,205,103,171,54,226,149,215,95,199,140,73,99,180,111,172,227,23,20,137,204,81,35,209,219,211,171,94,224,220,210,218,130,230,230,86,229,247,86,180,43,229,174,174,78,116,114,17,86,249,189,
171,171,11,109,109,237,104,86,126,102,198,68,113,55,207,143,27,63,21,143,61,250,128,86,210,207,211,47,124,5,163,135,39,106,37,223,194,167,35,113,179,195,63,209,73,159,104,196,99,71,165,34,35,53,14,105,
137,81,72,138,13,85,111,99,137,12,85,134,121,126,237,232,108,171,71,125,77,57,202,74,206,33,255,220,41,156,59,123,82,168,128,147,208,80,190,36,140,37,199,215,115,203,186,94,98,162,163,117,221,124,222,
221,35,118,75,163,59,208,243,140,172,43,235,44,10,163,125,193,190,102,159,139,132,54,73,219,164,141,210,86,105,179,180,93,218,48,109,153,54,77,219,166,141,211,214,105,243,34,5,156,152,245,77,179,90,96,
7,124,90,196,205,238,113,230,209,222,3,199,207,106,37,223,32,62,46,214,240,214,44,145,123,196,121,20,92,207,158,253,206,78,239,159,78,209,243,140,172,171,200,227,239,70,251,130,125,205,62,247,37,232,147,
102,83,98,136,62,239,224,77,248,180,136,183,182,181,153,154,143,230,106,186,168,3,10,133,101,181,104,108,233,70,237,197,14,148,92,168,71,206,185,82,28,204,62,171,158,168,99,222,231,190,95,156,110,112,
231,173,58,241,38,50,219,137,60,173,57,44,53,69,215,75,132,195,112,111,71,207,51,178,174,172,179,40,204,244,133,153,62,215,11,109,149,54,123,185,13,211,166,105,219,180,113,218,58,109,158,182,79,31,16,
1,125,210,204,78,23,106,0,181,192,87,241,233,57,113,82,84,94,139,145,35,70,32,46,38,70,77,97,169,206,75,7,48,61,230,223,222,95,60,72,209,173,56,38,23,110,154,154,154,81,90,94,129,227,39,79,98,254,204,
137,218,79,152,163,166,177,29,247,220,117,39,110,239,183,87,125,211,166,29,104,229,60,98,71,135,186,96,197,213,123,238,195,229,239,109,237,109,168,172,170,198,209,236,19,152,54,126,164,246,127,88,39,58,
46,21,95,255,234,23,180,146,62,254,247,255,254,132,170,11,69,90,201,26,233,25,99,240,252,179,79,104,37,199,252,219,127,252,10,109,205,117,90,201,59,9,141,136,195,63,126,235,171,90,201,49,47,191,242,6,
74,139,207,105,37,107,36,165,140,192,151,190,248,140,86,210,199,127,253,234,119,151,46,83,22,196,241,211,133,152,49,117,10,146,147,18,17,26,18,170,250,16,79,66,242,119,53,93,69,112,176,234,99,3,217,251,
167,107,215,33,33,218,90,58,11,190,40,166,77,158,140,244,180,84,117,186,138,162,206,131,60,151,239,67,167,15,117,117,95,154,143,167,143,213,53,52,160,176,168,8,35,210,196,238,214,241,38,124,94,196,7,147,
212,244,76,124,225,121,231,11,96,3,193,147,113,213,53,53,120,253,47,239,97,206,180,113,218,183,214,24,149,57,17,79,173,120,88,43,233,227,151,191,254,61,234,107,203,181,146,121,24,177,189,244,220,51,184,
247,158,59,181,111,28,243,207,63,253,15,244,118,53,107,37,239,196,47,48,2,255,239,251,223,210,74,142,249,228,211,117,248,237,31,255,36,100,113,51,54,62,13,127,255,149,23,181,146,62,94,123,253,93,20,228,
139,217,161,114,224,248,25,172,120,228,33,117,138,200,232,180,28,249,221,203,175,163,162,212,187,23,172,237,138,79,79,167,12,38,28,90,166,38,57,63,157,232,8,58,9,157,133,17,135,8,246,31,61,141,40,29,139,
138,253,49,179,165,108,32,34,194,195,17,166,140,128,244,208,222,222,161,125,242,94,244,62,35,235,204,186,139,192,76,95,176,207,217,247,34,160,45,154,21,112,66,95,240,166,164,92,190,132,207,139,56,13,103,
255,177,211,56,160,252,226,239,252,117,80,137,42,14,101,159,197,225,19,121,56,114,50,95,253,157,115,121,28,174,137,34,42,50,74,157,186,49,11,157,37,217,228,75,160,63,161,220,169,96,34,51,163,168,57,113,
10,153,222,43,186,184,117,205,219,209,251,140,172,179,40,17,55,211,23,236,115,246,189,8,104,139,102,5,156,208,23,232,19,162,160,175,210,103,47,247,97,250,52,125,187,207,207,255,230,243,190,253,242,240,
233,233,20,118,52,231,164,211,82,146,209,11,94,244,170,124,201,252,15,202,135,75,11,36,188,140,152,121,33,46,229,42,225,252,52,247,187,214,214,215,163,168,184,4,217,167,78,153,158,23,47,169,108,192,31,
254,231,63,181,146,57,126,254,139,95,163,181,201,250,162,80,94,209,5,60,245,216,163,87,205,85,186,98,229,79,254,29,126,221,45,90,201,60,116,174,91,110,186,17,153,163,70,33,210,201,125,145,156,70,122,255,
147,207,144,154,32,238,176,149,59,168,168,105,198,178,123,151,58,173,71,83,115,11,242,11,10,176,117,199,231,152,61,117,172,246,39,230,233,13,8,199,202,127,250,7,173,164,15,206,69,191,246,246,59,200,26,
97,125,129,53,44,50,30,223,254,230,87,180,146,57,94,248,187,111,96,120,178,177,3,103,125,208,151,167,78,154,132,17,25,195,17,31,27,251,215,148,180,244,227,62,31,86,90,233,82,126,23,205,199,213,223,148,
239,202,47,84,170,115,242,86,215,184,188,21,159,22,241,99,185,231,241,210,115,207,154,74,130,69,71,124,251,253,15,145,145,106,110,155,86,67,75,15,254,243,223,126,164,149,204,241,203,223,252,1,245,53,101,
90,201,60,165,149,141,120,228,129,251,12,71,82,223,253,193,79,16,26,40,110,203,223,225,147,231,144,156,152,128,180,212,84,164,36,37,35,41,49,30,225,225,17,8,12,12,64,128,191,63,120,18,242,141,119,223,
197,184,81,226,78,59,186,131,51,5,229,120,226,225,135,213,231,238,238,97,126,153,110,180,180,52,163,170,186,22,23,170,42,81,94,81,129,202,234,26,204,154,44,238,160,77,91,87,0,254,229,199,255,164,149,244,
65,27,254,203,135,31,35,61,217,250,126,245,216,132,97,248,251,47,191,160,149,204,241,141,127,252,33,98,194,205,13,254,121,131,18,47,224,48,51,26,216,168,188,204,126,251,199,87,48,125,194,104,237,27,223,
34,96,193,130,5,43,181,207,62,71,115,75,39,190,245,245,47,105,37,99,156,63,95,132,210,178,114,4,155,76,185,16,18,26,129,5,55,93,175,149,204,113,244,104,54,154,155,172,31,89,206,59,95,140,206,174,46,20,
20,20,161,184,184,76,249,189,24,133,202,47,214,49,51,211,241,14,152,213,107,55,32,52,88,92,6,186,180,228,120,68,71,134,66,145,107,180,52,55,160,186,170,2,159,173,223,130,147,57,57,56,145,115,90,221,145,
83,91,87,135,140,52,49,211,72,238,226,76,126,49,206,158,203,87,70,106,57,56,116,228,8,246,30,56,136,96,255,78,181,78,172,27,235,200,186,138,164,169,165,3,119,46,188,85,43,93,13,5,155,253,121,54,239,60,
114,114,206,96,207,222,3,234,243,229,41,207,41,226,89,98,98,227,113,205,236,25,90,201,28,123,246,29,132,95,175,185,41,186,128,192,80,100,101,142,118,106,175,142,24,163,252,63,171,215,110,68,124,140,119,
143,240,204,226,211,34,222,218,222,141,165,139,23,105,37,99,208,88,14,30,58,138,158,46,115,115,180,81,209,113,184,110,254,28,173,100,142,195,71,178,209,116,209,250,118,59,213,137,123,58,209,80,95,131,
15,87,111,64,246,201,83,200,203,207,199,133,202,42,228,230,158,69,69,69,21,198,143,207,210,126,250,111,188,247,209,167,136,137,20,123,234,175,63,195,82,18,144,20,31,163,58,88,98,92,148,215,11,56,225,51,
242,89,249,204,124,118,214,193,221,84,214,54,226,222,37,87,239,238,249,244,179,245,216,184,121,59,142,157,56,129,125,7,15,97,215,222,125,216,181,111,63,162,194,148,136,87,233,115,81,47,147,232,152,4,204,
158,53,93,43,153,227,208,225,227,232,104,55,183,243,40,34,50,6,79,173,120,68,43,25,103,237,134,45,136,142,16,119,99,151,55,225,211,34,222,209,5,220,189,232,54,173,100,156,236,19,185,106,116,101,134,184,
248,68,203,145,203,209,99,39,208,216,32,230,160,68,31,20,160,148,196,88,85,156,3,253,123,209,218,210,136,143,20,97,167,145,243,165,145,151,151,175,68,235,229,56,125,58,15,251,148,8,51,53,201,218,129,17,
46,44,221,127,239,125,24,49,98,148,18,205,37,32,48,40,12,109,29,221,138,40,53,32,95,249,119,146,19,204,205,145,122,27,39,206,22,195,63,48,68,17,187,120,164,164,166,99,228,200,209,200,26,51,22,195,210,
51,240,209,154,141,72,79,181,150,183,163,64,105,171,144,160,80,228,228,230,97,199,231,187,241,209,167,107,241,202,159,223,194,142,93,187,145,16,19,162,246,37,251,148,125,235,142,23,97,108,92,2,102,205,
156,166,149,204,113,252,248,73,211,35,203,132,132,84,204,185,198,188,63,109,80,94,116,225,161,190,153,201,208,167,69,188,171,215,31,139,110,215,127,147,77,127,206,230,157,195,234,141,219,76,57,69,114,
74,58,166,79,155,172,149,204,113,228,168,24,17,231,113,229,134,139,173,40,41,175,26,48,50,99,253,18,98,35,17,224,215,173,68,254,245,248,116,189,34,232,199,142,97,246,20,235,11,114,240,15,198,244,41,147,
213,244,172,147,38,141,87,163,185,155,110,184,22,33,138,224,205,156,54,77,17,189,56,52,181,118,32,191,176,12,39,207,156,71,198,48,239,143,196,9,79,44,246,250,5,34,53,45,29,227,198,78,192,117,115,231,98,
210,248,113,120,234,201,71,212,58,178,174,99,198,140,70,81,97,41,138,74,74,45,71,129,124,153,126,182,126,51,14,29,61,142,216,136,64,181,175,216,103,142,108,243,200,201,115,168,107,108,65,65,201,5,164,
11,24,41,48,18,159,53,115,170,86,50,199,169,156,179,168,175,51,126,17,54,207,25,204,155,51,11,83,167,152,223,111,191,121,235,14,229,37,104,252,180,167,29,240,233,45,134,86,19,193,51,129,145,217,20,150,
34,174,120,19,145,62,179,189,59,8,47,60,245,4,158,121,226,49,188,240,244,10,140,201,154,4,255,160,72,156,47,169,113,120,251,204,188,25,227,49,119,250,4,173,100,13,71,41,89,185,64,181,112,225,205,120,104,
217,61,234,174,135,71,31,188,31,195,4,237,139,247,4,124,86,62,51,159,157,117,96,93,28,45,186,137,74,75,203,62,97,223,12,4,251,146,125,202,190,101,31,179,175,213,62,87,250,158,54,96,21,17,182,104,214,39,
248,111,91,77,38,38,47,133,176,41,70,47,73,238,15,143,22,155,49,60,70,14,86,246,136,247,97,53,110,56,158,91,128,27,175,157,175,158,148,188,115,209,173,88,124,247,29,120,98,249,67,248,193,247,190,137,229,
143,44,195,179,79,44,71,124,98,58,90,59,253,113,174,184,18,71,78,137,57,34,222,7,163,213,97,169,169,186,118,20,48,82,183,218,95,158,132,207,234,234,130,11,194,186,179,13,68,231,197,97,95,177,207,216,119,
236,67,246,37,251,148,125,203,62,102,95,179,207,217,247,180,1,218,130,21,68,196,176,244,9,250,134,81,232,131,244,69,43,216,201,182,140,226,219,145,184,197,187,253,232,128,113,177,198,231,108,131,130,130,
132,220,43,200,188,226,86,24,61,106,36,130,131,7,142,194,184,237,242,129,251,23,227,43,127,247,60,254,245,39,63,80,247,145,83,8,210,210,51,81,85,215,130,125,71,173,31,144,96,78,141,228,68,253,115,193,
34,111,17,114,55,70,158,149,109,32,226,142,71,246,9,251,134,125,196,190,98,159,177,239,216,135,236,75,71,91,105,105,3,180,5,43,88,181,69,66,159,160,111,24,133,62,168,39,16,112,134,200,123,62,189,13,159,
22,113,30,6,176,138,153,76,112,60,41,39,98,248,105,245,134,238,81,25,25,186,141,159,63,119,207,210,69,120,241,249,21,184,127,233,18,220,114,163,53,167,33,188,107,82,79,14,113,194,45,114,162,142,249,123,
2,62,43,159,89,15,108,3,87,119,139,234,129,125,194,190,97,31,177,175,140,244,45,109,193,10,34,110,139,167,79,152,57,57,44,34,27,163,8,45,240,86,164,136,187,192,76,78,102,245,118,30,245,68,168,53,252,45,
70,63,60,221,102,6,58,125,250,176,84,203,105,8,82,146,245,31,213,238,233,237,181,69,26,218,62,248,172,124,102,61,176,13,216,22,86,96,95,176,79,244,182,103,127,204,218,66,31,86,109,145,208,39,204,137,184,
245,188,232,82,196,109,74,64,128,245,121,176,184,88,227,81,64,176,176,72,220,188,227,156,202,43,81,163,53,179,48,205,167,213,58,164,38,39,107,159,92,163,222,231,105,131,251,53,251,224,179,26,185,247,210,
72,91,12,4,251,194,74,142,123,218,2,109,194,44,98,130,18,165,14,38,68,220,140,15,246,71,132,22,120,43,62,46,226,214,171,23,19,19,109,120,126,56,52,196,220,237,35,253,9,208,153,52,106,32,210,82,83,116,
15,247,7,70,203,53,99,1,35,209,167,42,138,54,186,66,171,239,184,189,94,172,70,226,151,250,194,124,135,208,22,104,19,102,177,98,139,151,99,212,55,232,123,244,65,171,136,208,2,111,197,199,69,220,186,225,
113,46,51,40,200,216,91,60,44,52,212,244,176,247,114,172,24,158,222,155,116,28,209,219,171,8,170,133,172,58,204,38,103,100,46,147,11,133,118,91,216,52,242,188,108,11,182,137,105,148,190,80,251,196,36,
180,5,43,55,13,137,16,65,62,3,125,195,8,244,61,17,235,9,114,58,197,166,136,88,145,230,109,37,145,17,198,140,40,212,160,161,58,194,202,222,214,148,100,107,153,235,56,223,171,119,206,119,32,194,195,195,
13,57,223,165,233,20,251,68,226,124,86,35,211,41,108,11,182,137,89,172,246,7,177,98,19,162,246,89,27,245,13,250,30,125,208,42,114,119,138,77,17,49,47,205,232,193,232,234,184,209,104,195,17,102,163,7,30,
117,79,178,120,73,111,119,87,183,165,27,194,211,82,82,12,165,190,229,66,161,221,34,113,35,11,177,108,11,182,137,89,216,23,236,19,43,208,38,104,27,102,16,21,201,26,245,13,250,158,136,81,173,8,45,240,86,
124,90,196,69,25,94,130,193,213,113,81,145,184,217,231,143,141,137,198,221,119,155,207,25,67,152,245,208,202,181,98,195,211,135,105,159,244,65,65,20,113,141,153,167,224,179,26,221,77,99,180,77,46,135,
255,30,251,196,10,180,9,218,134,25,68,249,146,81,223,48,234,123,142,16,245,252,222,136,111,79,167,4,10,18,241,120,99,153,224,194,195,196,220,230,194,29,1,102,14,221,88,221,9,65,58,58,204,95,147,166,110,
135,51,120,132,158,151,70,219,13,163,207,204,54,177,178,109,211,74,159,244,97,198,54,104,131,34,118,167,16,163,190,97,212,247,28,33,74,11,188,17,57,157,162,131,56,131,209,64,68,132,24,17,247,87,28,199,
204,113,225,84,11,195,246,62,58,58,205,95,147,198,250,199,197,26,107,51,17,2,229,105,140,62,51,219,196,138,109,88,233,147,62,204,216,6,109,144,182,40,2,163,245,55,234,123,142,144,211,41,54,69,239,189,
142,174,224,226,10,239,240,211,75,68,184,152,28,220,140,126,140,238,111,101,110,138,148,36,107,105,79,73,123,187,249,211,147,137,74,244,100,244,120,245,80,16,113,182,9,219,198,44,86,250,164,15,218,134,
209,252,37,180,65,81,145,184,17,223,160,207,25,221,84,224,8,81,90,224,141,248,246,116,138,160,189,161,188,23,50,204,64,34,172,136,8,65,55,136,48,18,55,184,189,145,43,249,113,113,214,135,160,86,68,149,
67,118,163,139,81,118,184,32,185,63,70,159,153,109,98,101,170,75,196,139,142,182,97,116,183,135,106,131,194,34,113,253,190,65,159,163,239,137,64,148,22,120,35,186,107,198,183,183,153,12,100,131,5,179,
198,137,122,251,114,103,129,222,29,42,188,71,82,84,198,52,158,116,54,186,181,43,58,42,10,225,2,110,56,183,34,170,209,209,198,111,53,111,111,183,95,36,110,230,153,205,180,77,31,34,94,116,180,13,218,136,
17,104,131,2,78,221,171,208,55,232,35,122,160,207,25,189,220,219,17,212,2,209,153,36,221,137,17,189,117,41,226,108,240,46,132,96,249,195,203,176,226,209,135,209,217,27,132,67,39,206,106,127,234,189,4,
40,86,39,242,148,150,222,45,123,209,2,14,38,252,21,63,127,37,130,48,38,226,70,242,149,56,195,138,168,150,148,149,99,213,234,13,90,73,31,205,45,214,111,213,247,52,70,159,153,109,194,182,49,139,136,23,29,
109,195,232,233,81,213,6,5,36,192,234,67,175,143,88,221,38,123,57,212,2,106,130,183,67,109,165,198,82,107,169,185,212,94,87,47,61,135,61,195,183,214,133,218,22,60,245,216,35,248,241,15,191,131,21,203,
31,194,242,199,30,196,79,86,126,15,143,47,91,134,162,138,122,237,39,189,19,102,93,19,57,15,150,146,162,207,240,163,162,196,93,198,202,197,164,64,131,211,41,169,41,214,119,166,144,246,14,243,81,95,76,120,
0,94,254,243,155,248,242,215,191,131,159,255,231,111,240,214,219,31,98,221,186,173,78,211,0,52,52,94,212,62,217,7,103,207,204,186,178,206,172,59,219,128,109,193,54,97,219,152,197,74,159,92,142,81,27,161,
13,138,90,216,36,122,125,68,175,207,233,129,90,32,34,19,163,59,161,166,82,91,169,177,212,90,106,46,181,151,26,76,45,118,52,146,112,88,171,185,179,103,224,254,37,119,171,121,138,251,243,232,35,247,225,
145,251,239,69,175,191,152,5,60,119,192,172,107,34,50,175,245,145,148,144,136,189,58,134,55,209,81,209,66,34,225,62,140,78,205,36,39,137,17,241,14,139,81,223,204,73,153,72,138,13,67,235,197,26,156,61,
147,141,223,254,241,21,188,243,193,135,88,249,147,127,199,171,127,126,7,27,55,237,208,126,18,88,191,97,27,170,107,170,181,146,125,224,51,243,217,251,96,157,88,55,214,145,117,101,157,89,119,182,1,219,130,
109,98,5,171,125,210,135,81,27,17,53,61,72,232,27,244,17,87,208,215,232,115,162,16,173,7,162,161,150,82,83,169,173,253,161,6,83,139,169,201,3,225,80,196,3,3,131,156,222,92,178,112,225,2,220,120,221,181,
72,73,27,133,67,217,222,55,189,34,58,18,143,140,12,71,100,148,235,97,160,213,107,164,46,135,6,239,232,82,135,129,56,114,42,95,77,160,47,2,81,81,95,31,179,166,100,97,120,74,44,252,186,91,80,120,254,52,
126,243,251,151,241,213,111,126,31,255,250,239,191,194,134,205,91,208,120,177,73,251,73,251,192,103,230,179,179,14,172,11,235,196,186,177,142,172,43,235,44,18,81,125,66,27,161,173,232,133,54,40,50,48,
209,227,35,244,53,250,156,40,188,53,18,167,118,82,67,169,165,212,84,71,80,139,169,201,3,225,176,86,167,114,115,177,118,237,22,173,52,48,236,216,47,190,248,20,30,121,224,126,100,159,41,210,190,245,14,184,
47,84,100,190,132,224,160,96,36,232,88,220,20,145,113,237,114,130,13,236,36,136,137,142,194,210,37,11,181,146,53,58,58,204,109,103,139,142,77,193,244,25,115,49,97,226,116,36,36,103,160,179,55,24,249,37,
85,216,127,236,202,67,75,179,38,143,65,66,116,48,218,91,234,16,29,30,96,171,211,154,125,240,153,249,236,172,3,235,194,58,93,14,235,204,186,179,13,216,22,108,19,182,13,219,200,12,102,251,164,63,180,17,
218,138,94,140,216,160,30,244,248,8,125,141,62,39,10,106,129,183,237,21,167,102,82,59,169,161,174,94,146,212,98,106,242,64,56,172,85,125,195,69,156,47,44,212,74,206,89,254,248,131,234,80,224,244,249,50,
237,155,193,135,67,39,145,71,109,217,200,174,14,74,112,53,57,70,199,80,209,8,70,114,72,167,165,136,187,104,184,163,211,248,208,189,176,172,22,83,38,77,196,125,247,222,133,71,30,190,15,95,126,233,89,252,
100,229,119,177,226,145,135,240,194,147,43,20,241,74,197,133,218,38,28,244,194,145,155,40,88,55,214,145,117,101,157,89,119,182,1,219,130,109,194,182,97,27,177,173,140,98,166,79,28,97,196,86,172,228,49,
31,8,250,136,171,157,23,244,53,145,209,63,181,192,155,166,83,168,149,212,76,106,167,30,168,197,212,228,129,112,40,226,215,205,158,132,99,39,78,232,206,73,205,27,191,31,88,186,196,107,132,156,111,93,209,
249,18,120,225,173,51,248,111,90,217,66,54,16,134,68,220,66,170,209,203,97,159,155,217,147,60,101,226,196,1,167,224,110,191,253,102,220,119,223,221,248,250,223,127,1,15,222,115,15,158,125,226,113,132,
69,37,224,92,81,165,173,182,173,58,130,117,96,93,88,39,214,141,117,100,93,89,103,214,189,63,108,35,182,149,81,216,39,122,253,209,21,70,108,69,180,136,211,71,92,69,197,174,124,205,40,151,68,220,59,34,113,
106,36,181,146,154,169,7,246,57,181,152,154,60,16,78,107,85,82,86,134,202,42,253,11,78,203,30,92,138,251,22,223,141,19,94,48,181,114,233,180,163,216,78,75,78,74,194,190,163,142,179,192,113,216,41,106,
58,163,143,32,157,67,89,10,73,138,128,156,41,164,183,183,23,93,221,198,50,24,114,234,96,236,152,209,90,201,49,140,174,238,87,196,237,219,223,248,178,186,141,234,193,123,150,162,160,212,126,139,154,125,
240,217,89,7,214,133,117,98,221,244,68,144,108,171,254,83,76,174,96,159,176,111,68,64,91,209,251,2,213,107,131,122,161,143,56,155,162,161,143,209,215,68,66,45,16,117,234,212,10,212,70,106,36,181,82,47,
212,96,106,177,35,156,170,220,220,233,19,144,125,202,88,164,244,240,67,247,98,241,194,59,76,167,188,20,5,19,222,136,58,40,208,71,88,88,168,211,133,195,216,104,49,139,138,151,163,55,10,138,140,136,16,182,
71,93,205,206,103,80,44,210,211,134,25,206,151,205,136,244,133,231,158,192,226,69,139,112,224,248,224,218,139,25,248,204,124,118,214,193,217,38,128,129,96,91,177,205,12,193,151,171,197,76,134,125,208,
86,104,51,122,16,29,137,19,103,190,66,31,163,175,137,132,90,48,216,73,176,168,137,212,70,106,164,17,168,193,212,98,71,184,12,85,115,78,159,198,154,181,155,181,146,62,50,134,167,227,230,235,175,215,74,
131,67,144,131,149,92,43,44,90,184,192,105,94,146,216,88,177,243,225,68,111,14,18,158,110,11,17,116,45,28,35,190,30,131,183,200,100,101,102,154,158,195,12,15,15,83,250,75,108,180,231,9,248,204,124,118,
51,176,173,216,102,70,96,159,24,29,33,57,130,182,162,247,20,178,209,60,56,122,112,230,43,244,49,250,154,104,220,161,9,70,160,38,82,27,141,64,237,165,6,59,195,165,136,207,152,52,6,185,103,140,93,43,69,
3,157,61,99,26,106,26,197,45,196,24,197,104,206,17,189,164,15,115,28,61,197,27,204,220,167,7,189,81,208,176,52,243,55,161,247,71,189,156,193,224,168,61,43,115,148,246,201,56,193,74,95,137,158,250,242,
4,124,102,62,187,89,12,183,153,210,39,162,46,206,160,173,208,102,244,224,142,72,220,153,175,56,243,49,43,184,75,19,244,64,45,164,38,26,245,81,106,47,53,216,25,186,60,231,232,113,253,11,156,125,240,97,
23,221,122,11,114,243,75,181,111,60,139,163,61,149,86,113,182,224,18,19,35,126,58,69,175,225,137,90,212,36,188,118,204,200,85,96,185,249,229,150,246,199,123,251,73,58,103,88,121,118,182,25,219,78,47,236,
19,35,87,194,185,66,175,205,184,67,252,156,249,138,232,69,205,62,220,165,9,174,160,6,82,11,141,10,56,53,151,218,235,10,93,22,56,102,68,50,202,42,140,231,124,88,188,248,118,220,189,112,33,14,28,247,252,
150,50,119,221,228,193,156,208,71,6,200,101,192,35,177,70,19,11,233,65,79,42,90,94,52,144,34,112,33,232,210,181,108,250,69,60,115,212,72,75,163,0,117,177,206,11,22,157,12,163,60,179,149,133,70,182,25,
219,78,63,189,150,174,204,235,15,109,70,207,37,21,70,211,33,235,129,190,50,208,49,114,250,150,209,92,244,122,113,151,38,56,131,218,71,13,164,22,26,133,154,75,237,117,133,238,48,226,200,241,147,218,39,
99,172,88,190,12,55,204,159,171,149,60,135,187,134,231,65,65,1,72,76,184,58,213,43,13,36,220,64,186,90,189,232,49,188,88,37,170,17,117,175,39,233,86,132,194,136,54,141,30,153,161,125,50,135,250,79,89,
16,195,65,67,121,102,171,79,109,164,237,216,68,236,27,81,208,102,104,59,174,112,135,248,209,87,6,250,123,233,91,244,49,119,48,24,83,118,212,62,106,160,25,244,106,174,238,90,157,201,203,195,167,159,173,
215,74,198,152,53,125,58,74,43,27,181,146,103,240,211,95,53,67,220,118,219,77,136,27,96,65,136,25,210,140,28,145,215,139,158,109,81,52,124,81,183,145,147,30,46,158,233,20,85,38,238,183,58,135,201,127,
175,167,199,126,34,206,103,86,219,202,2,108,59,221,23,142,40,125,98,245,223,187,28,218,204,64,1,73,127,220,177,53,143,190,50,80,86,65,250,22,125,204,29,184,75,19,28,65,205,163,246,153,129,90,75,205,213,
131,238,90,205,153,54,14,39,115,115,77,29,54,88,184,240,102,44,184,225,122,143,110,35,235,236,18,115,68,185,63,155,54,109,71,109,221,213,25,28,25,33,181,180,180,106,37,129,232,216,37,34,250,116,91,119,
79,183,238,8,51,125,88,26,238,186,243,86,173,100,14,46,214,41,242,164,149,236,3,159,217,234,66,35,219,142,109,168,7,246,9,251,70,20,180,25,93,215,181,25,220,169,164,7,250,202,64,163,10,250,22,125,204,
29,184,75,19,6,130,90,71,205,163,246,25,133,26,75,173,165,230,234,193,208,171,41,251,100,142,233,125,170,204,97,60,97,236,88,173,228,126,170,106,106,240,217,42,99,57,173,93,241,201,167,235,176,113,235,
14,140,72,189,122,206,110,222,140,9,88,181,126,3,126,253,63,47,227,227,143,215,152,122,217,13,68,151,142,133,172,84,131,249,161,93,209,173,68,123,122,231,122,51,71,153,223,149,210,71,103,87,183,250,111,
218,13,62,51,159,221,42,122,219,144,125,34,186,157,244,216,142,30,27,212,3,125,130,190,65,31,161,175,208,103,250,67,223,162,143,209,215,68,66,45,160,38,120,10,106,157,209,188,237,125,80,99,169,181,122,
241,91,185,114,165,161,113,236,176,225,99,212,195,13,102,120,227,205,247,112,46,207,115,199,172,243,10,47,224,186,121,115,148,33,99,162,58,36,108,107,107,195,197,166,38,212,213,55,160,190,177,30,13,13,
141,106,38,186,214,214,86,116,118,118,169,251,112,57,111,198,36,248,92,145,231,106,54,15,8,80,207,218,218,219,208,212,212,172,59,81,19,111,8,231,45,42,188,98,42,44,52,76,221,79,204,121,192,200,200,72,
53,249,16,119,38,112,155,85,72,72,136,211,40,250,151,191,249,3,234,107,28,159,214,226,169,187,47,61,255,44,238,89,186,72,251,198,58,76,167,250,246,251,31,57,60,230,219,199,254,99,103,240,204,242,71,13,
157,62,27,136,15,62,92,133,63,189,249,182,238,200,195,91,56,112,156,245,127,12,15,62,176,68,251,198,28,239,127,240,153,82,255,119,48,119,186,243,250,115,33,240,177,101,247,227,233,39,31,213,190,177,14,
135,237,255,251,242,43,78,237,58,54,97,24,254,254,203,47,104,165,171,161,56,183,183,183,163,182,94,241,169,198,70,53,207,122,147,226,103,45,138,95,49,226,110,109,83,126,241,115,107,219,128,194,61,16,180,
235,200,200,8,132,134,132,170,107,222,93,202,203,178,75,137,164,233,167,93,202,232,135,47,51,127,63,127,213,79,233,99,209,81,138,95,197,68,35,54,58,86,61,44,20,165,248,89,104,104,168,250,226,99,202,224,
221,251,14,32,107,164,184,29,92,174,24,147,53,9,79,44,127,72,43,25,227,15,127,124,3,101,37,250,110,63,34,134,69,188,178,174,69,61,247,111,102,248,206,183,225,31,94,123,29,179,5,167,232,116,197,165,21,
120,238,36,232,241,154,108,121,52,82,174,250,71,71,69,168,247,46,166,36,167,32,57,41,81,17,246,24,245,30,66,158,0,92,183,110,139,26,177,48,23,181,35,178,79,23,224,197,167,159,114,154,198,210,40,47,191,
242,22,74,139,93,239,40,58,87,92,137,167,30,123,212,242,84,206,219,127,249,8,175,191,253,23,204,155,105,60,159,200,96,178,79,177,171,21,143,61,130,199,30,185,95,251,198,28,20,193,215,222,126,7,99,50,92,
239,68,72,207,24,139,231,159,125,92,43,89,103,195,134,109,248,253,171,175,97,234,120,199,163,129,170,250,86,44,89,180,16,119,222,121,43,54,110,220,142,230,230,102,69,176,27,212,227,224,23,42,47,160,162,
178,82,9,134,154,21,97,237,242,42,255,186,180,253,179,23,243,61,108,87,135,78,228,225,133,167,86,152,74,193,65,91,248,240,179,85,72,142,211,127,250,217,240,76,127,97,113,49,106,106,235,180,146,49,248,
182,22,117,108,216,8,236,196,249,51,39,120,141,129,17,62,11,35,175,9,153,233,136,141,12,66,123,75,45,222,253,232,99,188,252,250,91,248,237,31,95,197,163,79,190,168,58,151,51,1,39,76,176,47,58,177,79,143,
206,121,87,43,167,52,47,135,215,142,217,77,192,9,159,89,212,149,105,122,79,111,234,237,27,189,168,73,219,92,100,222,164,13,210,22,105,147,180,77,218,40,109,149,54,75,219,165,13,211,150,189,205,191,232,
243,158,22,112,66,141,163,214,153,129,218,74,141,53,130,97,239,159,51,109,60,78,230,234,159,175,233,227,147,79,215,99,243,246,29,186,135,83,67,17,26,222,156,105,99,49,125,226,40,76,28,147,174,252,238,
218,177,57,156,20,189,123,64,207,129,18,222,188,50,198,208,30,103,199,180,42,195,108,187,34,234,217,217,150,122,110,142,18,121,216,135,208,118,244,28,230,161,45,94,178,201,81,170,141,122,147,96,123,27,
212,56,106,29,53,207,40,212,86,106,172,17,76,133,112,167,78,159,197,154,53,250,242,169,112,74,224,23,255,253,191,120,227,47,239,34,53,65,224,37,194,94,12,231,195,153,87,154,183,118,112,179,63,19,223,232,
205,24,103,148,210,178,114,156,62,155,39,116,69,95,207,104,41,54,54,22,73,137,98,46,178,109,105,181,223,37,201,125,136,122,118,182,37,219,212,21,34,71,178,180,25,218,14,109,200,29,208,230,105,251,244,
1,250,2,125,130,190,49,20,160,214,81,243,168,125,212,64,61,80,83,169,173,70,49,60,39,222,71,124,98,58,190,242,119,207,107,165,43,225,188,14,183,243,156,204,57,141,131,71,142,42,195,45,247,228,66,176,2,
231,201,57,148,100,34,160,136,240,8,117,17,50,52,52,12,161,74,57,40,40,88,221,199,202,187,5,25,169,48,153,60,23,55,233,64,92,224,228,144,231,124,97,209,85,67,181,220,252,50,204,187,102,182,186,226,207,
191,139,255,31,23,96,56,87,216,166,12,175,184,200,83,223,208,168,252,170,87,255,142,234,218,90,53,146,227,16,217,74,100,67,103,225,126,227,9,99,179,48,122,228,72,117,225,148,117,51,59,213,241,95,191,252,
29,26,235,43,180,210,192,180,117,5,226,95,126,252,125,173,100,141,159,252,203,127,162,187,195,126,23,37,147,128,224,40,252,211,119,191,161,149,172,241,221,31,252,20,161,129,206,69,154,151,77,48,87,185,
25,232,151,60,241,201,133,71,94,50,144,171,10,120,153,101,219,227,213,103,204,58,152,24,31,143,132,248,56,196,198,196,42,191,162,213,197,252,208,144,16,117,237,135,27,6,184,175,190,173,173,21,21,149,85,
216,119,240,208,85,186,64,159,28,61,114,132,250,119,112,65,147,251,216,57,200,228,255,199,5,202,78,197,255,120,187,81,103,103,135,226,79,202,47,229,239,226,98,105,115,75,179,58,173,197,186,13,198,244,
137,43,168,11,215,204,156,129,201,19,199,171,73,184,28,249,37,119,237,212,86,27,79,83,98,90,196,139,42,234,240,199,223,254,183,86,250,27,171,86,109,196,209,19,39,113,44,251,56,166,140,19,51,220,182,10,
175,252,103,62,6,70,59,9,138,161,113,103,8,211,112,242,215,157,119,222,162,253,148,126,232,12,91,118,124,142,96,255,191,237,59,61,121,182,24,43,30,121,24,75,151,26,91,204,248,228,147,181,234,214,167,138,
11,149,40,81,34,162,146,210,50,204,113,177,75,193,25,116,42,158,194,203,72,79,199,232,81,35,48,42,99,4,238,190,251,54,237,79,245,241,243,95,252,26,173,77,206,111,158,201,24,57,22,207,62,45,102,129,237,
251,255,239,103,8,14,240,220,30,94,145,116,116,7,225,167,255,252,61,173,100,141,87,94,125,11,197,133,206,35,177,176,200,120,124,251,155,95,209,74,250,96,132,87,80,92,132,243,5,69,40,46,45,85,130,136,6,
75,194,125,224,216,25,12,79,31,134,225,195,210,212,155,243,147,18,18,112,239,189,119,105,127,170,143,207,62,219,128,215,149,72,117,242,216,191,157,88,237,232,9,194,173,55,221,104,42,248,88,183,110,43,
154,154,155,213,95,220,33,83,163,4,72,85,213,53,40,171,168,184,234,218,188,193,226,196,153,66,76,159,58,13,51,166,76,198,146,37,119,104,223,254,141,231,94,250,26,70,164,234,203,44,121,57,166,69,156,111,
205,39,30,94,134,229,143,47,83,69,237,130,242,118,61,154,157,173,12,7,78,27,158,211,113,23,197,21,245,184,233,250,235,144,126,89,182,54,17,11,113,228,245,55,223,195,155,239,190,255,87,103,8,12,141,193,
247,255,241,107,234,103,179,176,29,25,185,51,1,252,233,188,179,56,149,123,6,215,76,181,182,183,158,253,52,98,248,112,76,28,63,22,89,153,99,176,68,71,14,135,127,254,217,47,208,219,233,248,226,226,236,211,
133,234,13,54,119,223,109,60,31,196,64,124,253,219,63,64,108,132,248,252,28,158,160,190,185,11,255,245,243,31,107,37,107,172,89,179,9,175,188,241,22,166,142,119,28,252,248,5,69,226,255,125,239,155,90,
201,49,171,86,111,66,94,254,57,228,40,195,243,162,146,18,203,17,42,167,66,38,77,24,135,241,89,99,21,241,30,166,70,214,86,125,233,167,255,246,223,232,106,107,80,63,51,248,88,174,232,201,10,147,219,242,
250,67,95,234,163,180,188,2,59,118,237,70,198,0,231,59,6,3,30,4,154,52,126,60,102,76,157,170,238,37,103,59,190,249,214,251,120,67,209,19,51,253,20,176,96,193,130,149,218,103,67,12,79,75,66,65,73,5,206,
230,229,99,227,214,237,216,189,119,31,70,15,79,66,122,138,227,124,219,124,248,166,150,78,180,182,119,161,254,98,43,242,139,74,145,150,236,250,216,175,89,50,50,70,225,139,47,60,137,204,204,145,127,253,
37,138,138,242,74,28,62,122,12,195,82,46,205,11,167,165,141,192,172,153,83,213,207,102,225,243,141,25,51,10,51,103,76,133,127,175,191,58,53,178,229,243,189,72,77,50,254,118,238,131,253,20,21,17,130,246,
214,38,172,90,191,21,7,14,29,69,113,113,57,106,148,40,133,255,214,64,172,219,176,25,129,254,142,223,237,65,193,225,202,208,112,130,176,246,252,248,211,53,136,10,15,209,74,246,162,174,177,25,75,238,22,
115,155,83,145,226,15,229,21,23,16,22,226,56,119,72,91,71,23,110,191,117,224,83,128,27,55,110,195,214,237,187,241,198,59,239,97,227,150,109,136,143,14,86,251,158,54,96,133,163,167,242,213,11,125,167,43,
17,228,131,15,44,86,237,70,68,223,159,57,147,143,139,141,151,70,124,149,213,245,184,229,198,27,144,149,229,250,118,40,61,244,249,59,127,77,159,54,25,231,242,11,209,222,230,56,48,177,202,225,147,121,202,
168,12,184,216,220,134,138,170,122,156,47,46,115,168,133,252,62,88,137,89,214,110,218,174,140,144,74,20,127,44,85,94,182,103,116,37,187,26,8,211,34,78,14,103,231,34,33,58,4,49,145,161,3,26,10,223,174,
205,173,157,136,140,138,195,136,17,163,177,64,137,138,103,207,156,161,26,195,180,201,147,212,183,209,231,251,14,33,33,214,61,11,158,209,177,241,152,115,205,76,173,36,22,26,219,246,207,247,40,226,19,172,
46,214,204,187,102,22,38,79,22,183,243,134,198,87,89,89,13,255,128,0,116,117,56,62,206,207,169,34,248,7,41,47,198,110,92,80,28,161,168,172,82,49,160,114,100,12,208,31,195,82,226,17,26,228,143,13,219,118,
34,247,76,30,78,159,206,67,229,133,106,148,43,47,164,203,157,242,131,143,87,35,82,169,151,35,82,82,135,225,241,199,244,93,240,170,135,119,63,248,4,241,49,250,110,153,241,54,42,171,27,112,255,189,139,181,
146,53,216,7,185,74,228,220,222,214,172,125,115,53,213,117,77,88,114,215,223,134,226,140,56,15,31,57,142,143,148,23,225,122,69,184,15,31,59,134,172,17,41,106,95,15,4,125,178,182,190,9,45,109,93,232,236,
241,67,163,34,58,103,207,151,56,13,166,70,141,206,194,184,49,98,182,147,94,78,158,18,0,174,86,94,60,195,83,19,225,23,16,130,175,125,229,69,237,79,196,115,228,104,54,90,154,46,69,253,162,57,83,80,129,229,
15,45,83,231,189,167,78,154,132,105,138,190,205,156,58,69,173,83,85,237,69,228,21,148,40,109,92,124,149,79,82,51,169,157,173,205,141,170,150,14,228,179,122,176,36,226,142,254,209,163,167,206,43,194,29,
139,91,111,188,17,55,204,159,143,47,190,248,36,102,207,154,134,241,227,179,144,165,189,197,249,107,194,132,177,168,174,170,193,38,37,122,176,26,45,12,68,98,98,138,26,213,186,139,170,170,90,236,218,127,
4,201,137,137,152,53,125,154,176,40,162,15,182,209,197,198,139,248,108,195,150,171,156,140,206,200,151,227,253,75,238,198,204,105,211,240,229,47,61,135,232,136,40,213,136,38,142,31,135,182,206,30,148,
87,214,170,6,148,146,120,229,48,146,253,150,24,23,133,158,238,246,75,209,64,81,17,114,114,206,32,255,92,33,78,158,58,141,253,135,14,42,209,191,99,167,206,202,26,143,73,147,196,76,153,81,132,118,239,63,
112,213,51,218,133,146,138,106,36,42,193,194,229,47,65,43,148,150,148,163,170,210,241,110,145,188,130,98,244,116,245,170,162,180,110,227,102,236,216,189,7,187,148,81,112,106,98,164,218,167,3,249,228,241,
220,2,4,4,133,34,41,57,13,55,94,123,45,230,95,115,141,42,56,180,153,176,144,48,76,154,48,30,185,121,133,56,122,226,106,33,97,132,185,120,209,29,66,15,147,245,81,162,212,149,107,64,12,60,24,133,207,156,
49,69,251,19,241,156,56,153,139,134,122,241,199,238,185,45,116,209,109,183,224,137,229,203,254,170,107,212,56,106,29,53,239,246,91,111,66,100,88,36,70,141,200,64,169,98,43,167,206,20,12,56,178,54,43,224,
196,146,136,95,14,69,165,77,137,6,51,50,70,227,14,229,193,191,252,165,231,49,67,233,20,87,194,86,95,215,136,186,250,122,132,6,139,77,63,201,185,96,70,253,83,167,184,111,181,154,70,23,25,30,137,41,147,
38,98,209,34,227,11,164,122,40,42,44,69,107,91,27,252,113,229,254,224,132,132,100,220,117,251,109,234,188,116,159,128,240,247,113,227,198,168,117,190,238,218,57,184,123,209,237,202,72,33,10,129,193,161,
74,4,215,168,70,3,121,5,165,87,188,48,57,29,20,173,68,3,93,157,109,74,95,84,163,182,166,210,169,128,115,62,124,254,156,107,132,189,176,24,141,237,61,112,16,195,146,197,108,87,244,52,37,21,85,152,163,216,
217,24,29,151,68,235,129,83,42,235,182,124,238,240,165,198,190,97,31,177,175,216,103,236,187,190,41,189,62,104,251,77,173,29,136,137,77,192,104,37,138,166,112,243,216,60,109,130,182,65,27,185,220,102,
24,76,5,250,7,162,185,165,5,253,179,192,82,248,199,140,30,253,215,159,23,9,109,40,36,40,4,211,149,168,245,97,157,55,191,155,37,87,25,117,170,81,191,5,177,28,8,6,171,243,148,151,162,179,246,97,61,169,133,
11,111,95,128,136,176,48,52,52,181,43,98,158,143,51,249,69,150,196,187,15,97,34,78,99,185,251,142,59,240,228,19,15,97,252,56,253,199,234,89,249,118,197,224,54,127,190,7,201,9,226,110,198,169,168,170,83,
163,141,137,19,221,155,143,99,236,216,76,245,205,235,46,216,62,173,205,173,216,182,251,192,95,167,157,42,106,154,113,215,29,183,233,138,142,248,124,28,141,220,186,224,70,101,232,22,141,145,35,70,168,109,
115,226,244,57,83,115,237,53,202,80,124,230,180,169,194,68,60,251,196,165,109,168,233,202,144,218,142,148,148,87,99,218,228,41,138,16,138,73,37,145,151,119,30,199,78,156,68,82,188,241,155,146,142,230,
228,35,54,46,17,11,148,168,246,166,235,174,197,11,207,173,80,251,158,54,224,10,218,89,79,87,15,14,30,83,70,120,218,84,26,167,9,24,40,184,43,64,33,244,29,61,207,103,149,179,103,243,113,92,105,215,254,47,
60,43,156,60,91,132,123,238,186,203,208,238,47,106,227,245,202,203,52,146,193,85,80,160,210,230,230,78,118,94,142,48,17,111,110,237,194,23,94,120,82,43,25,131,14,192,136,124,163,192,105,149,202,154,6,
204,153,53,75,137,58,220,111,32,238,134,145,83,104,112,8,106,27,154,208,227,23,172,56,233,117,184,235,78,99,219,6,9,23,164,102,76,159,172,14,241,98,163,98,208,162,244,217,201,51,231,12,205,71,83,92,142,
231,156,69,103,71,151,58,100,180,10,167,5,142,101,159,112,203,116,154,39,40,41,175,82,167,35,68,140,248,152,140,106,253,150,173,24,153,230,120,36,52,16,204,97,51,38,115,172,58,172,255,226,11,79,169,125,
236,104,209,218,25,124,49,251,195,79,121,201,55,32,36,52,28,183,45,184,9,139,23,95,189,21,206,142,156,83,162,94,218,153,149,77,2,151,195,209,14,243,201,152,93,27,98,255,172,89,183,73,25,249,152,218,28,
120,5,194,68,60,55,175,64,157,90,48,251,86,165,136,243,64,76,128,159,152,84,155,213,74,196,200,197,198,49,110,24,6,14,6,227,198,142,193,13,215,205,195,205,55,94,43,36,114,161,195,206,155,59,91,157,110,
225,226,203,206,253,135,117,11,105,120,72,32,86,109,216,138,236,236,83,184,80,81,133,105,83,205,239,57,222,167,252,187,209,225,238,185,201,197,19,176,205,66,149,54,156,53,115,154,246,141,113,222,124,235,
3,188,253,238,135,88,183,105,11,178,12,236,80,160,144,100,101,77,80,163,229,199,30,125,64,200,232,136,182,69,27,163,173,209,230,124,133,194,162,18,28,81,68,92,212,104,63,57,101,152,122,225,131,217,105,
38,222,98,207,163,249,34,214,130,132,137,184,250,48,126,65,234,100,190,25,216,24,157,237,157,216,177,231,160,144,157,10,23,91,218,241,173,175,125,73,43,73,28,193,118,191,225,186,185,168,170,172,193,246,
61,7,116,11,57,135,165,220,134,184,102,243,118,172,219,176,69,25,174,158,83,255,142,178,210,10,67,134,205,29,62,238,220,250,229,9,252,2,130,113,237,188,107,180,146,107,184,152,123,236,248,73,124,186,106,
45,254,239,229,215,212,211,139,163,210,19,12,13,245,41,224,11,111,189,5,223,250,250,151,76,11,201,80,130,193,220,170,53,235,133,104,203,185,162,74,53,10,183,178,216,187,109,199,110,132,7,139,9,88,133,
137,56,225,74,61,23,72,204,26,21,35,137,214,214,118,172,219,178,19,233,169,214,230,174,58,186,122,177,228,46,49,251,119,135,2,45,77,173,234,65,35,191,94,99,39,39,41,250,156,171,231,34,219,234,77,219,213,
131,21,197,197,101,168,174,174,211,21,25,174,223,184,213,240,191,233,109,112,39,208,130,155,174,215,74,142,89,183,126,43,54,109,217,129,109,59,119,97,251,174,221,106,186,81,182,157,153,169,164,244,244,
145,152,59,123,166,20,112,3,108,216,180,205,233,214,89,61,48,135,254,3,247,44,198,253,247,221,173,125,99,156,190,29,89,220,238,43,2,161,57,76,139,138,139,209,218,102,109,162,158,55,112,223,164,12,229,
6,186,9,219,8,225,225,250,243,241,74,46,157,100,189,110,254,28,148,86,154,223,75,203,211,165,41,241,225,184,80,94,128,63,191,253,14,126,254,159,191,193,234,53,27,175,56,61,215,159,218,58,115,105,141,189,
9,103,117,96,221,217,6,108,11,182,9,219,134,109,100,229,36,46,251,136,125,37,122,223,182,175,99,85,19,168,73,212,38,106,148,21,168,145,212,74,81,8,141,196,57,165,210,235,23,136,107,102,153,187,28,148,
48,178,104,107,105,83,19,243,68,71,152,191,193,221,63,48,68,221,145,33,209,15,23,91,152,174,250,243,189,7,175,56,128,197,35,215,65,193,97,234,129,45,158,214,108,108,110,71,69,85,173,122,42,141,167,118,
7,138,36,185,103,153,135,148,214,111,221,169,222,152,212,80,127,81,141,208,47,143,28,41,112,187,246,238,87,127,214,206,20,151,85,169,11,197,253,235,118,42,231,140,122,248,102,237,134,205,136,143,10,118,
88,79,78,141,212,40,237,211,213,227,135,144,176,40,196,199,39,171,91,215,138,74,43,144,147,87,112,197,52,203,217,130,10,220,183,100,9,22,11,74,121,48,148,248,124,231,94,4,248,153,79,229,235,31,24,140,
59,110,185,25,183,223,110,237,34,231,173,59,118,34,194,218,128,224,10,132,138,56,225,1,147,0,69,200,173,12,243,50,51,71,161,85,17,242,117,202,208,211,236,150,160,144,208,8,220,116,195,181,90,73,162,151,
9,227,179,16,28,20,138,11,85,117,234,14,31,46,224,220,190,224,38,124,227,107,47,97,238,156,89,184,118,254,53,184,237,150,27,113,207,226,59,17,163,8,205,184,49,99,208,217,165,244,187,34,234,103,206,21,
95,117,90,148,47,118,110,163,90,191,133,153,45,187,208,88,223,168,30,242,160,125,240,0,198,231,123,246,154,154,78,240,38,120,160,138,123,157,185,91,135,226,125,82,169,215,129,35,71,213,195,56,188,80,161,
255,226,21,207,84,212,212,53,33,40,36,28,41,201,195,112,253,188,121,184,225,186,107,241,141,191,255,162,218,182,108,99,182,245,221,119,222,129,240,144,48,52,181,116,160,172,162,6,81,209,113,184,227,214,
91,112,143,193,36,107,146,75,236,81,130,19,30,112,51,195,193,236,51,184,127,201,98,44,181,120,13,34,237,131,107,32,33,65,226,238,0,48,157,0,203,17,217,103,10,241,220,138,39,44,223,128,78,86,254,228,223,
225,215,109,46,95,115,100,76,50,190,169,8,143,196,115,108,216,176,93,17,155,114,156,61,151,143,220,51,103,49,109,194,213,219,220,14,157,56,139,172,209,153,24,57,98,184,186,99,32,38,194,190,59,83,46,167,
161,185,251,175,117,202,59,159,143,217,83,174,158,46,225,201,201,9,227,198,98,236,152,76,12,75,77,51,117,19,186,196,60,191,248,239,223,162,169,161,82,43,25,163,55,32,28,43,255,233,31,180,146,121,214,174,
219,130,63,190,254,6,166,10,204,240,42,246,94,47,5,94,38,92,94,225,60,23,181,94,230,204,154,161,166,120,53,67,88,168,249,169,24,137,57,40,74,188,196,151,233,68,191,248,220,51,72,75,31,141,11,181,87,238,
60,161,184,81,184,235,107,202,125,70,192,201,229,117,234,47,224,108,3,182,5,219,132,109,195,54,146,2,238,121,204,106,2,53,136,90,36,2,106,35,53,82,36,194,167,83,56,148,174,174,189,168,14,11,173,194,125,
170,28,122,155,217,130,150,144,152,236,214,188,41,18,199,112,170,132,91,186,102,207,154,142,208,224,48,4,6,135,35,231,236,121,203,59,3,236,70,69,77,19,166,77,155,137,121,179,103,227,161,101,247,168,109,
98,101,154,81,98,141,236,19,57,104,108,112,158,39,127,32,152,43,232,201,39,30,214,74,214,120,255,195,207,212,237,164,34,17,30,137,147,252,194,2,97,215,133,77,26,63,14,5,165,213,90,73,63,97,161,206,47,
24,150,120,6,238,160,88,177,124,25,30,188,103,41,98,19,134,225,200,169,124,237,79,124,23,214,145,117,101,157,89,119,185,139,196,59,48,163,9,212,30,106,144,8,168,137,212,70,209,184,69,196,121,253,83,117,
141,152,173,99,204,219,112,195,181,243,213,21,124,189,48,111,121,104,168,61,243,83,251,42,92,209,159,50,113,2,150,221,187,84,93,55,241,85,88,55,214,145,117,181,186,139,65,34,22,106,2,181,65,47,212,28,
106,143,168,220,49,212,68,106,163,104,220,34,226,188,237,217,232,181,251,206,24,153,49,28,89,153,250,143,20,115,238,139,119,103,74,188,11,70,164,79,60,190,76,77,148,230,139,23,230,178,78,172,27,235,40,
163,111,239,131,154,96,100,94,156,154,67,237,17,5,53,145,218,40,26,183,136,56,201,47,16,23,109,221,126,251,205,184,81,121,35,238,63,166,207,241,163,34,163,212,11,90,37,222,9,29,131,59,52,124,13,214,73,
164,211,75,196,66,77,160,54,232,129,90,67,205,161,246,136,66,164,38,94,142,219,68,188,180,188,76,221,78,35,10,94,112,60,125,138,190,164,241,188,183,238,214,91,101,36,228,173,48,74,229,213,115,190,6,235,
36,35,112,239,133,154,64,109,208,3,181,134,154,35,10,106,33,53,209,29,184,77,196,121,89,114,97,145,184,41,21,58,199,245,243,231,225,8,175,35,115,193,40,31,20,8,95,35,56,40,72,251,228,59,248,98,157,124,
13,61,218,64,141,161,214,136,124,33,83,11,221,117,129,188,219,68,156,228,229,231,171,39,148,68,193,225,16,27,215,25,251,143,157,70,170,197,220,6,18,247,211,120,81,252,2,207,96,227,139,117,242,53,168,13,
212,8,103,80,99,68,78,199,82,3,169,133,238,194,173,34,126,238,124,161,154,25,79,20,124,51,242,18,210,188,162,11,218,55,87,147,158,150,134,136,8,153,252,202,219,169,111,112,207,165,181,131,137,47,214,201,
215,160,54,80,35,28,65,109,161,198,136,140,194,169,129,212,66,119,225,86,17,159,49,105,52,74,202,74,181,146,53,248,54,91,181,122,19,78,156,202,65,155,147,76,137,147,39,140,151,91,187,108,128,20,113,201,
96,64,109,160,70,56,130,218,66,141,161,214,136,154,69,160,6,82,11,221,133,240,19,155,253,225,125,142,254,202,127,102,79,170,177,33,121,133,215,254,67,135,177,113,235,86,196,69,6,57,188,157,131,115,89,
119,220,122,179,79,221,72,226,139,108,216,176,13,123,15,30,178,125,246,194,254,148,86,212,32,58,34,202,212,213,104,18,207,81,83,83,171,94,154,156,150,124,245,194,37,181,165,163,189,25,27,182,126,142,214,
214,86,212,214,212,163,188,236,130,37,253,162,118,245,191,128,90,36,110,141,196,201,185,243,5,232,236,50,158,244,159,149,127,235,237,15,177,122,253,6,252,233,205,183,224,223,219,134,169,227,157,59,199,
196,241,227,16,26,34,115,166,120,59,29,157,93,104,188,104,239,219,124,6,130,117,98,221,36,222,13,53,130,90,225,12,106,13,53,135,218,67,13,162,22,153,137,204,169,125,212,64,119,226,246,72,252,210,181,109,
193,186,239,32,100,67,237,218,189,95,189,48,118,251,174,93,200,26,153,130,244,20,215,55,161,51,189,231,226,133,11,177,100,137,111,92,236,234,203,28,56,116,4,97,65,230,243,58,123,43,188,141,42,34,50,198,
210,157,163,18,247,195,168,186,174,182,1,159,174,223,124,69,218,228,129,160,246,132,6,251,171,145,123,121,197,5,212,41,145,121,117,85,173,238,200,156,215,176,133,5,137,91,23,28,8,183,139,56,41,169,168,
114,121,109,155,58,236,56,112,88,189,44,182,179,173,94,77,150,228,170,129,47,39,58,38,1,211,167,76,50,61,236,145,120,142,173,219,119,161,173,213,55,119,114,244,32,16,243,231,206,214,74,18,111,165,162,
188,18,245,13,141,8,213,153,215,155,90,68,77,170,171,171,194,129,163,39,113,177,177,9,23,46,84,187,212,180,221,251,247,11,187,134,205,17,110,159,78,33,231,11,138,208,218,214,170,149,174,230,211,207,214,
99,203,142,29,120,253,157,247,212,171,171,140,114,40,59,15,215,207,155,43,116,69,89,226,62,170,107,140,39,52,179,11,190,92,55,95,66,61,119,162,104,6,181,195,40,212,40,106,21,53,139,218,229,8,106,30,181,
207,221,120,36,18,79,77,138,67,123,71,47,230,205,157,165,125,115,137,117,235,182,224,195,79,86,99,205,134,141,24,150,20,173,12,71,93,79,155,244,135,211,40,183,220,116,3,158,127,118,185,246,141,196,155,
81,71,92,135,14,35,42,194,55,211,34,112,33,63,60,36,92,142,8,109,192,164,137,227,80,90,90,129,29,123,14,26,26,245,19,106,85,128,95,15,54,110,219,137,130,130,18,53,50,239,127,49,56,47,1,247,68,206,124,
143,136,56,225,125,140,97,193,97,170,113,175,223,176,13,235,214,111,198,170,245,27,213,74,246,191,190,74,15,20,239,218,250,102,204,153,61,19,115,102,201,91,191,237,194,233,211,231,176,231,192,65,135,59,
140,236,78,81,89,37,166,77,158,140,177,99,221,183,165,76,34,142,150,230,86,192,207,15,199,78,158,81,53,202,168,152,83,187,120,151,236,150,157,251,212,93,44,117,117,141,200,26,51,74,13,86,184,166,23,25,
238,254,96,197,99,34,158,155,87,136,49,163,71,99,231,238,189,88,183,105,51,66,2,186,12,109,49,83,69,187,161,9,129,65,97,72,76,74,193,13,243,231,227,186,185,115,144,57,106,164,220,23,110,35,142,29,63,161,
222,49,104,247,123,53,29,113,190,168,12,83,38,77,192,164,73,238,57,98,45,17,11,131,191,174,142,110,229,197,59,9,227,179,178,208,214,217,141,114,101,52,117,182,160,88,233,203,43,239,139,117,6,181,172,181,
165,17,159,239,59,164,206,183,247,244,244,98,215,222,125,166,239,8,54,130,240,59,54,157,113,44,231,60,166,79,212,31,161,28,56,118,26,137,137,137,200,28,57,2,35,71,100,32,53,57,9,139,22,89,191,187,83,50,
120,252,246,119,175,162,178,194,119,243,137,147,228,212,145,120,233,11,79,107,37,137,29,89,191,126,11,42,42,171,212,156,39,249,133,69,168,174,174,198,156,233,250,95,204,70,181,206,10,30,21,113,61,28,205,
201,87,162,235,81,106,70,184,17,195,211,17,17,30,46,23,44,125,136,31,254,248,231,240,239,113,188,200,237,11,244,248,135,225,71,63,248,182,86,146,216,29,78,141,52,183,180,160,168,164,20,231,11,11,145,95,
80,128,25,19,189,39,149,178,87,136,56,167,74,40,218,179,166,79,199,168,145,25,240,247,243,147,194,237,163,188,248,119,223,68,122,114,180,86,242,77,74,43,27,241,251,255,249,133,86,146,248,18,20,244,158,
222,94,20,20,22,227,240,177,99,170,168,95,59,107,112,207,5,120,108,78,220,17,217,167,11,177,244,174,69,184,110,222,92,60,180,108,169,188,76,214,135,89,187,110,51,118,239,219,111,106,33,219,78,20,150,84,
32,42,34,18,99,179,124,239,226,139,161,14,181,233,210,37,224,211,16,26,20,130,180,212,20,236,62,112,116,80,109,218,35,251,196,29,113,228,100,62,150,221,123,143,58,125,34,23,39,125,159,250,250,70,52,55,
55,107,37,223,133,117,100,93,37,190,13,53,139,218,69,13,163,150,13,22,131,42,226,92,17,78,74,76,144,83,39,67,132,138,202,74,204,31,228,161,167,39,96,29,89,87,137,239,67,237,162,134,81,203,6,139,65,21,
241,196,132,120,41,224,67,136,178,242,114,237,147,239,51,148,234,58,212,161,134,81,203,6,139,65,21,113,70,43,92,40,144,248,62,236,231,178,10,199,151,121,248,26,172,171,180,237,161,1,251,121,48,71,94,131,
42,226,217,167,78,161,161,81,206,29,14,5,46,54,53,13,169,235,203,88,87,214,89,226,251,80,195,168,101,131,197,160,138,248,53,83,199,97,199,174,61,202,155,108,135,246,141,196,87,169,184,80,169,244,247,88,
173,228,251,176,174,172,179,196,183,161,118,81,195,168,101,131,197,160,138,56,57,147,151,135,162,18,247,92,229,47,241,30,68,93,211,103,39,134,98,157,135,26,212,46,106,216,96,50,232,34,62,111,230,68,124,
190,123,143,154,20,75,226,155,112,206,176,184,116,232,189,168,89,103,57,47,238,187,80,179,168,93,212,176,193,100,208,69,156,148,85,84,224,100,78,174,86,146,248,26,45,173,173,168,169,173,213,74,67,7,214,
153,117,151,248,38,212,44,106,215,96,227,21,34,206,99,171,123,14,28,192,103,171,54,104,223,72,124,9,94,107,213,213,229,123,215,177,185,130,117,102,221,37,190,7,181,138,154,53,216,71,238,137,87,136,56,
153,50,118,132,122,89,128,28,126,250,30,69,37,37,94,97,236,158,134,117,102,221,37,190,5,53,138,90,69,205,242,6,188,70,196,201,225,99,217,67,114,216,237,235,20,22,15,93,33,27,202,117,247,85,168,81,212,
42,111,97,208,19,96,93,14,111,11,63,145,123,14,97,193,161,50,9,150,143,176,74,25,118,182,183,212,105,165,161,71,124,76,4,154,154,58,48,110,220,24,237,27,137,157,97,20,190,102,195,38,140,31,157,166,125,
51,248,120,85,36,78,152,218,49,239,252,121,173,36,177,59,69,165,114,155,157,108,3,223,129,218,68,141,242,38,188,78,196,57,143,184,125,231,46,172,91,191,85,251,70,98,87,24,181,48,239,242,80,135,109,32,
215,122,236,15,53,137,218,228,109,235,59,94,39,226,100,252,232,97,56,114,236,184,52,124,155,211,211,211,131,226,82,57,39,204,54,96,91,72,236,11,181,136,154,68,109,242,54,188,82,196,9,47,211,149,121,85,
236,13,251,175,182,174,65,43,13,93,216,6,210,150,237,13,251,143,154,228,141,120,173,136,207,156,60,6,59,247,238,147,209,184,141,41,40,42,198,117,179,135,222,214,194,254,176,13,216,22,18,123,66,13,162,
22,81,147,188,17,175,21,113,146,123,250,140,50,20,149,139,66,118,229,124,97,145,246,73,34,219,194,190,80,131,168,69,222,138,87,139,56,115,18,108,253,124,23,54,108,144,139,156,118,99,205,154,77,40,149,
23,35,252,21,182,5,219,68,98,47,168,61,212,160,193,206,143,226,12,175,22,113,146,57,60,17,199,79,230,104,37,137,93,96,146,252,153,147,228,69,193,125,176,45,228,149,109,246,131,218,67,13,242,102,188,94,
196,201,238,125,7,240,241,39,235,180,146,196,14,228,23,120,215,94,90,111,64,182,137,189,160,230,80,123,188,29,91,136,248,244,137,163,176,115,207,94,173,36,241,118,54,110,220,134,194,98,185,144,215,31,
182,9,219,70,98,15,168,57,212,30,111,199,22,34,78,78,230,228,224,229,87,222,208,74,18,111,166,190,225,34,106,106,135,238,81,123,71,176,77,216,54,18,239,135,90,67,205,177,3,182,17,241,249,179,38,97,227,
214,237,88,187,118,139,246,141,196,91,41,40,42,194,188,25,19,180,146,164,15,182,9,219,70,226,221,80,99,168,53,212,28,59,96,27,17,39,147,178,134,99,219,206,93,114,239,184,23,195,190,57,119,190,64,43,73,
250,195,182,145,246,235,189,176,111,168,49,212,26,187,96,43,17,39,199,78,156,192,217,115,249,90,73,226,109,52,183,180,160,226,130,188,8,193,17,108,27,182,145,196,59,161,182,80,99,236,132,223,202,149,43,
123,181,207,182,225,120,238,121,44,127,248,33,60,112,255,98,237,27,239,129,111,114,58,105,117,77,45,234,234,235,213,227,186,245,13,13,104,81,190,235,232,232,68,123,71,7,122,122,123,224,239,231,135,128,
128,64,4,5,5,34,36,56,4,97,97,161,136,12,143,64,100,100,4,98,162,99,16,29,29,137,168,136,72,181,124,219,109,55,106,127,187,247,243,219,223,189,138,202,10,185,11,195,25,201,169,35,241,210,23,158,214,74,
222,15,109,186,169,169,25,23,155,155,208,216,216,164,216,116,131,90,110,106,105,70,107,107,155,98,211,237,232,236,236,66,119,119,151,98,219,189,138,109,251,43,54,29,140,224,224,32,132,135,135,35,54,38,
70,177,233,104,196,197,198,34,49,33,30,17,202,119,222,104,211,31,126,180,26,111,190,251,30,166,77,24,173,125,99,15,108,41,226,164,188,250,34,238,95,178,4,139,22,45,208,190,241,44,125,98,93,87,223,128,
170,234,42,229,87,141,154,44,158,162,221,222,222,129,217,83,199,106,63,105,142,61,135,115,84,129,15,11,13,69,82,98,60,146,18,18,145,156,148,164,124,78,68,116,84,164,82,239,91,180,159,244,46,190,249,157,
31,34,58,204,118,3,60,143,210,216,218,131,95,252,235,143,180,146,119,177,126,253,86,52,94,108,82,236,185,26,149,85,138,93,215,84,43,159,107,209,218,214,166,10,245,181,179,172,29,122,57,148,125,22,33,33,
193,170,168,39,196,43,118,157,152,160,252,74,82,4,62,102,80,197,125,253,250,109,248,104,213,42,164,37,70,105,223,216,7,219,138,56,233,245,15,195,141,215,93,235,145,142,167,104,51,234,168,168,172,66,97,
113,17,138,74,74,209,160,68,216,109,237,237,30,77,77,185,255,104,46,34,34,34,84,227,31,150,150,138,140,244,116,196,199,198,169,145,252,96,71,55,76,213,249,242,107,175,99,234,120,121,161,135,51,178,79,
23,226,249,167,86,224,206,65,126,17,247,217,116,109,125,157,122,180,188,172,188,66,13,70,154,155,155,49,215,131,11,211,123,14,159,66,104,72,8,98,148,136,125,196,240,116,140,204,24,129,212,228,36,143,217,
52,219,129,183,214,251,245,216,243,82,107,91,139,248,62,69,208,238,185,107,17,190,248,162,123,134,166,170,145,183,181,163,160,168,16,167,207,230,161,180,172,28,211,39,122,223,80,235,88,206,121,53,170,
201,80,29,96,184,26,181,51,218,241,180,168,255,233,181,119,240,151,15,63,242,186,124,203,222,6,69,235,145,7,238,199,51,79,61,170,125,227,25,104,207,28,37,50,186,230,181,113,197,74,32,194,209,163,183,218,
116,250,176,52,140,31,155,133,81,35,70,42,35,210,16,183,217,243,255,253,254,85,124,186,118,189,109,119,84,217,90,196,9,59,251,241,135,30,196,178,7,151,106,223,88,103,211,166,29,184,160,12,37,143,101,95,
90,68,157,97,179,227,227,71,79,157,71,90,106,146,18,213,100,96,244,200,17,202,80,53,14,1,1,254,110,23,245,239,255,240,103,8,246,239,212,74,18,103,116,244,4,225,167,63,250,158,86,114,15,20,237,238,238,
30,212,41,145,54,19,112,21,149,20,163,188,162,74,177,103,123,205,249,30,61,149,143,177,99,50,49,125,234,20,164,36,37,225,246,219,111,210,254,196,58,239,127,240,25,222,122,239,3,175,124,145,233,197,171,
238,216,52,67,106,82,28,246,30,60,142,176,144,80,100,101,89,235,8,138,247,166,45,59,176,126,203,54,245,180,86,102,70,146,250,247,219,13,62,115,100,88,48,186,59,219,80,93,125,1,235,183,126,174,68,95,53,
56,155,151,143,202,11,53,24,55,78,252,75,137,130,193,189,181,73,241,209,218,55,18,103,156,62,87,132,248,152,56,183,220,37,187,106,245,38,108,84,108,248,192,145,163,216,250,249,78,248,247,180,170,182,64,
155,176,171,61,7,7,2,171,55,110,67,81,105,25,42,202,43,81,87,219,96,185,237,214,173,219,130,247,63,89,133,137,89,233,218,55,246,196,246,34,78,120,25,237,241,156,179,8,10,8,50,213,177,20,160,205,138,208,
173,90,183,30,65,126,29,136,137,12,69,70,90,146,246,167,246,39,57,33,6,33,129,126,104,105,110,196,135,171,214,99,203,182,157,200,61,125,86,21,244,178,178,10,33,66,178,123,239,1,28,56,124,196,167,218,205,
157,228,21,148,32,115,212,72,76,155,106,125,234,137,246,123,244,216,73,124,186,122,45,94,121,237,45,108,222,190,3,9,209,33,106,159,179,239,125,5,218,22,125,179,233,98,29,182,239,62,128,234,170,90,212,
215,153,19,115,6,108,171,214,111,64,122,178,253,131,14,159,16,113,18,30,18,136,226,242,42,37,226,232,214,221,169,52,254,253,7,143,168,183,87,239,217,127,0,211,38,120,127,158,4,171,208,17,98,163,194,208,
165,68,102,171,214,111,69,105,121,5,74,138,203,80,91,83,143,49,99,204,213,95,21,145,236,19,200,72,141,213,190,145,184,130,253,80,219,208,172,216,107,143,233,151,232,134,13,219,176,113,243,118,53,218,222,
166,252,74,73,136,80,251,118,40,188,72,227,148,192,109,195,182,93,234,98,108,83,83,11,46,84,84,25,242,251,93,251,246,35,60,200,55,174,204,243,25,17,39,123,15,29,87,183,46,53,93,108,113,217,161,235,214,
111,193,190,3,135,176,118,195,102,140,207,76,27,146,17,100,122,106,34,34,195,131,209,220,84,143,205,159,239,69,126,126,1,234,107,27,13,79,183,156,63,95,116,41,250,139,141,212,190,145,232,225,236,249,98,
204,156,54,213,176,136,175,94,189,9,159,172,90,131,117,155,182,32,52,176,91,237,67,246,229,80,131,62,27,165,212,125,157,34,202,189,189,61,104,109,105,115,57,165,74,1,63,153,147,171,158,202,28,238,35,62,
239,83,34,206,78,217,185,255,48,210,82,83,49,115,198,84,237,219,43,97,39,30,80,162,239,79,215,172,67,76,68,128,98,252,9,218,159,12,109,18,227,162,208,217,209,138,13,219,119,33,255,92,33,234,235,47,234,
22,243,67,135,143,161,167,179,73,43,73,244,194,151,94,100,84,44,38,79,26,175,125,227,28,206,117,127,248,201,42,172,221,180,9,113,145,193,106,159,73,24,140,36,160,183,167,3,187,247,31,69,91,107,187,211,
168,124,219,142,221,88,189,97,35,230,78,215,215,230,118,192,167,68,156,12,75,73,192,206,125,135,208,219,221,139,41,83,174,60,152,64,1,207,61,123,86,21,240,9,153,222,119,107,181,55,192,57,84,46,130,109,
218,190,27,133,133,37,104,108,184,232,52,186,81,167,82,78,156,82,218,187,93,251,70,98,132,218,198,86,116,182,119,58,141,198,185,0,247,241,103,107,177,70,17,159,248,232,96,159,154,231,22,9,167,146,54,237,
216,131,232,232,40,92,108,104,186,170,77,223,249,203,71,248,120,245,26,175,189,43,211,44,62,39,226,36,37,49,22,187,148,136,60,208,47,0,19,38,92,58,57,185,121,243,14,236,57,112,8,155,183,237,192,53,211,
198,169,223,73,28,67,161,232,108,111,193,182,221,251,81,161,68,54,13,245,141,138,83,92,61,103,126,46,191,16,219,62,255,28,113,209,17,218,55,18,35,156,83,94,148,83,39,79,198,152,1,68,124,211,166,237,88,
183,113,171,26,57,70,133,249,75,241,214,1,119,178,108,217,185,15,126,254,254,87,188,28,63,254,120,13,62,248,108,21,38,143,29,161,150,125,9,159,20,113,146,24,23,173,206,145,7,5,6,161,184,168,76,157,3,219,
123,224,160,60,136,98,16,14,249,91,154,26,148,182,60,134,230,166,86,92,184,112,229,80,245,200,145,227,232,106,107,212,74,18,163,240,229,23,29,19,143,73,151,77,169,112,116,179,255,192,17,117,247,68,64,
111,187,92,107,48,8,167,85,119,43,237,215,217,217,169,140,16,129,156,220,51,248,240,211,213,24,59,50,85,251,9,223,194,103,69,156,196,69,135,99,239,225,108,212,212,214,32,16,29,67,114,241,82,20,209,17,
161,234,62,221,22,38,60,106,109,199,184,113,151,134,164,31,126,186,70,78,165,88,132,187,84,110,186,225,90,245,243,234,213,27,149,128,99,55,214,111,222,98,171,116,168,222,6,125,221,31,221,200,47,42,197,
254,195,71,49,106,88,188,246,39,190,135,79,139,56,225,190,82,118,166,196,58,140,112,2,253,123,176,97,219,78,84,94,168,86,15,92,108,223,181,75,78,165,88,132,83,42,225,33,97,88,183,97,11,62,89,179,6,195,
146,162,125,102,231,196,96,67,223,167,6,248,50,62,47,226,18,241,36,39,196,98,203,206,189,40,45,43,67,249,133,74,41,56,22,225,233,205,18,165,45,15,30,57,138,217,83,172,101,191,148,12,61,108,159,59,69,34,
145,72,134,50,50,241,179,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,
72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,
36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,
54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,
70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,138,184,68,34,145,216,24,41,226,18,137,68,98,99,164,136,75,36,18,137,141,145,34,46,145,72,36,54,70,
138,184,68,34,145,216,24,41,226,18,137,68,98,91,128,255,15,158,20,102,170,213,49,132,28,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GUI::hands2_png = (const char*) resource_GUI_hands2_png;
const int GUI::hands2_pngSize = 21115;

// JUCER_RESOURCE: hands2_png2, 19528, "../../../../Pictures/hands/hands2.png"
static const unsigned char resource_GUI_hands2_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,113,0,0,1,0,8,6,0,0,0,69,249,70,192,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,
72,89,115,0,0,14,196,0,0,14,196,1,149,43,14,27,0,0,75,234,73,68,65,84,120,94,237,157,7,152,21,215,149,231,79,231,156,115,110,154,212,77,3,77,144,0,33,33,35,217,66,66,1,37,36,20,8,18,72,182,229,89,239,
122,103,102,103,60,179,94,15,158,177,103,236,153,89,175,119,61,99,217,150,132,44,64,17,37,43,129,36,43,88,25,17,155,166,187,105,232,156,115,162,115,220,250,23,213,82,211,188,80,183,234,214,123,85,213,
247,247,125,124,188,251,186,133,234,222,115,206,191,110,60,215,103,247,238,221,147,36,16,8,4,2,75,226,171,252,45,16,8,4,2,11,34,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,
23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,
16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,248,173,95,191,126,183,242,89,224,33,42,235,219,104,110,
206,2,202,201,153,79,89,89,57,148,145,145,77,73,201,105,228,235,31,76,21,53,13,116,170,244,28,101,164,36,40,191,45,16,152,135,207,143,151,80,80,112,56,45,88,144,71,243,231,47,164,204,204,57,148,146,154,
65,49,177,9,52,62,225,75,197,103,43,41,38,50,76,249,109,129,39,16,183,221,123,152,242,218,22,186,239,174,205,116,99,91,190,242,205,197,188,155,82,70,197,165,103,232,221,15,63,164,203,151,46,84,190,21,
8,188,207,145,83,101,116,221,250,245,148,159,151,75,215,53,57,246,205,183,18,138,233,153,3,47,210,188,204,36,229,27,129,209,136,233,20,15,147,159,155,231,84,192,1,130,99,241,162,60,90,185,108,153,242,
141,64,96,14,224,147,240,77,103,2,14,224,219,240,113,129,231,16,34,238,97,146,147,18,149,79,206,249,86,227,2,138,12,143,80,74,2,129,57,128,79,194,55,221,161,198,199,5,252,16,34,238,97,226,98,98,148,79,
174,9,8,240,87,62,9,4,230,64,173,79,170,245,113,1,31,132,136,123,144,163,69,231,40,56,36,88,41,185,38,32,32,64,249,36,16,152,3,181,62,9,31,135,175,11,60,131,16,113,15,18,17,30,78,190,62,62,74,201,53,254,
254,162,39,46,48,23,106,125,18,62,14,95,23,120,6,33,226,30,132,197,177,253,252,252,148,79,2,129,57,96,241,73,33,226,158,67,136,184,7,9,11,13,81,62,185,199,223,95,136,184,192,92,176,248,36,139,175,11,244,
33,68,220,131,132,134,134,170,90,221,7,254,162,39,46,48,25,106,125,18,62,14,95,23,120,6,33,226,30,36,36,68,125,239,68,76,167,8,204,6,139,79,178,248,186,64,31,66,196,61,72,72,176,186,157,41,64,28,163,21,
152,13,22,159,100,241,117,129,62,132,136,123,144,224,160,32,229,147,123,252,124,69,79,92,96,46,88,124,146,197,215,5,250,152,85,34,254,197,241,18,106,238,56,79,190,129,17,20,30,149,72,190,1,225,116,182,
186,73,249,169,241,4,6,6,42,159,220,163,114,39,162,64,224,49,88,124,146,197,215,245,130,24,70,44,203,49,45,197,54,98,28,177,62,91,152,53,34,94,213,208,78,15,110,189,143,54,223,122,43,253,56,253,126,250,
235,184,59,104,237,234,85,180,227,222,123,169,161,181,87,249,45,99,97,57,192,227,235,43,6,73,2,115,193,226,147,158,58,172,134,216,69,12,35,150,17,211,136,109,196,56,98,29,49,63,27,152,21,74,241,249,241,
82,218,188,233,22,218,50,180,230,162,221,33,248,124,125,75,46,229,46,152,175,124,99,28,72,225,25,200,224,216,19,19,98,86,92,96,46,88,124,18,190,14,159,55,26,196,46,98,120,102,92,35,214,17,243,136,125,
187,51,43,68,60,36,56,136,130,93,44,180,68,132,27,159,255,216,71,26,139,178,236,179,157,152,152,80,62,9,4,230,128,197,39,225,235,240,121,163,113,21,187,136,121,196,190,221,153,29,34,30,18,236,114,62,15,
219,161,60,241,198,246,241,81,223,220,66,196,5,102,131,197,39,89,124,93,43,136,89,87,91,25,17,243,136,125,187,51,75,122,226,48,164,115,21,199,74,186,191,159,241,77,225,235,171,190,103,50,54,62,170,124,
50,158,47,78,148,82,81,89,53,181,116,246,211,200,68,0,77,248,134,200,139,67,71,78,157,85,126,67,224,109,96,11,216,4,182,129,141,96,43,216,12,182,243,20,44,62,201,226,235,90,65,204,186,222,5,227,51,43,
182,58,206,10,17,15,14,114,109,72,188,205,61,177,144,200,210,147,25,29,29,83,62,25,207,194,249,243,232,225,7,118,208,163,151,253,21,253,243,188,93,244,143,217,59,228,197,161,7,238,187,135,186,250,198,
60,50,183,41,112,12,218,30,54,128,45,96,19,216,6,54,130,173,96,51,216,206,83,176,248,164,39,70,146,136,89,119,135,138,220,197,190,29,152,29,61,241,208,144,139,22,62,102,34,247,196,13,206,85,50,57,57,73,
99,99,227,74,201,61,131,67,67,202,39,227,73,74,72,160,27,90,46,190,141,5,237,117,215,192,42,186,229,134,13,180,96,222,92,229,91,129,167,65,219,195,6,176,197,76,31,134,205,96,59,79,193,226,147,240,117,
248,188,145,32,102,93,245,196,209,94,136,125,187,51,139,166,83,156,3,99,135,134,24,159,235,97,120,88,125,16,156,239,235,87,62,25,79,172,139,36,254,104,27,150,93,53,2,190,160,237,103,138,247,116,92,217,
142,55,44,62,201,226,235,90,65,204,186,106,27,32,166,83,108,130,171,157,41,83,132,133,25,187,67,229,138,21,139,168,163,171,91,41,185,167,179,171,83,249,100,44,24,174,71,71,71,41,37,129,213,128,237,60,
53,221,197,226,147,240,117,248,188,145,168,137,89,53,177,111,117,102,133,136,255,40,245,94,229,147,115,60,145,58,243,248,201,66,122,114,226,3,122,35,246,20,253,41,213,249,162,225,43,145,199,169,166,182,
78,41,25,11,156,60,52,216,117,221,61,177,211,64,224,24,119,109,15,219,121,74,168,224,147,240,77,103,192,167,225,219,240,113,248,186,209,168,137,217,224,32,207,157,28,245,22,62,187,119,239,182,253,169,
146,184,196,12,250,126,248,77,74,201,49,255,179,98,15,5,248,140,40,37,227,64,175,41,52,36,88,10,188,16,121,81,6,78,22,16,16,40,207,239,77,140,79,80,95,127,63,181,119,116,80,65,222,28,229,191,48,150,178,
170,70,122,240,254,251,104,67,115,174,242,205,165,252,85,241,163,20,17,98,252,110,3,193,165,156,31,156,164,255,157,255,136,82,186,148,119,146,207,208,147,79,63,67,11,231,164,42,223,24,75,97,105,21,197,
199,197,81,184,212,11,246,245,243,149,231,190,71,71,71,104,104,120,132,6,7,7,105,104,104,144,6,6,135,12,239,133,131,209,201,64,250,217,220,157,74,201,49,191,238,123,147,58,90,61,211,33,242,22,179,162,
139,21,164,34,143,67,168,155,85,110,94,192,185,11,242,114,164,160,75,161,204,228,104,74,140,9,165,152,112,127,138,8,246,161,168,48,63,74,75,140,244,152,128,131,232,168,40,151,2,126,1,113,122,212,123,184,
110,123,216,14,54,244,20,240,77,248,40,124,21,62,11,223,133,15,195,151,225,211,240,109,79,8,56,80,19,179,106,98,223,234,204,14,17,87,49,164,154,173,73,236,99,162,163,149,79,2,171,50,91,109,168,38,102,
213,196,190,213,177,189,136,99,250,194,12,61,113,60,71,123,207,16,5,133,198,82,92,66,58,37,165,100,83,98,114,182,252,57,34,250,66,70,197,158,254,49,42,171,106,242,216,66,21,136,83,177,187,97,92,156,30,
245,26,106,218,94,141,13,121,1,223,132,143,194,87,225,179,240,93,248,48,124,25,62,141,207,240,113,248,186,209,126,172,182,39,238,201,120,242,6,182,159,19,199,137,182,135,119,108,163,59,251,46,83,190,113,
204,94,223,143,169,178,188,88,41,241,167,180,162,65,126,14,87,91,162,166,22,59,59,187,186,232,181,131,135,104,94,102,146,92,54,146,204,236,133,180,211,247,26,165,228,152,255,86,248,107,138,137,16,219,
12,189,65,215,249,81,250,191,5,223,87,74,142,217,51,241,1,213,86,151,41,37,227,40,175,109,161,77,27,111,248,106,91,163,59,95,126,236,169,125,148,55,55,77,249,134,63,57,243,242,105,251,196,58,165,228,152,
151,194,143,202,207,177,102,249,197,231,32,236,132,237,123,226,88,142,11,240,247,191,80,112,65,80,96,0,125,89,120,70,41,241,39,53,37,217,237,158,86,252,28,127,238,30,92,77,139,243,220,205,83,235,7,47,
184,232,168,72,165,228,28,209,19,247,30,106,218,30,54,244,196,241,123,248,36,124,115,202,79,93,129,159,195,231,141,2,177,138,152,117,7,98,223,238,75,242,182,23,241,73,201,132,254,42,68,28,135,42,140,188,
77,39,33,46,78,249,164,142,152,104,227,135,200,24,142,6,5,186,207,242,54,62,174,254,164,169,128,47,106,218,30,54,244,196,194,60,171,79,178,250,60,11,136,85,53,135,208,16,251,208,0,59,99,255,158,184,100,
63,53,121,81,252,3,2,201,207,192,163,247,49,140,7,106,176,133,203,104,194,195,195,40,64,69,111,102,124,220,115,121,92,4,23,163,166,237,97,67,216,210,104,88,125,146,213,231,89,64,172,34,102,221,129,216,
247,64,70,92,175,98,123,17,7,106,38,253,177,79,219,207,160,36,88,24,234,134,135,135,43,37,117,4,123,32,15,114,84,100,36,109,104,90,168,148,28,131,185,77,79,38,227,18,92,12,218,222,213,193,48,0,27,194,
150,70,195,234,147,240,121,163,166,121,16,171,106,242,29,205,134,205,177,246,23,241,201,73,26,25,113,127,136,7,78,97,212,201,68,63,63,95,230,94,140,159,159,159,225,243,156,177,42,182,166,33,137,145,152,
78,241,30,104,123,53,137,164,212,216,82,15,240,69,248,36,11,240,121,248,190,17,32,86,213,116,186,228,216,55,56,17,151,183,177,189,136,175,94,158,71,239,127,244,9,189,16,114,196,101,143,166,181,189,157,
134,134,135,149,18,95,252,253,252,221,166,204,156,137,175,228,164,254,140,65,195,74,140,202,237,133,163,99,162,39,238,45,208,246,106,22,55,213,216,82,15,240,69,248,36,11,240,121,248,190,17,32,86,17,179,
206,64,172,35,230,17,251,208,0,59,51,43,142,221,79,113,162,184,146,162,163,35,41,44,52,84,62,246,142,149,107,244,116,186,186,187,168,177,169,217,48,99,159,169,108,164,135,182,111,117,187,162,63,29,228,
160,248,253,83,251,104,69,190,113,105,96,179,115,242,232,1,250,134,82,114,204,91,241,197,180,103,255,211,180,120,65,166,242,141,192,147,156,62,91,75,59,183,222,79,55,182,231,43,223,56,230,15,244,103,170,
174,52,110,228,118,188,184,130,190,189,99,27,221,220,185,84,249,198,61,16,210,199,247,238,167,220,28,99,82,2,28,150,70,7,216,1,131,5,87,140,18,240,194,195,177,255,254,129,1,234,238,238,165,229,249,57,
202,111,218,27,219,247,196,167,3,163,206,73,139,151,143,9,71,134,248,80,72,192,56,133,7,19,101,36,199,24,250,182,198,75,131,69,192,47,224,99,216,28,253,20,106,182,23,78,76,32,55,134,231,110,25,18,92,12,
218,30,54,112,135,26,91,234,225,130,47,178,173,16,194,231,225,251,70,129,152,69,236,34,134,17,203,136,105,196,54,98,124,182,8,56,152,85,34,14,176,191,244,232,169,179,116,228,84,25,125,113,194,184,125,
225,211,209,178,115,192,199,215,199,208,219,134,78,150,84,200,167,217,220,129,133,53,163,166,153,4,238,65,219,171,89,88,134,45,97,83,163,144,119,121,104,184,114,205,19,187,102,0,98,25,49,141,216,54,242,
188,135,25,177,189,136,99,200,53,233,23,74,153,217,11,40,127,241,10,122,104,251,54,218,181,125,171,252,247,195,59,182,82,110,222,82,202,200,154,79,97,145,9,212,208,218,171,252,87,124,209,210,27,241,245,
145,122,226,6,206,137,99,231,128,154,127,255,124,127,191,199,18,26,9,46,5,109,15,27,184,3,182,100,221,1,197,2,254,125,248,36,43,70,245,196,17,171,136,89,196,46,98,24,177,60,61,182,17,235,136,121,196,62,
52,192,206,216,94,196,147,18,19,233,39,89,219,105,167,239,181,242,21,87,119,156,95,73,183,247,174,144,255,224,40,254,61,195,107,105,151,223,55,233,127,196,223,73,27,174,93,47,189,197,249,31,95,214,226,
200,62,82,192,24,121,217,44,22,236,71,199,70,221,110,95,107,239,112,190,120,36,240,12,238,108,0,27,194,150,70,110,194,128,47,194,39,89,49,66,196,17,163,136,85,196,44,98,23,49,140,88,158,138,107,196,56,
98,29,49,143,216,135,6,216,25,219,139,56,203,92,97,132,212,147,9,15,227,239,116,172,59,83,0,226,69,75,208,168,101,126,86,18,61,245,204,243,244,198,161,183,105,119,237,62,250,101,215,171,244,196,248,123,
114,174,137,131,137,37,116,40,169,84,254,187,162,178,90,249,47,4,222,2,54,152,110,19,216,8,182,130,205,96,59,216,16,182,132,77,141,2,190,168,197,29,181,248,190,59,16,163,136,85,181,24,189,94,224,109,108,
47,226,44,61,1,28,209,101,113,14,181,104,59,18,141,125,235,198,137,56,88,52,47,157,162,195,3,136,198,250,169,183,171,153,234,106,206,81,209,169,163,244,235,223,253,158,126,247,228,31,232,209,39,246,80,
66,140,241,199,185,5,174,129,13,96,11,216,4,182,129,141,96,43,216,12,182,131,13,97,75,35,185,224,139,236,114,97,68,58,0,196,168,154,84,26,83,24,53,165,99,22,108,47,226,44,87,87,97,53,61,50,130,255,91,
59,84,195,213,111,136,25,35,23,54,93,177,170,32,151,10,114,231,208,138,252,121,202,55,2,111,3,91,192,38,176,141,55,208,122,124,93,139,239,187,3,49,202,178,219,203,238,247,108,218,94,196,3,24,111,246,136,
136,224,187,154,126,248,228,25,10,100,124,6,25,41,98,140,234,137,99,81,40,34,42,145,130,66,99,104,100,34,144,218,186,6,169,162,174,149,10,75,43,233,179,99,246,206,189,108,7,96,35,216,10,54,131,237,96,
67,216,18,54,53,106,113,94,246,69,13,254,8,223,71,12,240,132,53,70,89,53,192,106,216,191,39,206,104,192,176,80,190,211,41,88,213,87,147,10,119,38,8,23,163,68,124,249,210,37,244,87,113,119,208,223,37,111,
161,127,158,183,147,110,191,229,38,218,182,229,110,122,104,251,118,122,100,215,3,148,53,39,87,94,249,111,235,30,180,253,202,190,21,128,13,96,11,216,4,182,129,141,96,43,216,12,182,131,13,97,75,216,20,182,
53,2,248,162,22,111,132,239,243,222,101,197,26,163,172,26,96,53,108,47,226,172,189,96,222,183,222,251,251,249,82,128,138,148,153,51,65,208,104,217,210,229,14,228,192,136,143,139,85,74,23,192,208,20,119,
53,222,212,177,88,94,221,127,208,231,194,202,255,237,55,223,68,233,105,198,37,245,23,168,3,54,128,45,96,19,216,6,54,130,173,96,179,153,211,10,176,173,17,57,119,224,139,90,58,21,240,125,196,0,79,88,99,
84,211,72,216,66,216,127,58,69,69,186,202,233,132,113,222,157,226,235,171,173,39,14,124,124,248,239,19,199,130,144,218,139,117,229,19,119,6,236,214,17,176,1,27,168,157,3,134,109,89,22,253,212,162,213,
23,225,251,136,1,158,176,250,36,171,6,88,141,89,32,226,108,14,205,123,75,148,60,157,194,248,12,0,65,235,227,195,127,227,47,238,99,116,127,187,253,215,24,53,165,35,80,15,139,13,96,91,35,238,220,132,47,
170,125,145,76,7,190,207,123,58,133,53,70,181,196,159,149,176,181,136,99,46,145,181,23,140,91,82,120,94,172,138,161,220,183,26,93,231,236,118,134,47,103,231,7,113,177,108,1,46,210,208,122,31,86,27,176,
218,88,13,90,125,17,190,207,115,58,3,177,169,230,54,170,233,64,3,236,188,182,99,107,17,71,174,7,214,161,165,191,191,47,5,114,28,126,169,185,7,208,147,196,51,94,153,101,132,136,215,181,244,208,24,5,209,
164,111,8,245,15,75,229,230,110,58,94,92,174,252,212,58,224,153,241,236,168,3,234,130,58,161,110,188,97,181,1,171,141,141,134,103,12,32,54,17,163,44,64,3,180,228,125,177,10,246,22,113,105,24,202,58,148,
194,208,47,144,163,211,153,109,62,46,46,246,226,69,77,119,140,140,240,205,96,120,180,232,44,221,120,221,55,233,167,57,15,210,79,178,119,208,191,229,125,151,238,221,124,7,61,178,243,65,74,77,207,161,202,
250,54,229,55,205,11,158,17,207,138,103,198,179,163,14,168,11,234,132,186,161,142,60,97,181,1,171,141,141,134,103,12,32,54,89,167,103,160,1,118,158,22,180,189,136,179,246,196,225,32,65,65,252,174,70,227,
249,66,208,11,178,187,177,222,123,200,59,13,109,76,116,52,69,69,70,40,165,11,96,174,117,99,91,62,125,59,112,131,36,130,215,41,223,154,23,60,35,158,21,207,60,115,158,24,117,67,29,121,194,106,3,216,216,
76,153,252,120,198,0,98,147,85,196,229,158,184,16,113,107,130,155,72,88,231,196,113,139,182,154,20,173,106,81,115,35,183,51,212,92,203,197,66,128,127,32,69,70,92,44,160,174,152,74,172,196,147,180,148,
84,151,107,4,70,93,231,197,19,87,207,136,186,161,142,60,81,147,168,108,58,176,49,108,205,19,61,190,168,39,6,102,130,216,68,140,178,32,239,144,49,232,234,69,51,96,243,158,184,47,249,49,138,56,122,86,60,
243,61,104,189,65,31,65,59,49,238,254,90,46,22,34,35,195,233,134,86,245,105,101,199,198,199,105,108,140,239,156,120,134,155,125,231,227,156,235,108,4,238,158,209,93,29,89,129,13,96,11,181,192,198,176,
53,79,224,139,44,47,146,233,104,141,1,71,32,54,89,119,201,64,3,140,186,63,215,12,216,90,196,209,99,114,119,155,187,35,66,195,248,137,184,214,123,50,209,243,153,152,228,43,104,241,140,115,165,88,80,27,
31,231,119,191,38,146,246,39,39,37,40,37,199,76,168,184,79,210,219,184,123,70,212,17,117,229,5,108,192,188,184,201,121,94,28,190,168,181,55,206,243,174,88,45,177,9,13,176,194,8,79,43,182,22,113,173,135,
30,194,195,248,245,98,180,206,197,65,40,198,57,247,130,227,102,156,212,116,7,122,156,99,99,252,68,53,58,42,218,109,150,200,113,21,87,145,121,27,119,207,136,58,162,174,188,128,13,88,71,40,172,182,118,7,
124,81,235,11,150,231,124,180,214,216,212,170,5,86,192,214,34,174,117,147,127,120,24,191,36,88,90,167,7,16,48,195,35,124,175,69,139,139,97,21,113,244,0,249,245,196,211,82,82,220,30,52,50,98,75,35,111,
220,61,35,234,136,186,242,66,139,29,88,109,237,14,248,162,86,17,231,57,69,166,53,54,237,124,224,199,214,34,174,53,149,43,79,17,239,238,233,161,131,9,197,74,73,61,35,163,163,52,48,56,164,148,244,131,195,
14,106,143,219,79,1,177,26,227,24,128,105,169,238,133,141,247,28,188,17,168,121,70,53,117,85,11,108,192,250,114,131,173,121,30,112,129,47,194,39,89,129,239,35,6,120,161,53,54,189,149,214,217,19,248,236,
222,189,219,192,75,157,188,75,85,125,59,61,117,245,143,148,146,122,158,9,248,148,206,150,21,41,37,253,156,44,173,164,176,144,80,10,14,14,146,135,117,254,254,1,20,224,239,39,255,141,45,83,88,172,9,11,11,
145,254,150,126,71,42,227,96,66,101,117,13,77,142,246,41,255,130,126,112,137,238,206,109,219,104,83,215,82,229,27,247,60,31,252,5,149,150,156,84,74,250,192,73,59,220,125,120,215,192,229,202,55,142,249,
237,208,59,212,220,88,169,148,204,73,114,106,14,125,55,120,131,82,114,204,129,208,35,244,248,222,125,220,238,39,205,91,180,140,182,12,173,81,74,238,121,45,230,20,237,217,183,143,150,45,154,171,124,163,
31,159,128,112,202,201,206,162,201,137,73,249,2,231,129,193,1,234,239,31,148,254,30,164,97,169,60,54,54,74,163,88,132,149,254,30,27,27,163,161,161,97,234,151,126,103,89,30,191,155,231,23,44,92,66,247,
141,94,169,148,212,179,227,163,159,210,156,244,120,165,100,47,108,221,19,215,58,252,227,157,244,9,78,60,63,59,153,50,146,99,40,37,62,130,18,162,131,229,219,88,194,131,165,97,158,207,48,141,14,117,83,119,
71,19,53,214,87,80,101,69,9,85,156,43,230,42,224,32,56,24,47,9,182,228,248,106,110,89,87,75,84,100,164,170,155,207,199,39,248,110,105,52,2,53,207,136,186,162,206,188,96,181,5,108,13,155,243,4,62,9,223,
132,143,194,87,225,179,240,93,248,48,124,25,62,13,223,134,143,195,215,225,243,60,5,28,104,141,77,173,90,96,5,108,45,226,90,247,56,227,104,239,145,83,231,148,146,61,136,141,137,102,222,154,197,115,143,
56,142,130,171,217,179,63,58,106,254,233,20,53,207,136,186,242,60,254,206,106,11,216,26,54,183,19,136,73,173,41,49,120,159,119,48,19,182,22,241,193,161,33,77,243,209,88,77,231,117,64,161,166,177,147,122,
7,198,169,243,252,8,213,183,116,83,105,69,3,29,45,58,39,159,168,67,222,231,169,63,152,110,48,242,86,157,88,13,153,237,120,158,214,76,77,78,82,245,18,193,48,220,236,168,121,70,212,21,117,230,133,22,91,
104,177,185,90,224,171,240,217,233,62,12,159,134,111,195,199,225,235,240,121,248,62,98,128,7,136,73,45,59,93,160,1,208,2,187,98,235,57,113,80,219,212,73,89,153,153,20,19,21,37,167,176,148,231,165,253,
144,30,243,235,247,23,14,82,140,75,129,137,133,155,190,190,126,106,104,106,166,83,197,197,180,102,121,158,242,27,218,232,232,29,166,77,27,111,160,235,102,236,85,127,55,165,140,6,49,143,56,50,34,47,88,
97,245,30,251,112,241,247,208,240,16,181,182,181,211,201,162,211,180,116,97,150,242,95,232,39,50,38,153,254,50,230,54,165,164,142,255,236,127,139,218,90,106,149,146,62,210,50,230,210,195,1,238,143,212,
255,188,229,121,26,234,239,82,74,230,36,56,44,134,126,152,180,69,41,57,231,177,209,119,169,161,174,66,41,233,35,33,41,147,254,34,236,70,165,164,14,220,134,47,95,166,204,137,83,101,53,180,108,201,98,74,
76,136,167,224,160,96,57,134,112,18,18,127,203,233,42,2,3,229,24,115,228,239,175,29,60,68,113,145,250,210,89,224,69,177,52,63,159,210,82,146,229,233,42,136,58,14,242,76,223,135,142,24,26,27,191,48,31,
143,24,235,234,233,161,154,218,90,202,76,225,187,91,199,76,216,94,196,189,73,114,90,14,125,55,200,245,2,152,35,112,50,174,189,163,131,246,61,127,128,46,95,202,158,195,217,17,217,57,121,244,0,125,67,41,
169,227,87,221,127,164,238,206,38,165,164,29,244,216,30,217,245,32,221,214,179,92,249,198,57,63,169,221,71,147,99,253,74,201,156,248,248,135,209,63,100,110,83,74,206,121,53,234,4,61,250,196,147,92,22,
55,163,99,83,232,7,209,183,42,37,117,252,129,254,76,213,149,124,118,168,28,57,117,150,182,109,185,75,158,34,98,157,150,3,191,29,126,135,154,27,204,189,96,109,85,108,61,157,226,77,48,180,76,78,112,125,
58,209,25,8,18,4,11,122,28,60,248,242,100,25,69,168,88,84,156,137,150,45,101,142,8,11,13,165,16,105,4,164,134,225,225,17,229,147,121,81,251,140,168,51,234,206,3,45,182,128,205,97,123,30,192,23,181,10,
56,64,44,152,41,41,151,157,176,189,136,195,113,190,44,44,163,35,210,31,252,141,63,71,165,94,197,177,162,115,116,252,116,57,157,40,174,148,255,198,92,30,134,107,188,136,8,143,144,167,110,180,130,96,73,
212,248,18,152,73,48,118,42,104,200,204,200,107,78,28,66,166,246,138,46,108,93,51,59,106,159,17,117,230,37,226,90,108,1,155,195,246,60,128,47,106,21,112,128,88,64,76,240,2,177,138,152,157,30,195,136,105,
196,246,84,156,127,29,243,246,126,121,216,122,58,5,134,198,156,116,74,82,34,77,18,46,122,149,190,68,254,7,233,195,133,5,18,92,70,140,188,16,23,114,149,96,126,26,251,93,59,187,187,169,182,174,158,138,74,
74,52,207,139,215,183,246,208,227,107,254,86,41,105,227,23,173,47,208,96,159,254,69,161,242,218,22,218,113,239,61,151,204,85,186,227,31,106,246,146,207,248,128,82,210,14,130,235,154,171,215,81,78,118,
54,133,187,184,47,18,211,72,47,254,241,117,74,142,227,119,216,202,8,154,59,250,105,243,173,183,184,172,71,95,255,0,85,86,87,211,7,31,125,76,43,151,204,87,126,162,157,73,191,80,250,73,214,118,165,164,14,
204,69,63,245,236,115,52,47,83,255,2,107,72,120,44,253,109,226,221,74,73,27,15,125,241,11,74,79,100,59,112,54,5,98,121,201,162,69,148,153,145,78,177,209,209,95,165,164,69,28,79,197,176,212,74,23,242,187,
40,49,46,255,37,125,215,212,210,42,207,201,235,93,227,50,43,182,22,241,194,51,85,244,200,174,157,154,146,96,33,16,159,125,241,101,202,72,214,182,77,171,103,96,130,254,207,226,239,41,37,109,252,170,231,
53,234,238,104,84,74,218,105,104,237,165,45,119,220,198,220,147,250,225,217,199,40,216,159,223,150,191,227,197,21,148,24,31,71,41,201,201,148,148,144,72,9,241,177,20,26,26,70,254,254,126,228,231,235,75,
56,9,185,255,133,23,104,65,54,191,211,142,70,112,182,186,137,182,222,125,183,252,220,227,19,200,47,51,78,3,3,253,212,214,222,73,45,109,173,212,212,220,76,173,237,29,180,34,159,223,65,155,161,49,63,250,
249,130,135,149,146,58,224,195,207,191,252,42,165,37,234,223,175,30,29,151,74,63,136,218,164,148,180,241,223,79,255,134,162,66,181,13,254,113,131,18,46,224,208,50,26,120,71,122,153,61,250,196,30,42,200,
157,163,124,99,47,108,45,226,21,181,173,180,111,253,143,149,18,27,8,128,67,127,122,95,62,196,160,5,45,61,167,153,60,58,120,144,90,154,106,148,146,118,48,212,92,177,172,128,178,164,94,12,110,125,193,157,
135,83,43,250,174,130,226,7,167,126,45,31,224,48,18,12,137,113,48,37,48,48,72,30,9,117,118,117,113,59,229,104,20,88,168,197,246,61,244,4,71,70,112,114,113,136,46,227,208,219,118,69,119,223,40,253,106,
233,247,149,210,165,192,95,1,118,90,141,140,140,80,71,103,39,213,72,163,201,227,39,11,105,197,226,121,242,207,244,144,148,146,69,143,132,108,84,74,218,208,51,178,235,27,34,186,225,91,215,106,18,113,176,
237,195,127,164,185,153,137,74,201,94,216,90,196,209,3,125,108,205,223,40,37,118,126,214,248,44,141,14,105,203,251,16,30,149,72,127,29,119,135,82,210,198,239,134,223,161,38,206,43,250,16,32,204,211,226,
246,151,132,248,120,57,81,19,134,168,183,118,47,83,126,227,107,118,126,246,47,148,153,108,220,94,99,129,122,106,155,187,104,207,218,191,83,74,95,243,199,232,147,242,212,95,67,83,147,52,18,104,167,174,
238,30,234,31,24,224,254,34,76,73,203,161,239,104,216,105,53,157,127,239,120,153,250,122,90,149,18,27,1,193,81,244,63,83,239,85,74,236,60,252,197,191,114,25,145,152,17,91,47,108,234,189,102,77,79,58,209,
176,80,253,71,158,141,200,129,140,224,94,154,155,45,31,139,198,84,73,71,91,61,253,230,241,61,116,223,251,187,233,239,203,247,208,111,135,14,209,203,17,199,233,149,200,227,212,37,245,138,245,130,133,165,
85,171,175,162,43,174,184,154,242,23,175,144,197,192,63,40,146,218,123,134,232,244,185,58,229,183,172,15,234,130,58,161,110,168,35,234,138,58,163,238,104,3,189,192,22,176,9,108,3,27,193,86,176,25,108,
7,27,194,150,176,41,108,107,196,72,134,135,47,234,137,9,189,169,125,121,94,185,104,54,108,221,19,239,29,156,160,95,230,107,159,151,126,58,224,19,218,251,236,11,154,130,98,206,220,69,180,99,242,106,165,
164,141,199,199,222,163,250,90,253,199,255,113,92,25,1,132,69,219,229,42,230,105,15,159,44,35,31,159,73,90,85,224,58,109,172,26,156,205,199,99,248,143,131,25,61,189,61,84,85,83,67,101,231,42,168,190,177,
137,214,174,52,247,84,202,20,56,177,152,158,154,66,11,231,207,165,57,89,89,20,21,25,37,11,157,163,122,242,154,151,198,46,139,201,73,31,90,189,204,253,26,207,137,226,10,89,184,250,7,6,233,242,165,250,167,
122,210,51,231,211,67,254,223,84,74,218,120,202,231,35,170,170,96,63,149,140,209,227,246,123,239,166,251,71,175,82,190,97,231,47,139,127,67,145,33,246,236,179,218,186,39,174,55,17,60,18,24,105,77,97,201,
227,138,55,30,233,51,135,199,3,232,225,29,91,233,193,173,247,210,195,15,108,163,185,243,22,145,111,64,56,85,213,119,56,189,125,6,34,193,67,192,129,179,148,172,16,187,235,91,114,233,238,193,213,242,174,
135,123,238,188,157,82,57,237,139,247,4,120,86,60,51,158,29,117,64,93,156,205,215,242,74,75,11,155,56,19,112,216,18,54,133,109,97,99,216,90,182,185,100,123,248,128,94,120,248,162,214,152,192,255,91,111,
50,49,113,41,132,69,97,189,36,121,38,56,90,172,197,241,208,115,208,179,71,124,10,246,44,17,23,115,234,76,53,173,187,98,141,124,82,114,99,107,62,221,220,177,148,182,77,92,77,63,206,216,74,247,111,217,76,
59,183,222,79,177,241,105,52,56,234,75,21,117,173,116,162,132,207,17,241,41,208,91,77,77,78,86,181,24,133,139,20,244,218,203,147,224,89,221,93,112,1,80,119,180,1,239,188,56,176,21,108,6,219,193,134,176,
37,108,10,219,194,198,176,53,108,14,219,195,7,224,11,122,208,235,139,0,49,129,216,96,5,49,136,88,212,131,149,124,139,21,123,247,196,167,229,84,208,2,2,16,11,128,172,4,4,4,112,185,87,16,121,197,245,48,
39,59,139,2,3,29,247,194,176,237,242,206,190,203,232,191,70,222,66,191,88,248,109,121,31,57,132,0,243,185,109,93,3,116,248,164,254,3,18,152,94,72,140,87,159,195,153,231,45,66,70,195,242,172,104,3,30,115,
202,176,9,108,3,27,193,86,176,25,108,7,27,194,150,206,182,210,194,7,224,11,122,208,235,139,0,49,129,216,96,5,49,168,166,35,224,10,30,241,104,86,108,45,226,216,2,166,23,45,153,224,112,82,142,199,240,83,
239,13,221,217,25,25,170,157,31,191,135,29,42,216,129,112,251,45,55,211,53,235,214,41,63,209,14,238,154,84,147,67,28,96,238,152,215,49,127,79,128,103,157,218,214,231,14,180,129,187,187,69,213,0,155,192,
54,176,17,108,197,98,91,248,130,30,120,220,22,143,152,208,114,114,152,71,54,70,30,90,96,86,132,136,187,65,75,78,102,249,118,30,249,68,168,62,124,117,246,126,176,117,80,11,8,250,180,212,100,221,105,8,146,
18,213,31,213,158,152,156,180,68,26,218,41,240,172,120,102,53,160,13,208,22,122,128,45,96,19,181,237,57,19,173,190,48,133,94,95,4,136,9,109,34,174,63,47,186,16,113,139,226,231,167,127,30,44,38,154,189,
23,16,200,173,39,174,61,112,74,202,235,29,238,253,86,11,210,124,234,173,67,114,162,250,195,21,242,125,158,22,184,95,115,10,60,43,203,189,151,44,109,225,8,216,66,79,142,123,248,2,124,66,43,124,58,37,82,
29,52,136,184,150,24,156,9,15,45,48,43,54,23,113,253,213,139,138,138,100,158,31,14,14,210,118,251,200,76,252,84,38,141,114,68,74,114,146,234,225,190,99,148,92,51,58,96,233,125,202,162,104,161,43,180,166,
142,219,171,69,111,79,252,130,45,180,27,4,190,0,159,208,138,30,95,156,14,107,108,32,246,16,131,122,225,161,5,102,197,230,34,174,223,241,48,151,25,16,192,246,22,15,9,14,214,60,236,157,142,30,199,83,123,
147,142,51,38,39,37,65,213,113,130,0,217,228,88,230,50,177,80,104,181,133,77,150,231,69,91,160,77,52,35,217,66,182,137,70,224,11,122,110,26,226,33,130,120,6,196,6,11,136,61,30,235,9,98,58,197,162,240,
88,145,198,109,37,225,97,108,78,20,204,232,168,206,208,179,183,53,41,81,95,230,58,204,247,170,157,243,117,68,104,104,40,83,240,93,152,78,177,78,79,28,207,202,50,157,130,182,64,155,104,69,175,61,128,30,
159,224,181,207,154,53,54,16,123,136,65,189,136,221,41,22,133,199,188,52,122,15,172,171,227,172,189,13,103,104,237,61,224,152,119,130,206,75,122,199,199,198,117,221,16,158,146,148,196,148,250,22,11,133,
86,235,137,179,44,196,162,45,208,38,90,129,45,96,19,61,192,39,180,166,0,224,213,147,101,141,13,196,30,143,81,45,15,45,48,43,182,22,113,94,142,23,199,184,58,206,171,39,174,245,249,163,163,34,233,166,142,
197,74,73,27,163,146,64,233,201,193,145,158,150,170,124,82,7,4,209,136,156,31,70,129,103,101,221,77,195,218,38,211,193,255,15,54,209,3,124,2,190,161,5,94,177,196,26,27,172,177,231,12,94,207,111,70,236,
61,157,226,207,73,196,99,217,46,89,13,13,225,115,155,11,118,4,104,57,116,163,119,39,4,64,58,83,173,200,219,225,24,143,208,227,210,104,171,193,250,204,104,19,61,219,54,245,216,100,10,45,190,1,31,228,177,
59,5,176,198,6,107,236,57,131,151,22,152,17,49,157,162,130,24,198,222,64,88,24,31,17,247,149,2,71,203,113,225,100,29,195,246,41,70,70,181,95,147,134,250,199,68,179,181,25,15,129,242,52,172,207,140,54,
209,227,27,122,108,50,133,22,223,128,15,194,23,121,192,90,127,214,216,115,134,152,78,177,40,106,239,117,116,7,22,87,112,177,130,90,120,164,161,5,232,253,176,238,111,69,110,138,164,4,245,71,221,157,49,
60,172,253,244,100,188,212,123,98,61,94,61,27,68,28,109,130,182,209,138,30,155,76,1,223,96,205,95,2,31,228,213,19,103,137,13,196,28,235,166,2,103,240,210,2,51,98,239,233,20,78,123,67,113,47,100,8,67,34,
172,176,48,78,119,68,162,39,206,184,189,17,43,249,49,49,250,135,160,122,68,21,67,118,214,197,40,43,92,144,60,19,214,103,70,155,232,153,234,226,241,162,131,111,176,238,246,144,125,144,91,79,92,125,108,
32,230,16,123,60,224,165,5,102,68,117,205,240,246,214,146,129,204,91,32,107,28,175,183,47,118,22,168,221,161,130,123,36,121,101,76,195,73,103,214,173,93,145,17,17,132,235,206,244,162,71,84,35,35,217,111,
53,31,30,182,94,79,92,203,51,107,105,155,41,120,188,232,224,27,240,17,22,224,131,28,78,221,203,32,54,16,35,106,64,204,177,94,238,237,12,104,1,239,76,146,70,194,162,183,110,69,28,13,62,70,65,116,255,221,
155,105,219,61,119,211,232,100,0,29,59,173,255,162,2,163,241,147,188,142,231,41,45,181,91,246,34,57,28,76,248,10,31,95,169,7,193,38,226,44,249,74,92,161,71,84,113,185,195,235,177,133,74,73,29,184,82,204,
106,176,62,51,218,4,109,163,21,30,47,58,248,6,235,233,81,217,7,57,36,192,154,66,109,140,232,221,38,59,29,104,1,52,193,236,64,91,161,177,208,90,104,46,180,215,221,75,207,169,101,240,214,106,233,28,160,
29,247,110,161,159,230,60,72,219,39,174,166,173,99,87,209,207,230,238,162,251,54,111,166,218,230,110,229,55,205,9,178,174,241,156,7,75,74,82,231,248,17,17,156,166,82,36,176,152,228,207,56,157,146,156,
164,127,103,10,24,30,209,222,235,139,10,245,163,199,247,62,77,127,113,252,255,208,47,218,14,208,211,254,159,210,193,132,18,151,105,0,122,122,207,43,159,172,131,171,103,70,93,81,103,212,29,109,128,182,
64,155,160,109,180,162,199,38,211,97,245,17,248,32,175,133,77,160,54,70,212,198,156,26,160,5,60,50,49,26,9,52,21,218,10,141,133,214,66,115,161,189,208,96,104,177,179,145,132,211,90,173,90,185,140,110,
191,249,70,57,79,241,76,238,29,185,130,182,220,126,43,77,250,242,89,192,51,2,100,93,227,145,121,109,138,132,184,120,250,66,197,240,38,50,34,146,75,79,120,10,214,169,153,196,4,62,34,62,162,179,215,183,
124,81,14,37,68,135,208,224,249,14,58,119,182,136,30,125,98,15,61,247,210,203,242,141,231,79,78,126,64,239,164,124,125,232,228,80,82,41,181,119,180,43,37,235,128,103,198,179,79,129,58,161,110,168,35,234,
138,58,163,238,104,3,180,5,218,68,15,122,109,50,5,171,143,240,154,30,4,136,13,196,136,59,16,107,136,57,94,240,214,3,222,64,75,161,169,208,214,153,64,131,161,197,208,100,71,56,21,113,127,255,0,151,55,151,
92,223,146,71,235,214,94,65,73,41,217,116,172,200,124,211,43,188,123,226,225,225,161,20,30,225,126,24,168,247,26,169,233,192,225,157,93,234,224,136,19,37,149,114,2,125,30,240,234,245,77,177,98,241,60,
74,79,138,38,159,241,1,170,169,42,163,255,248,253,227,244,253,147,255,143,254,165,249,121,122,231,189,247,169,247,124,159,242,155,214,1,207,140,103,71,29,80,23,212,9,117,67,29,81,87,212,153,39,188,108,
2,31,129,175,168,5,62,200,179,99,162,38,70,16,107,136,57,94,152,181,39,14,237,132,134,66,75,161,169,206,128,22,67,147,29,225,180,86,37,103,206,208,91,241,197,74,201,49,48,236,35,33,55,208,150,59,110,167,
162,179,181,202,183,230,0,251,66,121,230,75,8,12,8,164,56,21,139,155,60,50,174,77,39,144,97,39,65,84,100,4,109,234,42,80,74,250,24,25,209,182,157,45,50,58,137,10,150,173,162,220,188,2,138,75,204,160,209,
201,64,170,172,111,147,47,249,157,206,138,252,185,20,23,25,72,195,3,93,20,25,234,103,169,211,154,83,224,153,241,236,168,3,234,130,58,77,7,117,70,221,209,6,104,11,180,9,218,6,109,164,5,173,54,153,9,124,
4,190,162,22,22,31,84,131,154,24,65,172,33,230,120,1,45,48,219,94,113,104,38,180,19,26,234,238,37,9,45,134,38,59,194,105,173,186,123,206,203,183,144,171,97,235,248,85,242,80,160,172,170,81,249,198,251,
96,232,196,243,168,45,26,217,221,65,9,172,38,71,169,24,42,178,192,146,67,58,37,137,223,69,195,35,163,236,67,247,154,198,78,90,188,40,143,110,239,93,65,247,12,95,65,223,15,191,137,126,54,119,39,109,219,
114,23,61,188,125,155,36,94,201,212,210,217,71,71,77,56,114,227,5,234,134,58,162,174,168,51,234,142,54,64,91,160,77,208,54,104,35,180,21,43,90,108,226,12,22,95,209,147,199,220,17,136,17,119,59,47,16,107,
60,123,255,208,2,51,77,167,64,43,161,153,208,78,53,64,139,161,201,142,112,42,226,107,87,46,162,194,211,167,85,231,164,198,141,223,119,220,114,179,105,132,28,111,93,222,249,18,112,225,173,43,240,255,212,
179,133,204,17,76,34,174,35,213,232,116,96,115,45,123,146,23,231,229,57,156,130,187,174,41,151,110,63,191,146,254,50,246,54,186,115,211,38,218,185,245,62,10,137,136,163,138,218,86,75,109,91,117,6,234,
128,186,160,78,168,27,234,136,186,162,206,168,251,76,208,70,104,43,86,96,19,181,241,232,14,22,95,225,45,226,136,17,119,189,98,119,177,198,202,5,17,55,71,79,28,26,9,173,132,102,170,1,54,135,22,67,147,29,
225,178,86,245,141,141,212,218,166,126,193,233,174,129,85,116,219,77,55,210,105,19,76,173,92,56,237,200,215,104,137,9,9,116,248,164,243,44,112,24,118,242,154,206,152,34,64,229,80,22,66,146,196,33,103,
10,152,156,156,164,177,113,182,12,134,152,58,152,63,119,142,82,114,14,122,87,119,72,226,246,183,9,119,201,219,168,238,220,116,11,85,55,88,111,81,115,10,60,59,234,128,186,160,78,168,155,154,30,36,218,106,
230,20,147,59,96,19,216,134,7,240,21,181,47,80,181,62,168,22,196,136,171,41,26,196,24,98,141,39,208,2,94,167,78,245,0,109,132,70,66,43,213,2,13,134,22,59,195,165,202,173,42,200,165,162,18,182,158,210,
150,161,53,116,211,134,235,52,167,188,228,5,18,222,240,58,40,48,69,72,72,176,203,133,195,232,72,62,139,138,211,81,219,11,10,15,11,227,182,71,93,206,206,199,40,22,105,41,169,204,249,178,209,35,253,118,
224,117,116,211,245,215,211,145,83,222,245,23,45,224,153,241,236,168,131,171,77,0,142,64,91,161,205,152,192,203,85,103,38,195,41,224,43,240,25,53,240,238,137,3,87,177,130,24,67,172,241,4,90,224,237,36,
88,208,68,104,35,52,146,5,104,48,180,216,25,110,187,170,165,101,101,244,102,252,105,165,164,142,140,244,52,250,198,149,87,42,37,239,16,224,100,37,87,15,55,180,228,185,204,75,18,29,205,119,62,28,168,205,
65,130,211,109,65,156,174,133,67,143,111,130,241,22,153,121,57,57,154,231,48,67,67,67,36,123,241,237,237,121,2,60,51,158,93,11,104,43,180,25,11,176,9,235,8,201,25,240,21,181,167,144,89,243,224,168,193,
85,172,32,198,16,107,188,49,66,19,88,128,38,66,27,89,128,246,66,131,93,225,86,196,151,45,154,75,103,206,178,205,195,193,65,87,46,91,74,29,189,252,22,98,88,97,205,57,162,150,180,84,231,189,167,88,198,204,
125,106,80,219,11,74,77,209,126,19,250,76,228,203,25,24,71,237,243,114,178,149,79,236,4,74,182,226,61,245,229,9,240,204,120,118,173,48,183,153,100,19,94,23,103,192,87,224,51,106,48,162,39,238,42,86,92,
197,152,30,140,210,4,53,64,11,161,137,172,49,10,237,133,6,187,66,85,228,156,60,165,126,129,115,10,60,236,245,215,94,67,103,42,27,148,111,60,139,179,61,149,122,113,181,224,18,21,197,127,58,69,173,227,241,
90,212,4,184,118,140,229,42,176,51,149,77,186,246,199,155,253,36,157,43,244,60,59,218,12,109,167,22,216,132,229,74,56,119,168,245,25,35,196,207,85,172,240,94,212,156,194,40,77,112,7,52,16,90,200,42,224,
208,92,104,175,59,84,121,224,220,204,68,106,108,102,207,249,112,115,231,18,186,113,195,6,58,114,202,243,91,202,140,186,201,3,57,161,79,56,200,101,128,35,177,172,137,133,212,160,38,21,45,46,26,72,226,184,
16,116,225,90,54,245,34,158,147,157,165,107,20,32,47,214,153,96,209,137,25,233,153,245,44,52,162,205,208,118,234,153,212,117,101,222,76,224,51,106,46,169,96,77,135,172,6,196,138,163,99,228,136,45,214,
92,244,106,49,74,19,92,1,237,131,6,66,11,89,129,230,66,123,221,161,186,27,113,226,148,235,131,63,206,216,62,177,142,174,90,163,126,37,150,23,70,13,207,3,2,252,40,62,238,210,84,175,112,144,80,134,116,181,
106,81,227,120,209,82,175,134,215,189,158,96,92,18,10,22,109,154,147,149,161,124,210,134,252,191,210,33,134,94,67,122,102,189,79,205,210,118,104,34,216,134,23,240,25,248,142,59,140,16,63,196,138,163,127,
23,177,133,24,51,2,111,76,217,65,251,160,129,90,80,171,185,170,107,117,182,188,156,254,24,125,82,41,177,177,162,160,128,26,90,123,149,146,103,240,81,95,53,38,190,213,184,144,98,28,44,8,33,67,26,203,17,
121,181,168,217,22,5,199,231,117,27,57,152,192,226,153,74,81,69,226,126,189,115,152,248,255,77,76,88,79,196,241,204,114,91,233,0,109,167,250,194,17,201,38,122,255,127,211,129,207,56,234,144,204,196,136,
173,121,136,21,71,89,5,17,91,136,49,35,48,74,19,156,1,205,131,246,105,1,90,11,205,85,131,234,90,93,190,116,1,21,159,57,163,233,176,193,245,45,185,180,254,170,43,61,186,141,108,116,140,207,17,229,153,188,
155,114,134,58,187,46,205,224,136,30,210,192,192,160,82,226,136,138,93,34,188,79,183,141,79,140,171,238,97,166,165,166,208,141,109,249,74,73,27,88,172,147,228,73,41,89,7,60,179,222,133,70,180,29,218,80,
13,176,9,108,195,11,248,140,170,235,218,24,119,42,169,1,177,226,104,84,129,216,66,140,25,129,81,154,224,8,104,29,52,15,218,199,10,52,22,90,11,205,85,3,211,171,169,168,184,84,243,62,85,228,48,206,157,63,
95,41,25,79,91,71,7,189,22,195,150,211,218,29,175,70,157,160,119,63,248,136,50,147,47,157,179,91,189,44,151,222,120,251,29,250,127,189,175,211,43,17,199,52,189,236,28,49,166,98,33,43,153,49,63,180,59,
198,165,222,158,218,185,222,156,108,237,187,82,166,24,29,27,151,255,159,86,3,207,140,103,215,139,218,54,132,77,120,183,147,26,223,81,227,131,106,64,76,32,54,16,35,136,21,196,204,76,16,91,136,49,196,26,
79,160,5,208,4,79,1,173,99,205,219,62,5,52,22,90,171,22,159,221,187,119,51,141,99,83,211,231,202,135,27,180,176,207,247,35,170,40,247,220,49,235,242,154,22,90,187,250,114,105,200,24,47,15,9,135,134,134,
232,124,95,31,117,117,247,80,119,111,55,245,244,244,202,153,232,6,7,7,105,116,116,76,222,135,139,121,51,36,193,199,138,60,86,179,113,64,0,122,54,52,60,68,125,125,253,170,19,53,225,134,112,220,162,130,
43,166,66,130,67,228,253,196,152,7,12,15,15,151,147,15,97,103,2,182,89,5,5,5,185,236,69,255,170,231,53,234,238,112,126,90,11,167,238,190,247,208,78,186,181,219,113,154,74,45,32,157,234,179,47,190,226,
244,152,239,20,95,22,158,165,7,239,191,135,233,244,153,35,94,12,59,66,79,62,253,172,234,158,135,89,56,114,10,245,191,151,54,247,95,174,124,163,141,3,161,95,74,245,127,142,86,21,184,174,63,22,2,239,221,
124,59,61,232,115,141,242,141,126,48,108,255,205,227,123,92,250,117,116,92,42,253,32,106,147,82,186,20,136,243,240,240,48,117,118,75,49,213,219,43,231,89,239,147,226,108,64,138,43,244,184,7,135,164,63,
248,60,56,228,80,184,29,1,191,14,15,15,163,224,160,96,121,205,123,76,122,89,142,73,61,105,196,233,152,52,250,193,203,204,215,199,87,142,83,196,88,100,132,20,87,81,145,20,29,25,45,31,22,138,144,226,44,
56,56,88,126,241,33,101,240,103,135,143,208,188,44,126,59,184,220,49,119,222,34,218,54,113,181,82,98,227,247,35,239,82,99,189,186,219,143,0,179,136,183,118,13,200,231,254,181,12,223,241,54,124,236,169,
125,180,146,115,138,78,119,92,88,129,199,78,130,9,211,100,203,131,147,98,213,63,50,34,76,190,119,49,41,49,137,18,19,226,37,97,143,146,239,33,196,9,192,131,9,197,114,143,5,185,168,157,81,84,86,77,223,126,
96,135,203,52,150,172,60,54,250,30,53,212,185,223,81,84,81,215,74,59,238,189,71,247,84,206,51,129,159,209,190,103,159,167,213,203,249,31,240,48,146,195,146,95,109,187,119,11,221,55,178,86,249,70,27,16,
193,167,158,125,142,230,102,184,223,137,144,150,49,159,30,14,248,166,82,210,207,219,73,165,244,251,63,60,69,75,22,58,31,13,180,117,15,210,205,215,111,160,141,109,249,244,78,242,25,234,239,239,151,4,187,
71,62,14,222,210,218,66,205,173,173,82,103,168,95,18,214,49,83,197,215,133,237,159,147,180,198,195,126,117,236,116,57,61,188,99,155,166,20,28,240,133,151,95,127,131,18,99,212,159,126,102,22,113,204,245,
108,191,231,30,218,50,164,46,121,203,116,208,227,216,179,255,25,213,111,227,217,6,28,15,189,127,28,174,192,194,207,200,200,48,21,228,185,62,213,135,108,120,247,221,117,39,215,20,3,191,27,126,135,154,26,
220,231,155,246,9,8,167,127,200,216,170,148,180,243,228,228,135,84,83,101,204,60,168,209,100,205,201,149,122,198,235,149,146,118,126,82,183,159,38,71,221,231,84,79,73,203,161,239,4,109,80,74,250,121,55,
165,140,158,57,240,18,101,165,186,94,224,44,44,173,148,124,50,72,78,135,59,50,58,42,247,138,205,34,216,102,3,163,112,36,66,211,50,66,125,62,248,48,237,125,238,57,105,84,170,62,158,153,151,107,241,143,
23,159,81,63,95,51,197,171,81,39,233,189,63,127,36,4,220,5,8,138,203,151,206,151,132,59,155,242,230,166,185,21,112,128,225,36,239,221,3,106,14,148,224,230,149,185,76,123,156,157,51,40,13,179,173,10,175,
103,71,91,170,185,57,138,231,97,31,0,223,81,115,152,7,190,120,193,39,179,101,31,21,2,238,28,104,28,180,14,154,199,10,180,149,69,192,129,166,61,55,37,101,231,232,205,56,117,249,84,48,37,240,239,29,47,209,
254,231,95,160,228,56,142,151,8,155,24,188,137,145,87,26,183,118,96,179,63,18,223,160,151,109,4,13,141,77,84,118,174,156,235,138,190,154,197,235,232,232,104,74,136,231,115,145,237,192,160,245,46,73,158,
130,215,179,163,45,209,166,238,224,149,0,11,192,103,224,59,240,33,35,128,207,195,247,17,3,136,5,196,4,98,99,54,0,173,131,230,65,251,160,129,106,128,166,66,91,89,97,158,78,153,34,54,62,141,254,107,228,
45,74,233,98,48,175,131,237,60,197,165,101,116,244,196,73,202,205,49,38,23,130,30,48,79,142,252,194,72,4,20,22,26,38,47,66,6,7,135,80,176,84,14,8,8,148,167,51,112,183,32,122,42,72,38,143,197,77,4,16,22,
56,59,58,187,168,170,166,246,146,185,182,51,149,141,180,250,178,149,242,138,63,254,45,252,119,88,128,193,92,225,208,240,176,188,200,211,221,211,43,253,233,150,255,141,246,206,78,185,39,55,49,49,174,171,
103,131,96,193,126,227,220,249,243,104,78,86,150,188,112,138,186,105,157,171,254,101,231,171,212,219,221,172,148,28,51,52,230,79,63,95,240,144,82,210,199,63,213,63,77,227,35,214,187,40,25,248,5,70,208,
255,74,191,95,41,233,227,135,103,31,167,96,127,215,34,141,203,38,144,171,92,11,136,75,156,248,196,194,35,46,25,56,35,11,120,163,110,223,195,213,103,200,58,24,31,27,75,113,177,49,20,29,21,45,253,137,148,
23,243,131,131,130,228,181,31,108,24,192,190,250,161,161,65,106,110,109,163,195,71,143,93,162,11,136,201,57,89,153,242,191,129,5,77,236,99,199,32,19,255,29,22,40,71,165,248,195,116,206,232,232,136,20,
79,210,31,233,223,194,98,105,255,64,63,13,75,101,212,205,211,243,223,106,128,46,92,182,124,25,229,231,45,148,147,112,57,139,75,236,218,233,108,103,79,83,162,89,196,107,155,187,104,207,218,191,83,74,95,
243,122,204,41,58,121,186,152,10,139,78,209,226,5,124,134,219,122,193,149,255,200,199,128,222,78,156,228,104,216,25,130,52,156,248,179,177,141,221,129,17,12,239,127,244,49,5,250,126,189,239,180,248,92,
29,109,219,114,55,109,234,102,91,204,120,53,242,184,188,245,169,185,165,149,234,165,30,81,125,67,35,93,238,102,151,130,43,16,84,56,133,151,145,150,70,115,178,51,41,59,35,147,110,234,88,172,252,84,29,191,
104,125,129,6,251,92,223,60,147,145,53,159,118,249,241,89,96,251,251,115,79,80,160,159,231,246,240,242,100,100,60,128,254,121,254,46,165,164,143,39,198,223,163,186,26,215,61,177,144,240,88,250,219,196,
187,149,146,58,208,195,171,174,171,165,170,234,90,170,107,104,144,58,17,61,186,132,251,72,225,89,74,79,75,165,244,212,20,249,230,252,132,184,56,186,173,119,133,242,83,117,188,22,93,72,251,164,158,106,
254,252,175,79,172,142,76,4,208,181,87,175,211,212,249,56,152,80,66,125,253,253,242,31,236,144,233,144,58,72,109,237,29,212,216,220,124,201,181,121,222,226,244,217,26,42,88,178,148,150,45,206,167,91,186,
150,42,223,126,205,206,207,254,133,50,147,213,101,150,156,142,102,17,199,91,115,235,221,155,105,235,248,58,89,212,90,164,183,235,201,162,34,105,56,80,198,60,167,99,20,117,205,221,116,245,149,107,41,109,
90,182,54,189,59,41,166,216,235,251,17,61,253,194,139,95,5,131,127,112,20,253,40,245,94,249,179,86,208,142,232,185,35,1,124,89,249,57,42,57,115,150,46,91,162,111,111,61,236,148,153,158,78,121,11,231,211,
188,156,185,116,139,138,28,14,238,22,217,138,202,106,228,133,155,155,58,216,243,65,56,226,7,69,255,65,209,97,252,243,115,120,130,238,254,49,250,213,146,255,162,148,244,241,102,92,145,188,240,191,100,161,
243,206,143,218,197,228,215,99,139,168,188,178,130,74,165,225,121,109,125,189,238,30,42,166,66,22,229,46,160,133,243,230,75,226,157,42,247,172,245,198,210,79,27,159,165,177,161,30,249,51,58,31,247,75,
122,178,93,227,182,188,153,32,150,166,104,104,106,166,143,62,253,140,50,28,156,239,240,6,216,28,178,104,225,66,90,182,100,137,188,151,28,237,184,223,239,99,218,47,233,137,22,59,105,22,113,208,59,48,46,
245,246,178,232,196,169,211,212,212,212,228,118,139,24,30,62,50,66,26,102,73,67,47,100,100,195,219,114,69,190,113,219,13,35,99,164,161,103,140,182,161,167,59,14,37,150,208,127,62,246,4,173,84,68,150,247,
214,175,169,23,227,129,87,255,72,203,22,177,229,157,118,198,177,162,114,154,55,119,142,228,64,185,148,149,145,74,27,154,29,219,235,135,103,127,47,13,235,157,31,42,233,236,29,161,77,55,186,191,220,85,45,
223,249,242,223,40,37,158,127,242,48,79,208,212,126,158,126,183,234,127,40,37,125,192,230,175,189,117,136,98,35,157,231,86,31,26,243,165,159,47,248,182,82,186,152,119,146,75,169,166,174,81,234,72,157,
161,242,138,42,201,55,249,196,214,201,146,74,186,235,182,91,191,18,28,94,76,223,202,138,57,243,191,120,120,23,221,208,170,125,132,224,138,95,118,189,74,189,93,174,167,8,245,112,188,184,92,30,229,251,250,
248,200,83,60,189,231,123,221,118,102,177,69,53,37,37,133,150,47,93,44,141,146,106,228,75,183,181,224,183,126,253,250,221,202,103,102,142,23,157,161,184,200,32,138,10,15,166,244,148,75,79,39,225,237,218,
63,56,74,225,17,49,148,153,57,135,214,75,189,226,149,203,151,81,129,52,156,88,154,191,72,126,27,125,124,248,24,197,69,27,179,224,25,25,29,75,111,5,24,115,74,116,127,127,2,93,211,91,68,17,161,129,242,98,
205,234,203,86,208,139,99,233,202,79,245,179,247,124,28,125,47,121,136,124,253,252,104,108,196,249,113,126,76,21,145,111,0,13,14,143,83,75,123,55,213,54,182,82,85,93,19,101,56,176,71,106,82,44,5,7,248,
210,59,31,126,66,103,206,150,211,61,65,77,244,72,242,32,125,39,161,95,254,255,77,177,184,242,67,10,151,234,229,140,164,228,84,186,127,76,221,5,175,106,88,116,238,61,138,141,82,119,203,140,217,104,109,
239,161,83,217,223,80,74,250,128,13,182,4,53,210,240,80,191,242,205,165,180,119,245,209,209,180,175,247,165,67,248,111,25,175,160,130,234,63,211,219,239,127,72,199,11,11,105,94,102,146,108,107,71,32,38,
59,187,251,104,96,104,140,70,39,124,168,183,127,136,206,85,213,83,74,162,243,45,134,217,115,230,209,130,185,218,47,253,112,198,214,176,86,122,243,221,15,41,61,57,158,124,252,130,232,191,71,223,170,252,
132,63,155,38,43,105,160,239,66,175,159,55,103,171,155,233,254,187,54,203,243,222,75,22,45,162,165,146,190,45,95,178,88,174,83,91,231,121,42,175,174,151,218,184,238,146,152,132,102,66,59,7,251,123,101,
45,117,20,179,106,208,213,19,119,198,201,146,42,57,225,125,126,110,174,156,155,193,213,188,243,111,135,14,209,171,111,188,69,107,12,216,178,148,153,189,128,118,250,94,171,148,248,179,103,226,3,122,235,
157,119,229,57,232,205,183,222,98,72,47,226,173,132,211,244,219,61,127,184,100,196,130,96,204,93,176,128,214,95,181,86,62,157,134,0,67,64,99,161,20,167,82,27,164,145,81,77,93,29,53,74,67,201,165,185,206,
15,114,28,61,117,86,158,215,156,151,51,71,190,1,29,139,73,7,94,125,213,101,34,250,252,197,43,116,159,210,156,2,207,252,155,39,158,164,165,46,166,16,204,204,169,178,26,250,222,174,7,185,9,28,206,82,20,
159,62,174,148,46,229,100,73,133,212,43,190,77,94,100,111,106,105,166,242,202,42,121,61,229,50,23,167,93,79,157,169,150,47,128,200,202,200,160,52,169,231,7,127,193,66,228,148,207,192,95,62,252,228,51,
249,2,130,153,115,229,232,97,126,119,231,3,116,99,27,219,186,138,26,48,154,125,241,143,175,203,115,244,55,110,184,78,138,85,126,39,81,103,178,103,226,125,170,173,230,147,10,99,58,216,22,122,219,205,55,
210,119,131,111,80,190,185,20,204,215,55,183,180,200,249,80,202,43,171,165,216,114,127,23,45,11,220,68,28,162,130,213,233,130,37,75,36,113,153,75,155,186,212,29,3,199,97,131,55,223,126,135,162,195,249,
102,0,196,92,240,118,14,167,233,220,129,235,147,144,82,211,136,235,164,0,130,236,195,79,62,37,127,26,86,190,185,192,192,136,15,93,119,205,122,183,135,124,176,168,213,210,214,74,21,85,85,210,159,106,121,
119,140,158,249,81,204,135,63,180,125,171,124,122,143,7,111,39,149,208,127,96,90,106,177,231,242,234,240,228,216,233,115,244,95,30,222,69,215,183,240,121,129,99,59,218,227,123,247,187,156,23,119,7,124,
31,187,67,230,206,201,150,254,204,161,164,132,68,183,139,219,136,195,119,63,248,144,66,3,47,150,131,49,10,146,19,57,241,238,133,79,113,40,169,84,222,251,126,83,59,255,151,196,116,112,42,120,239,179,207,
115,223,189,210,221,55,74,55,93,191,65,245,97,187,215,98,78,74,47,203,10,42,44,42,146,119,167,233,89,96,158,66,211,62,113,71,172,91,123,133,36,154,247,208,223,36,220,169,90,192,1,42,191,254,170,171,168,
248,28,223,27,242,253,37,97,13,226,124,75,183,35,224,124,70,9,56,64,240,172,185,108,165,60,100,155,162,185,163,95,94,197,87,227,56,8,94,140,70,126,54,119,23,237,220,122,63,221,115,231,29,52,52,230,71,
39,75,221,159,200,116,4,239,220,210,3,131,195,242,98,174,85,193,179,163,14,60,209,218,198,176,41,108,11,27,195,214,178,205,37,219,171,217,157,4,95,130,79,193,183,166,128,207,193,247,140,18,112,128,216,
49,90,192,1,180,0,154,192,19,104,22,180,75,173,128,3,104,35,52,18,90,9,205,228,1,55,17,63,127,190,79,83,218,69,112,91,239,114,185,87,137,30,4,47,48,45,128,99,194,118,224,230,206,165,116,223,93,119,80,
112,88,12,249,6,70,210,45,27,55,104,154,186,65,62,150,7,232,27,244,243,5,15,211,119,30,220,65,49,113,169,114,254,19,22,22,205,75,167,183,222,253,147,230,220,242,51,65,98,164,73,142,23,29,120,26,60,59,
234,192,3,180,41,218,22,109,204,2,108,8,91,194,166,176,45,108,204,122,251,62,128,79,193,183,224,99,240,53,248,28,124,207,14,64,11,120,230,220,135,86,65,179,160,93,90,128,86,66,51,121,192,77,196,203,43,
43,153,111,197,159,14,210,113,174,40,224,231,48,254,1,1,220,110,127,55,3,55,119,44,165,31,38,109,161,31,167,223,39,245,92,244,111,237,219,216,154,79,255,45,106,19,109,191,103,139,20,176,113,76,47,80,44,
102,35,145,217,15,207,62,70,251,253,62,81,190,213,70,255,192,128,229,18,95,77,7,207,142,58,232,1,109,136,182,68,155,162,109,213,2,155,193,118,176,33,108,9,155,234,5,190,5,31,131,175,193,231,236,2,180,
0,154,192,11,104,149,158,52,204,208,74,104,38,15,184,137,56,230,240,244,28,223,197,144,109,221,21,107,168,162,150,173,103,232,140,144,224,32,218,192,48,204,153,173,96,40,248,195,164,187,104,195,181,215,
48,9,57,246,175,7,251,143,211,254,23,14,208,253,31,252,132,126,222,242,60,189,172,33,143,58,22,213,172,14,107,29,208,70,104,43,180,25,218,14,109,136,182,100,57,19,0,91,193,102,176,29,203,112,126,182,2,
45,128,38,240,0,26,5,173,210,51,205,4,173,212,179,238,49,29,110,34,14,74,207,158,101,14,226,233,96,177,236,134,235,190,41,231,169,214,75,88,168,250,84,142,2,146,183,124,174,94,185,82,41,169,7,11,69,243,
179,146,104,168,191,75,62,168,242,210,107,111,208,163,131,135,232,96,162,186,92,49,56,93,103,117,212,214,1,109,130,182,65,27,161,173,208,102,104,59,45,139,109,176,21,108,38,80,15,15,77,128,54,65,163,244,
44,236,67,35,161,149,188,224,42,226,181,117,117,52,56,164,111,145,7,55,112,95,189,118,181,195,155,176,89,8,21,34,206,4,122,21,107,215,92,78,13,173,218,247,210,162,39,153,20,27,74,45,77,213,180,247,217,
231,232,23,109,7,232,141,184,83,46,95,236,157,93,93,202,39,235,226,170,14,168,59,218,0,109,129,54,65,219,160,141,244,156,196,133,141,96,43,35,23,28,237,136,94,77,128,38,65,155,160,81,122,128,70,66,43,
121,193,85,196,145,88,190,161,201,249,45,52,106,128,99,174,92,86,64,89,25,105,202,55,218,224,121,251,251,108,225,250,230,60,186,233,250,235,233,220,180,157,48,0,71,174,219,186,6,40,46,33,93,78,192,52,
60,30,64,245,45,221,114,142,105,103,83,48,11,231,164,210,224,249,14,122,114,255,179,116,248,216,49,122,61,246,82,49,71,185,189,195,117,142,22,43,128,58,56,170,27,234,140,186,163,13,208,22,104,19,71,160,
13,209,150,104,83,180,45,218,24,109,141,54,71,219,79,7,182,129,141,96,43,1,27,122,53,1,154,4,109,210,251,242,132,70,186,186,132,131,21,238,135,125,206,15,78,208,198,235,190,165,187,162,207,7,127,33,39,
200,185,108,137,182,127,199,63,40,146,126,148,118,159,82,18,176,128,188,27,39,10,11,229,99,255,217,89,153,242,65,160,219,29,36,56,194,244,64,103,103,151,124,144,161,90,234,89,212,213,55,202,87,113,57,
218,251,138,3,39,203,150,46,145,147,255,160,71,4,255,192,110,140,71,159,120,146,251,222,93,79,3,17,126,100,215,131,242,21,121,16,239,129,129,1,57,9,220,201,83,69,14,15,90,225,76,5,174,236,203,72,79,165,
236,140,12,249,64,92,108,108,12,109,116,176,227,232,149,200,227,242,129,158,234,154,90,249,216,251,242,130,2,85,249,111,4,151,242,211,134,103,104,108,88,219,244,221,209,162,179,114,130,187,45,67,107,148,
111,180,1,255,56,248,238,159,40,34,132,95,255,153,187,136,23,157,173,161,93,219,182,234,190,1,29,252,67,205,94,242,25,215,182,242,31,30,149,72,127,29,119,135,82,18,120,130,183,147,206,80,99,115,19,157,
171,168,164,51,103,207,57,20,48,28,142,153,55,39,135,178,50,211,169,166,182,158,162,194,248,238,221,245,22,61,253,227,95,213,169,188,170,210,225,225,37,188,200,114,23,204,167,249,115,115,40,53,57,69,243,
150,92,129,54,254,189,227,101,234,235,209,182,113,98,210,47,148,126,146,181,93,41,105,231,173,132,98,122,98,223,126,90,194,49,195,43,215,233,20,128,203,132,155,154,249,36,154,185,124,197,50,57,197,171,
22,196,116,138,231,129,40,225,18,95,28,26,249,174,212,51,77,73,155,67,45,157,23,239,220,128,184,65,184,187,59,154,108,35,224,96,122,157,102,10,56,218,0,109,129,54,65,219,160,141,132,128,123,30,173,154,
0,13,130,22,241,0,218,8,141,228,137,33,185,83,120,230,88,214,154,125,140,103,190,107,129,118,48,124,108,108,110,161,207,14,31,158,53,55,59,77,209,220,209,71,107,87,175,150,122,221,73,98,17,210,4,168,201,
215,238,8,158,217,80,141,200,157,207,189,39,14,42,107,170,185,93,23,182,104,225,2,170,110,104,87,74,234,193,156,163,192,251,64,188,182,79,172,163,59,55,221,66,209,113,169,116,162,132,207,1,7,51,131,58,
162,174,168,51,234,46,4,220,28,104,209,4,104,15,52,136,7,208,68,104,35,111,12,17,113,92,255,212,222,193,103,235,24,142,2,95,117,197,26,166,131,40,200,91,30,204,105,99,191,128,15,56,144,178,56,47,87,206,
246,136,117,19,187,130,186,161,142,168,171,56,132,99,46,160,9,208,6,181,64,115,160,61,188,178,147,66,19,161,141,188,49,68,196,113,219,51,210,160,242,34,43,35,93,222,33,161,22,204,125,217,233,200,189,93,
64,143,116,219,248,58,186,241,186,235,108,121,97,46,234,132,186,161,142,162,247,109,62,160,9,44,243,226,208,28,104,15,47,160,137,208,70,222,24,34,226,160,178,154,95,111,235,186,166,92,249,152,235,151,
133,234,2,63,34,60,66,190,160,85,96,78,16,24,216,161,97,55,80,39,158,65,47,224,11,52,1,218,160,6,104,13,52,7,218,195,11,158,154,56,29,195,68,28,27,218,177,157,134,23,184,250,168,96,177,186,148,149,216,
79,251,205,6,209,19,50,43,232,165,226,86,126,187,129,58,137,30,184,121,129,38,64,27,212,0,173,129,230,240,2,90,168,247,32,164,51,12,19,113,220,47,87,83,203,111,74,5,193,113,229,154,213,116,2,215,145,185,
33,219,134,2,97,55,2,57,102,148,51,11,118,172,147,221,80,163,13,208,24,104,13,207,23,50,180,208,168,11,228,13,19,113,128,84,139,51,143,35,235,1,195,33,52,174,43,190,44,44,163,100,157,185,13,4,198,211,
123,158,255,2,143,183,177,99,157,236,6,180,1,26,225,10,104,12,207,233,88,104,32,175,180,179,142,48,84,196,43,170,106,184,222,218,130,55,35,46,33,45,175,109,81,190,185,20,220,33,24,22,38,146,95,153,29,
220,171,104,55,236,88,39,187,1,109,128,70,56,3,218,2,141,225,217,11,135,6,66,11,141,194,80,17,199,133,160,245,141,13,74,73,31,120,155,33,167,199,233,146,82,26,114,145,41,49,63,119,161,216,218,101,1,132,
136,11,188,1,180,1,26,225,12,104,11,52,6,90,195,107,22,1,26,200,251,114,228,233,24,42,226,160,236,92,185,174,198,192,127,251,98,216,17,250,232,211,207,232,15,79,63,45,231,62,88,188,32,83,249,233,197,96,
46,107,222,92,227,26,75,192,135,183,147,74,13,217,47,235,109,80,39,212,77,96,110,160,17,206,214,214,160,45,208,24,104,13,52,7,218,163,87,191,160,129,70,98,184,136,227,134,245,209,49,246,99,166,168,252,
211,254,159,202,55,225,63,249,244,51,228,59,57,228,54,125,99,222,194,5,20,28,36,114,166,152,157,145,209,49,234,229,116,191,160,153,64,157,80,55,129,185,129,70,64,43,92,1,173,129,230,64,123,160,65,208,
34,45,98,14,237,131,6,26,137,225,34,142,43,136,234,27,212,95,219,134,134,218,235,243,17,189,248,199,215,105,239,115,207,83,84,152,191,170,85,93,164,247,92,81,160,63,215,175,192,120,122,122,123,104,85,
129,253,236,132,58,161,110,2,115,3,141,128,86,64,51,220,1,237,129,6,65,139,100,77,146,180,137,69,204,161,125,188,174,97,115,134,225,34,14,74,202,202,220,86,28,63,127,54,240,51,249,234,170,202,138,18,74,
142,11,115,152,151,218,25,139,114,115,41,54,38,90,41,9,204,140,29,46,130,112,134,157,235,102,39,160,21,208,12,181,64,139,160,73,208,38,104,20,180,74,141,166,65,251,140,198,35,34,94,85,93,43,95,22,224,
12,92,14,240,254,71,31,209,190,231,14,200,87,87,177,114,172,168,156,174,92,189,74,244,194,45,66,123,7,123,66,51,171,96,231,186,217,9,104,5,52,3,218,193,10,52,10,90,5,205,130,118,57,3,154,7,237,51,26,143,
136,56,86,102,29,85,230,96,66,49,253,162,245,194,221,131,129,190,99,180,106,25,251,174,18,12,137,174,190,242,10,218,220,127,153,242,141,192,204,160,119,210,218,102,95,161,67,221,220,245,208,4,230,0,154,
1,237,80,51,173,50,19,104,21,52,75,190,75,86,210,48,104,217,76,160,121,70,238,74,153,194,35,34,14,74,202,206,124,229,220,135,146,74,233,215,231,223,160,189,207,189,64,131,125,29,154,238,155,67,195,23,
150,86,211,90,233,109,186,108,137,186,227,248,2,239,51,50,50,74,93,221,246,157,55,70,221,80,71,129,53,128,118,64,67,160,37,90,196,28,218,5,13,131,150,65,211,160,109,224,194,84,138,103,146,188,249,173,
95,191,126,183,242,217,80,206,148,215,208,220,57,115,232,91,125,167,233,208,159,222,163,32,191,49,138,143,81,151,140,6,160,129,59,123,250,200,63,32,132,226,19,146,232,170,53,107,104,237,170,203,41,39,
59,75,236,11,183,16,183,81,53,29,62,122,140,210,83,236,121,170,182,170,182,145,22,47,202,165,3,163,250,46,250,22,120,134,125,125,241,244,163,188,96,90,154,191,136,22,206,155,71,67,163,227,212,212,214,
69,231,170,235,36,91,54,81,134,74,63,133,150,13,14,244,210,199,135,143,209,119,19,251,105,98,98,146,62,253,226,48,165,38,197,41,191,97,28,134,220,236,227,140,194,210,42,42,200,83,63,188,56,82,88,70,241,
241,241,148,147,149,73,89,153,25,148,156,152,64,55,180,234,191,187,83,224,61,126,51,112,144,90,155,237,155,79,28,36,38,103,209,247,66,55,42,37,129,21,57,148,88,76,205,173,109,114,206,147,202,154,90,106,
111,111,167,203,11,212,119,22,89,181,78,15,30,21,113,53,156,44,173,148,122,215,217,114,70,184,204,244,52,10,83,110,70,23,216,131,31,87,63,69,190,19,206,23,185,237,192,132,111,8,253,99,246,14,165,36,176,
58,152,26,233,31,24,160,218,250,6,170,170,169,161,202,234,106,90,150,103,158,84,202,166,16,113,76,149,64,180,177,119,51,59,43,131,124,125,124,132,112,219,148,135,191,248,87,74,75,140,84,74,246,164,161,
181,151,30,91,243,55,74,73,96,39,32,232,19,147,147,84,93,83,71,199,11,11,101,81,103,217,10,109,4,30,91,216,116,70,81,89,13,221,185,233,102,249,207,183,3,191,69,27,154,22,10,1,183,41,111,37,156,166,206,
46,62,215,246,153,25,212,17,117,21,216,15,104,19,52,10,90,53,165,91,208,48,111,226,85,17,63,81,92,73,155,111,221,36,79,159,136,197,73,251,211,221,221,75,253,253,253,74,201,190,160,142,168,171,192,222,
64,179,160,93,208,48,104,153,183,240,170,136,99,69,56,33,62,78,244,188,103,9,205,173,173,180,198,203,67,79,79,128,58,162,174,2,251,3,237,130,134,65,203,188,133,87,69,60,62,46,86,8,248,44,162,177,73,125,
14,29,171,51,155,234,58,219,129,134,65,203,188,133,87,69,28,189,21,113,186,109,118,0,59,55,54,59,191,204,195,110,160,174,194,183,103,7,176,179,55,71,94,94,21,241,162,146,18,234,233,21,115,135,179,129,
243,125,125,179,234,250,50,212,21,117,22,216,31,104,24,180,204,91,120,85,196,47,91,178,128,62,250,244,115,233,77,102,124,166,47,129,119,105,110,105,149,236,61,95,41,217,31,212,21,117,22,216,27,104,23,
52,12,90,230,45,188,42,226,224,108,121,57,213,214,27,115,149,191,192,60,240,186,166,207,74,204,198,58,207,54,160,93,208,48,111,226,117,17,95,189,60,143,62,254,236,243,175,18,199,8,236,7,230,12,235,26,
102,223,139,26,117,22,243,226,246,5,154,5,237,130,134,121,19,175,139,56,104,108,110,166,226,82,207,100,252,18,120,158,129,193,65,234,232,156,125,151,37,160,206,168,187,192,158,64,179,160,93,222,198,20,
34,142,99,171,159,31,57,66,175,197,20,42,223,8,236,68,83,115,11,141,141,141,43,165,217,3,234,140,186,11,236,7,180,10,154,229,237,35,247,192,20,34,14,22,207,207,164,47,143,29,23,195,79,27,82,91,95,111,
10,103,247,52,168,51,234,46,176,23,208,40,104,21,52,203,12,152,70,196,193,241,194,162,89,57,236,182,59,53,117,179,87,200,102,115,221,237,10,52,10,90,101,22,76,37,226,184,45,252,131,143,63,21,189,113,27,
241,186,52,236,156,151,153,168,148,102,31,168,59,218,64,96,15,160,77,208,40,104,149,89,48,149,136,3,164,118,44,175,170,82,74,2,171,83,219,32,182,217,137,54,176,15,208,38,104,148,153,48,157,136,99,30,241,
207,159,124,74,7,19,189,119,2,74,192,7,244,90,144,119,121,182,131,54,16,163,75,235,3,77,130,54,153,109,125,199,116,34,14,22,206,73,165,19,133,167,132,227,91,156,137,137,9,170,107,16,115,194,104,3,180,
133,192,186,64,139,160,73,208,38,179,97,74,17,7,184,76,87,228,85,177,54,176,95,103,151,125,111,182,87,11,218,64,248,178,181,129,253,160,73,102,196,180,34,190,60,127,46,125,242,197,97,209,27,183,48,213,
181,117,180,118,229,236,219,90,56,19,180,1,218,66,96,77,160,65,208,34,104,146,25,49,173,136,131,51,101,56,174,45,22,133,172,74,85,77,173,242,73,32,218,194,186,64,131,160,69,102,197,212,34,142,156,4,216,
206,243,118,146,88,228,180,26,111,198,21,81,131,184,24,225,43,208,22,104,19,129,181,128,246,64,131,188,157,31,197,21,166,22,113,144,147,30,79,167,138,69,114,44,171,129,36,249,203,23,229,40,37,1,218,66,
92,217,102,61,160,61,208,32,51,99,122,17,7,159,29,62,66,175,68,158,80,74,2,43,80,89,109,174,189,180,102,64,180,137,181,128,230,64,123,204,142,37,68,188,32,47,155,62,249,252,11,165,36,48,59,239,36,151,
82,77,157,88,200,155,9,218,4,109,35,176,6,208,28,104,143,217,177,132,136,131,226,210,82,122,108,244,93,165,36,48,51,221,61,231,169,163,179,75,41,9,166,64,155,160,109,4,230,7,90,3,205,177,2,150,17,241,
53,43,22,209,187,31,252,153,222,138,47,86,190,17,152,149,234,218,90,90,189,44,87,41,9,166,64,155,160,109,4,230,6,26,3,173,129,230,88,1,203,136,56,88,52,47,157,62,252,68,36,200,50,51,176,77,69,85,181,82,
18,204,4,109,35,252,215,188,192,54,208,24,104,141,85,176,148,136,131,194,211,167,233,92,69,165,82,18,152,141,254,129,1,106,110,17,23,33,56,3,109,131,54,18,152,19,104,11,52,198,74,248,236,222,189,123,82,
249,108,25,78,157,169,162,251,239,190,139,238,236,187,76,249,198,60,224,77,142,32,109,239,232,164,174,238,110,249,184,110,119,79,15,13,72,223,141,140,140,210,240,200,8,77,76,78,144,175,143,15,249,249,
249,83,64,128,63,5,5,6,81,72,72,48,133,135,134,81,120,120,24,69,69,70,81,100,100,56,69,132,133,203,229,111,53,154,39,237,165,59,126,51,112,144,90,155,197,46,12,87,36,38,103,209,247,66,55,42,37,243,3,159,
238,235,235,167,243,253,125,212,219,219,39,249,116,143,92,238,27,232,167,193,193,33,201,167,135,105,116,116,140,198,199,199,36,223,158,148,124,219,87,242,233,64,10,12,12,160,208,208,80,138,142,138,146,
124,58,146,98,162,163,41,62,46,150,194,164,239,204,232,211,47,133,31,165,167,95,56,64,75,115,231,40,223,88,3,75,138,56,104,106,63,79,183,223,124,51,221,208,234,157,77,248,83,98,221,213,221,67,109,237,
109,210,159,14,57,89,60,68,123,120,120,132,86,46,153,175,252,166,54,62,63,94,42,11,124,72,112,48,37,196,199,82,66,92,60,37,38,36,72,159,227,41,50,34,92,170,183,57,231,235,254,178,248,55,20,25,98,185,1,
158,71,233,29,156,160,95,230,127,79,41,153,139,67,137,37,212,123,190,79,242,231,118,106,109,147,252,186,163,93,250,220,73,131,67,67,178,80,95,177,66,95,188,29,43,58,71,65,65,129,178,168,199,197,74,126,
29,31,39,253,73,144,4,62,202,171,226,126,40,177,148,94,121,227,13,74,137,143,80,190,177,14,150,21,113,48,233,27,66,235,214,94,225,17,195,67,180,209,235,104,110,109,163,154,186,90,170,173,111,160,30,169,
135,61,52,60,236,209,212,148,95,158,60,67,97,97,97,178,243,167,166,36,83,70,90,26,197,70,199,200,61,121,111,247,110,144,170,243,241,167,246,209,146,133,89,202,55,2,71,20,149,213,208,67,59,182,209,70,47,
191,136,167,124,186,179,187,75,62,90,222,216,212,44,119,70,250,251,251,105,149,7,23,166,63,63,94,66,193,65,65,20,37,245,216,51,211,211,40,43,35,147,146,19,19,60,230,211,104,7,220,90,239,51,97,205,75,173,
45,45,226,135,37,65,219,180,241,122,122,36,196,152,161,169,236,228,67,195,84,93,91,67,101,231,202,169,161,177,137,10,242,204,55,212,42,44,173,146,123,53,25,114,0,164,203,189,118,244,118,60,45,234,123,
38,62,160,231,95,126,197,116,249,150,205,6,68,107,203,29,183,211,78,223,107,148,111,60,3,252,25,163,68,244,174,113,109,92,157,212,17,193,232,209,172,62,157,150,154,66,11,231,207,163,236,204,44,105,68,
26,100,152,63,63,58,120,144,94,59,248,182,101,119,84,89,90,196,1,140,125,223,93,119,210,93,3,171,148,111,244,243,110,74,25,181,72,67,201,194,162,11,139,168,203,44,118,124,252,100,73,21,165,36,39,72,189,
154,12,154,147,149,41,13,85,99,200,207,207,215,112,81,255,251,242,39,40,208,119,84,41,9,92,49,50,17,64,255,60,111,151,82,50,6,136,246,248,248,4,117,73,61,109,36,224,170,173,175,163,166,230,54,201,159,
173,53,231,123,178,164,146,230,207,205,161,130,37,139,41,41,33,129,174,107,90,168,252,68,63,7,66,191,164,103,14,188,100,202,23,153,90,44,47,226,160,162,182,77,18,242,59,104,99,91,190,242,141,54,32,222,
56,26,253,229,241,19,84,47,13,47,237,210,163,44,62,87,71,153,82,15,29,130,142,161,234,45,157,75,148,159,240,3,130,241,251,63,236,181,212,214,44,111,82,82,94,79,223,126,96,187,33,47,214,215,99,139,228,
41,63,89,184,165,30,119,254,252,12,229,39,214,6,35,152,244,180,52,90,181,98,57,229,100,103,233,22,243,131,9,197,146,128,191,76,115,51,19,148,111,172,137,45,68,28,116,244,14,211,166,141,55,104,50,44,4,
8,226,141,99,182,57,25,214,54,168,59,16,8,169,201,201,210,48,117,174,212,187,153,71,81,145,17,92,132,100,159,223,199,180,255,249,3,98,42,69,37,176,195,214,45,119,209,182,241,117,202,55,218,129,255,246,
244,158,151,70,141,229,84,118,174,130,26,155,155,109,111,135,202,186,54,186,234,138,53,178,152,107,241,95,116,216,94,59,120,136,226,34,131,148,111,172,139,109,68,92,198,63,140,174,90,179,90,181,81,225,
252,109,29,29,244,225,199,159,202,39,233,102,155,0,125,121,178,76,238,161,23,44,206,151,131,225,250,22,109,59,15,208,142,31,75,47,64,159,113,177,255,153,133,73,191,80,90,39,9,145,214,151,232,219,73,165,
114,231,163,240,116,177,220,227,94,181,140,223,52,131,21,192,139,48,59,51,147,214,175,187,146,18,226,226,152,226,30,151,60,208,88,191,242,141,181,177,213,94,176,47,142,28,165,226,210,51,178,145,220,113,
48,177,152,62,59,252,37,237,127,238,0,165,196,135,207,202,30,36,130,62,57,46,140,90,154,170,233,15,207,60,71,255,218,118,128,222,144,134,226,90,16,7,176,216,209,218,102,176,17,108,5,155,193,118,176,225,
108,19,112,128,152,69,236,34,134,17,203,136,105,119,64,27,160,17,208,10,187,96,175,158,184,196,209,162,115,116,251,205,55,209,46,191,107,149,111,46,6,70,108,151,122,223,111,191,247,1,101,165,198,42,223,
10,166,56,125,174,150,86,22,20,208,226,69,139,84,207,157,191,16,114,152,74,138,69,170,96,45,44,202,95,78,119,15,174,86,74,174,193,92,247,233,146,18,58,86,88,72,139,231,103,42,223,10,166,168,105,236,164,
235,191,121,13,197,187,232,149,63,49,254,62,189,242,198,155,116,153,206,115,28,102,194,118,167,50,96,156,55,223,126,135,158,13,252,76,249,230,107,32,224,103,206,157,163,231,94,122,69,8,184,19,32,14,195,
3,93,180,247,217,231,232,223,218,95,146,23,127,92,129,54,45,43,23,189,112,173,160,237,220,141,28,97,3,216,2,54,129,109,132,128,59,6,49,141,216,70,140,59,106,83,104,2,180,193,78,2,14,108,121,180,110,105,
110,54,253,241,173,131,244,74,196,215,183,83,255,41,181,140,62,151,134,80,111,28,122,199,114,91,6,189,1,118,52,244,247,182,209,254,23,14,208,127,14,188,69,239,166,156,81,126,114,49,56,102,141,5,53,129,
54,208,118,104,67,71,160,205,209,246,176,1,108,97,151,93,38,70,130,216,70,140,35,214,17,243,83,64,11,160,9,208,6,187,97,187,233,148,233,84,213,183,211,93,183,111,162,224,160,96,250,240,147,79,232,200,
241,147,98,247,132,70,26,90,123,232,218,171,175,150,79,138,78,31,170,98,159,109,241,233,227,74,73,160,133,252,197,43,46,58,231,128,94,36,78,78,190,255,209,71,148,150,24,165,124,43,96,1,139,158,151,175,
88,70,235,175,186,138,134,134,135,232,192,43,175,209,28,147,95,179,166,21,91,139,56,168,109,238,166,212,228,68,242,167,17,229,27,129,86,190,56,81,74,203,150,44,161,171,214,172,162,155,59,151,202,223,253,
83,195,51,52,62,220,43,127,22,104,195,47,40,146,254,87,218,125,242,231,55,98,79,209,39,95,124,73,39,139,138,104,141,137,47,231,181,10,99,20,72,141,205,173,148,153,28,173,124,99,63,108,47,226,2,254,156,
62,91,67,223,184,242,74,249,20,221,51,47,190,68,57,233,246,222,91,111,52,149,245,109,116,223,230,59,229,221,42,127,254,244,83,90,188,64,228,158,17,168,199,111,253,250,245,187,149,207,2,129,42,18,227,162,
233,253,79,190,160,134,198,70,106,106,105,165,244,20,33,226,122,40,171,168,165,122,169,45,143,158,56,73,43,23,219,107,209,77,96,60,162,39,46,16,8,4,22,70,36,126,22,8,4,2,11,35,68,92,32,16,8,44,140,16,
113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,
196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,
23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,
16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,140,16,113,129,64,
32,176,48,66,196,5,2,129,192,194,8,17,23,8,4,2,11,35,68,92,32,16,8,44,11,209,255,7,34,217,20,66,177,132,84,225,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GUI::hands2_png2 = (const char*) resource_GUI_hands2_png2;
const int GUI::hands2_png2Size = 19528;


//[EndFile] You can add extra defines here...
//[/EndFile]
