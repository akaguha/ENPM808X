/**
 *  @file    main.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Tracking grades for several students
 *
 *  @section DESCRIPTION
 *
 *  This program accepts the number of students in a class,
 *  their first names, midterm, final exam and homework grades,
 *  followed by final grade computation.
 *
 */
#include <iostream>
#include <lib.hpp>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  std::vector<std::string> name;  ///< vector to store student names
  std::vector<double> finalGrades;  ///< student final grade

  // ask and read number of students
  int numStudents;  ///< Number of students in the class
  std::cout << "Please enter the number of students: ";
  std::cin >> numStudents;

  while (numStudents > 0) {

    // ask and read student's name
    std::cout << "please enter student's first name: ";
    std::string inputName;
    std::cin >> inputName;  ///< student first name

    name.push_back(inputName);

    // ask and read midterm and final exam grades
    std::cout << "Please enter student's midterm and final exam grades: ";
    double midterm, final;  ///< midterm and final grade
    std::cin >> midterm >> final;

    // ask and read five homework grades
    std::cout << "Enter your five homework grades" << std::endl;
    double x;  ///< temporary variable to store homework grades
    std::vector<double> homework(5);  ///< vector to store homework grades
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

  // prints the student names and corresponding final grades
  std::cout << "The final grades are," << std::endl;
  for (std::vector<int>::size_type i = 0; i != name.size(); i++) {
    std::cout << name[i] << " scored: " << finalGrades[i] << std::endl;
  }

    return 0;
}
