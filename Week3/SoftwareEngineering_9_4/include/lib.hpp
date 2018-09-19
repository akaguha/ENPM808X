/**
 *  Copyright 2018 Akash Guha
 *  @file    lib.hpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/18/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, functions to compute the starting
 *  position of the string in given text
 *
 */
#pragma once

#include<iostream>
#include<string>
/**
 *   @brief  computing the starting position of the given
 *   text in a given string
 *
 *   @param
 *   @return int
 */
int stringPosition(const std::string &text,
                   const std::string &array_to_search1) {
  int x;  //> starting location of the substring
  // function that finds the substring and returns the location
  x = text.find(array_to_search1);
  // checks if x == -1 then displays the message and assigns -1 to it
  if (x == std::string::npos) {
    std::cout << "String not found" << std::endl;
    x = -1;
  }
  return x;
}
/**
 *   @brief  initializes the text and the substring and
 *   prints the location value
 *
 *   @param  none
 *   @return void
 */
void printPosition() {
  int position1;  //> holds the starting location of the substring
  const std::string text = "1234567890";  // input text
  const std::string array_to_search1 = "23";  // substring to be searched
  position1 = stringPosition(text, array_to_search1);
  std::cout << position1;  // prints the location value on the terminal
}

