#pragma once

#include <JuceHeader.h>
#include "OtherCompoents.h"

//==============================================================================
/*
*/
class ADSRComponent : public OtherCompoents
{
public:
    ADSRComponent(juce::AudioProcessorValueTreeState& apvts, juce::String attackId, juce::String decayId, juce::String sustainId, juce::String releaseId);
    ~ADSRComponent() override;

    void resized() override;

private:
    SliderWithLabel attack;
    SliderWithLabel decay;
    SliderWithLabel sustain;
    SliderWithLabel release;

    static constexpr int sliderWidth = 50;
    static constexpr int sliderHeight = 260;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ADSRComponent)
};