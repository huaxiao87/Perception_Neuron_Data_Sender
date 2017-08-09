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

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "NeuronConnection.h"

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GUI  : public Component,
             public ChangeListener,
             public TextEditorListener,
             public ButtonListener
{
public:
    //==============================================================================
    GUI ();
    ~GUI();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* hands_png;
    static const int hands_pngSize;
    static const char* hands1_png;
    static const int hands1_pngSize;
    static const char* hands1_png2;
    static const int hands1_png2Size;
    static const char* hands2_png;
    static const int hands2_pngSize;
    static const char* hands2_png2;
    static const int hands2_png2Size;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	NeuronConnection NCon;
	void changeListenerCallback(ChangeBroadcaster* source) override;
	void textEditorReturnKeyPressed(TextEditor&) override;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextEditor> ipEditor;
    ScopedPointer<TextEditor> portEditor;
    ScopedPointer<Label> portLabel;
    ScopedPointer<ToggleButton> toggleButton;
    ScopedPointer<ToggleButton> toggleButton2;
    ScopedPointer<ToggleButton> toggleButton3;
    ScopedPointer<ToggleButton> toggleButton4;
    ScopedPointer<ToggleButton> toggleButton5;
    ScopedPointer<ToggleButton> toggleButton6;
    ScopedPointer<ToggleButton> toggleButton7;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<Label> ipLabel;
    ScopedPointer<ToggleButton> toggleButton8;
    ScopedPointer<ToggleButton> toggleButton9;
    ScopedPointer<ToggleButton> toggleButton10;
    ScopedPointer<ToggleButton> toggleButton11;
    ScopedPointer<ToggleButton> toggleButton12;
    ScopedPointer<ToggleButton> toggleButton13;
    ScopedPointer<ToggleButton> toggleButton14;
    Image cachedImage_hands2_png2_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GUI)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
