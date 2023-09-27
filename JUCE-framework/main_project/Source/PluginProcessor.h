#include "JuceLibrary_copy/JuceHeader.h"

class YourAudioProcessor  : public AudioProcessor
{
public:
    YourAudioProcessor();
    ~YourAudioProcessor();

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //...
    // Other methods required by AudioProcessor
    //...

    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //...
    // Your methods for audio analysis
    //...

private:
    //...
    // Your variables for audio analysis
    //...

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (YourAudioProcessor)
};