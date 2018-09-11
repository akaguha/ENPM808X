#include <iostream>
#include <lib.hpp>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  std::vector<std::string> name;
  std::vector<double> finalGrades;

  // ask and read number of students
  int numStudents;
  std::cout << "Please enter the number of students: ";
  std::cin >> numStudents;

  while (numStudents > 0) {

    // ask and read student's name
    std::cout << "please enter student's first name: ";
    std::string inputName;
    std::cin >> inputName;

    name.push_back(inputName);  //store the current name to the vector

    // ask and read midterm and final exam grades
    std::cout << "Please enter student's midterm and final exam grades: ";
    double midterm, final;
    std::cin >> midterm >> final;

    // ask for and read five homework grades
    std::cout << "Enter your five homework grades" << std::endl;
    double x;
    std::vector<double> homework(5);
    for (int i = 0; i < 5; i++) {
      std::cin >> x;
      homework.push_back(x);
    }

    // checking if student entered any homework grades
    if (homework.size() == 0) {
      std::cout << "You must enter student's homework grades. Please try again."
                << std::endl;
      return 1;
    }

    //sorting the gardes in non-decending order
    sort(homework.begin(), homework.end());

    //computing the median of the homework gardes
    double median = homework[homework.size() / 2];

    //compute the final grade and push it into the finalgrade vector
    double calFinalGrade = (0.2 * midterm) + (0.4 * final) + (0.4 * median);
    finalGrades.push_back(calFinalGrade);
    numStudents--;
  }
  std::cout << "The final grades are," << std::endl;
  for (std::vector<int>::size_type i = 0; i != name.size(); i++) {
    std::cout << name[i] << " scored: " << finalGrades[i] << std::endl;
  }

  //dummy();
    return 0;
}
