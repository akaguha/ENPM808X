/**
 *  @file    main.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Prints concatenated string from vector elements
 *
 *  @section DESCRIPTION
 *
 *  This program concatenates the elements of a vector into a string
 *  using accumulate function of the algorithm library. This accumulates
 *  all the values in range from first and last elements in the vector and
 *  initialized by a space.
 *
 */
#include <iostream>
#include <lib.hpp>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>

int main()
{
  // adding list of words to the vector
  std::vector<std::string> wordList;
  wordList.push_back("Monkeys");
  wordList.push_back("Like");
  wordList.push_back("Bananas");

  // concatenating the elements in the range specified by first and last element of the vector
  std::cout << "The concatenated string is," << std::endl;
  //std::for_each(wordList.begin(), wordList.end(), concat);
  //std::cout << std::endl;

  // concatenating the elements using accumulate function
  std::cout
      << std::accumulate(wordList.begin(), wordList.end(), std::string(" "))
      << std::endl;

    return 0;
}
