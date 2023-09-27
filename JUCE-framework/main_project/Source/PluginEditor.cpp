#include "PluginProcessor.h"
#include "PluginEditor.h"

YourAudioProcessorEditor::YourAudioProcessorEditor (YourAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Set the size of the plugin window
    setSize (400, 300);
}

YourAudioProcessorEditor::~YourAudioProcessorEditor()
{
    // Cleanup any created components here
}

void YourAudioProcessorEditor::paint (Graphics& g)
{
    // This is where you'll paint your visuals. You'll need to use the data
    // from the audio analysis in the processor to determine what to paint.
}

void YourAudioProcessorEditor::resized()
{
    // This is where you should set the bounds of any child components
}