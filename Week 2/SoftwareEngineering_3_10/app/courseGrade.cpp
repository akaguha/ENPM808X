/*
 *  @file courseGrade.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief class to calculates the total GPA, modifies
 *  grade and lists the student grades
 */

#include "courseGrade.h"

/**
 *   @brief  Default  constructor for courseGrade
 *   @return nothing
 */
courseGrade::courseGrade() {
  // TODO Auto-generated constructor stub
  studGrades.push_back(3.5);
  studGrades.push_back(3.8);
  studGrades.push_back(3.3);
  studGrades.push_back(3.2);
  studGrades.push_back(3.9);
  studGrades.push_back(4.0);
  studGrades.push_back(3.0);
}

/**
 *   @brief  Default destructor
 *
 *   @return nothing
 */
courseGrade::~courseGrade() {
  // TODO Auto-generated destructor stub
}

/**
 *   @brief  calculates the final GPA
 *
 *   @return GPA as a double
 */
double courseGrade::computeGPA() {
  double sum = 0;  ///< accumulates the sum of all the grades
  for (int i = 0; i < studGrades.size(); i++)
    sum += studGrades[i];

  return sum / studGrades.size();
}

/**
 *   @brief  modifies the student grades
 *
 *   @param  loc is the vector index to be modified
 *   @param  newGrade if the new grade value to be updated
 *   @return nothing
 */
void courseGrade::changeGrade(int loc, double newGrade) {
  studGrades[loc] = newGrade;
}

/**
 *   @brief  prints the list of students with their corresponding grades
 *
 *   @return nothing
 */
void courseGrade::listStudentGrades() {
  int i = 0;  ///< student IDs
  for (auto& x : studGrades) {
    i++;
    std::cout << "Student_ID " << i << " has GPA: " << x << std::endl;

  }
}

