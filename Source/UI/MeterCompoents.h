#pragma once

#include <JuceHeader.h>
#include "../PluginProcessor.h"
#include "OtherCompoents.h"

class MeterComponent : public OtherCompoents
{
public:
    MeterComponent(FurosAudioProcessor& p);
    ~MeterComponent() override;

    void paintOverChildren(juce::Graphics& g) override;
    void resized() override;

private:
    FurosAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MeterComponent)
};