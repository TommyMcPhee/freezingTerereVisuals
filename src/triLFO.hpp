#pragma once
#ifndef triLFO_hpp
#define triLFO_hpp

#include <stdio.h>
#include "ofMathConstants.h"

class triLFO {
public:
    triLFO();
    triLFO(float _freq, float _phase, float _amp, int _sampleRate);
    void setFreq(float _freq);
    void setAmp(float _amp);
    void setPhase(float _phase);
    void setSampleRate(int _sampleRate);
    float getSample();
    float getPhaseInc();
    float getFrequency();
    float getPhase();
    float getAmplitude();
    int getSampleRate();
        
    private:
    void calculatePhaseInc();
    void checkPhase();
    void incrementPhase();
    float frequency;
    float phase;
    float amplitude;
    int sampleRate;
    float phaseInc;
};

#endif
