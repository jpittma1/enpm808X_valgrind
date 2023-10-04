#pragma once

#ifndef ANALAG_SENSOR_HPP
#define ANALAG_SENSOR_HPP

#include <iostream>

class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
private:
    unsigned int mSamples;
};

#endif
