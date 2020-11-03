/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class KiRiPlugInAudioProcessorEditor  : public juce::AudioProcessorEditor, public Slider::Listener
{
public:
    KiRiPlugInAudioProcessorEditor (KiRiPlugInAudioProcessor&);
    ~KiRiPlugInAudioProcessorEditor() override;

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    void sliderValueChanged (Slider* slider) overrride;

private:
    slider mGainSlider;
    KiRiPlugInAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KiRiPlugInAudioProcessorEditor)
};
