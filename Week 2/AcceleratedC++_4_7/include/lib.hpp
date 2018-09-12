/**
 *  @file    lib.hpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, function to calculate the average of numbers
 *
 */
#pragma once

#include<iostream>
#include<vector>

/**
 *   @brief  calculating the average values of given numbers
 *
 *   @param  vect is an initialized double vector
 *   @return double
 */
double average(std::vector<double> vect)
{
  double sumOfNums = 0;  ///< sum of all the numbers in the vector
  for (auto& n : vect)
    sumOfNums += n;
  std::vector<double>::size_type vectSize = vect.size();  // assigns the vector size
  return sumOfNums / vectSize;  // returns the calculated average

}
