/**
 *  Copyright 2018 Akash Guha
 *  @file    main.cpp
 *  @author  Akash Guha(akaguha@terpmail.umd.edu)
 *  @date    10/02/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Valgrind Exercise
 *
 *  @section DESCRIPTION
 *
 *  Main function of AnalogSensor program
 *
 */
#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator=false; //initializing with an explicit value
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
