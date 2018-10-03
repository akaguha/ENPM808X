/**
 *  Copyright 2018 Akash Guha
 *  @file    AnalogSensor.cpp
 *  @author  Akash Guha(akaguha@terpmail.umd.edu)
 *  @date    10/02/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Valgrind Exercise
 *
 *  @section DESCRIPTION
 *
 *  This file contains the definations of all the 
 *  methods of AnalogSensor class
 *
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    //std::vector<int> *readings = new std::vector<int>(mSamples, 10);
    std::unique_ptr<std::vector<int>> readings(new std::vector<int>(mSamples, 10)); //passing normal pointer to a smart pointer

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    return result;
}


