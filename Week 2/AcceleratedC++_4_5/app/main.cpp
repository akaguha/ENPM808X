/**
 *  @file    main.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Number of words in input string
 *
 *  @section DESCRIPTION
 *
 *  This program reads the input string and
 *  prints the number of words in the string, followed
 *  by the count of each words.
 *
 */
#include <iostream>
#include <lib.hpp>
#include <algorithm>
#include <string>

int main()
{
  std::vector<std::string> vect;  ///< vector to store the words

  // read and assign the string words as vector elements
  std::cout << "Enter a string, followed by end-of-file: ";
  vect = readString();  // function to read the input string

  int count = vect.size();  ///< vector size

  if (count == 0)
    std::cout << "Nothing to count" << std::endl;

  std::cout << std::endl;
  std::cout << "Number of words in the string is: " << count << std::endl;

  int num = 1;  ///< counter initialization, keeps track of word count

  std::sort(vect.begin(), vect.end());  // sorting the vector in nondecending order

  std::string prevWord = vect[0];  ///< previous word

  // computing the count of each word
  std::cout << "Count of each word is," << std::endl;
  for (std::vector<std::string>::size_type i = 1; i < count; i++) {
    if (vect[i] == prevWord) {
      num++;
    }
    else {
      std::cout << prevWord << " - " << num << std::endl;
      prevWord = vect[i];
      num = 1;
    }
  }

  std::cout << prevWord << " - " << num << std::endl;

    return 0;
}
