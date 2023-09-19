#pragma once

#include <JuceHeader.h>
#include "OtherCompoents.h"

class LfoComponent : public OtherCompoents
{
public:
    LfoComponent(juce::AudioProcessorValueTreeState& apvts, juce::String lfoFreqId, juce::String lfoDepthId);
    ~LfoComponent() override;

    void resized() override;

private:
    using SliderAttachment = juce::AudioProcessorValueTreeState::SliderAttachment;

    void setSliderParams(juce::Slider& slider, juce::Label& label, std::unique_ptr<SliderAttachment>& attachment, juce::String paramId, juce::AudioProcessorValueTreeState& apvts);

    juce::Slider lfoFreqSlider;
    juce::Slider lfoDepthSlider;

    juce::Label lfoFreqLabel{ "Freq", "Freq" };
    juce::Label lfoDepthLabel{ "Depth", "Depth" };

    std::unique_ptr<SliderAttachment> lfoFreqAttachment;
    std::unique_ptr<SliderAttachment> lfoDepthAttachment;

    SliderWithLabel lfoFreq;
    SliderWithLabel lfoDepth;

    static constexpr int dialWidth = 70;
    static constexpr int dialHeight = 70;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LfoComponent)
};