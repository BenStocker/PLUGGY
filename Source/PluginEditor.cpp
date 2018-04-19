/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
PluggyAudioProcessorEditor::PluggyAudioProcessorEditor (PluggyAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

PluggyAudioProcessorEditor::~PluggyAudioProcessorEditor()
{
}

//==============================================================================
void PluggyAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::bottomLeft, 1);
    
    //g.setColour(Colours::orange);
    g.setColour(Colour(10, 0, 25));
    Rectangle<int> foo (getWidth()/40, getHeight()/8, 200, 100);
    g.fillRect(foo);
    
}

void PluggyAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
