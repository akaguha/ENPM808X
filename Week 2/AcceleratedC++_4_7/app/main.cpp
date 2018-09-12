/**
 *  @file    main.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, average of numbers
 *
 *  This program reads a list of numbers from the
 *  user, calculates the average of the numbers
 *  and prints the same.
 *
 */
#include <iostream>
#include <lib.hpp>

int main()
{
  // accept and assign the numbers to the vector
  std::cout
      << "Please enter the numbers for average calculation, followed by end-of-file: ";
  std::vector<double> vect;  ///< vector to store the numbers
  double x;  ///< temporary variable to accept the numbers
  while (std::cin >> x) {
    vect.push_back(x);
  }
  std::cout << std::endl;
  std::cout << std::endl << "The average of all the numbers entered is : "
            << average(vect) << std::endl;
    return 0;
}
