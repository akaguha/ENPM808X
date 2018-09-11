#pragma once

#include<iostream>
#include<vector>

double average(std::vector<double> vect)
{
  double sumOfNums = 0;
  for (auto& n : vect)
    sumOfNums += n;
  std::vector<double>::size_type vectSize = vect.size();
  return sumOfNums / vectSize;

}
