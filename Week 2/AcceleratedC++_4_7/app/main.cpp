#include <iostream>
#include <lib.hpp>

int main()
{
  std::cout
      << "Please enter the numbers for average calculation, followed by end-of-file: ";
  std::vector<double> vect;
  double x;
  while (std::cin >> x) {
    vect.push_back(x);
  }
  std::cout << std::endl << "The average of all the numbers entered is : "
            << average(vect);
    return 0;
}
