#include "../JuceLibrary_copy/JuceHeader.h"
#include "PluginProcessor.h"

class YourAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    YourAudioProcessorEditor (YourAudioProcessor&);
    ~YourAudioProcessorEditor();

    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    YourAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (YourAudioProcessorEditor)
};