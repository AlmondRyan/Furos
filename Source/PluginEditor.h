/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "UI/ADSRCompoent.h"
#include "UI/FilterCompoents.h"
#include "UI/LFOCompoents.h"
#include "UI/MeterCompoents.h"
#include "UI/OSCCompoents.h"
#include "UI/OtherCompoents.h"
#include "UI/ReverbCompoents.h"

//==============================================================================
/**
*/
class FurosAudioProcessorEditor  : public juce::AudioProcessorEditor, public juce::Timer
{
public:
    FurosAudioProcessorEditor (FurosAudioProcessor&);
    ~FurosAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //Timer START!!!!
    void timerCallback() override;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FurosAudioProcessor& audioProcessor;

    OscComponent osc1;
    OscComponent osc2;
    FilterComponent filter;
    ADSRComponent adsr;
    LfoComponent lfo1;
    ADSRComponent filterAdsr;
    ReverbComponent reverb;
    MeterComponent meter;
    //juce::ImageComponent logo;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FurosAudioProcessorEditor)
};
