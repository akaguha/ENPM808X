#include <iostream>
#include <lib.hpp>
#include <algorithm>
//#include <stdexcept>

int main()
{
  //typedef std::unordered_map<std::string, int> wordFreq;
  std::cout << "Enter a string, followed by end-of-file: ";
  std::vector<std::string> vect;
  vect = readString();
  int count = vect.size();
  if (count == 0)
    //throw domain_error("Nothing to count");
    std::cout << "Nothing to count" << std::endl;
  std::cout << std::endl;
  std::cout << "Number of words in the string is: " << count << std::endl;

  std::sort(vect.begin(), vect.end());
  for (std::vector<std::string>::size_type i = 1; i < count; ++i) {
    if (vect[i - 1] == vect[i]) {

    }
  }
  /*for (std::vector<std::string>::size_type i = 0; i < count; ++i) {
    std::cout << vect[i] << ": ";
   int num = 0;
    for (std::vector<std::string>::size_type j = 1; j < count; ++j) {
      if (vect[i] == vect[j]) {
        vect.erase(vect.begin() + j);
        num++;
      }
    }
    vect.erase(vect.begin() + i);
    std::cout << num << std::endl;
   }*/
  //dummy();
    return 0;
}
