#pragma once

#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> readString()
{
  std::vector<std::string> vect;
  std::string x;
  while (std::cin >> x) {
    vect.push_back(x);
  }
  return vect;
}
