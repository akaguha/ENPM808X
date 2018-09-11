/**
 *  @file    main.cpp
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Calculates the class GPA
 *
 *  @section DESCRIPTION
 *
 *  This is the main function which prints all the student IDs and
 *  their corresponding GPAs for course 1, followed by modification
 *  of grades of two students and calculation of the final class
 *  GPA in both the cases.
 *
 */

#include <iostream>
#include "courseGrade.cpp"

int main()
{

  double classGPA, newClassGPA;  ///< variables for storing GPAs (out of 4.0)

  courseGrade course1;  // object of class courseGrade

  // printing the student IDs and their corresponding GPAs and calculating the final class GPA for course1
  std::cout << "List of Student GPAs," << std::endl;
  course1.listStudentGrades();
  classGPA = course1.computeGPA();
  std::cout << "The class GPA is: " << classGPA << std::endl;

  // changing the grades of students(id = 2 and 4) and  calculating and printing the final GPA
  course1.changeGrade(2, 3.0);
  course1.changeGrade(4, 3.0);
  std::cout << "List of Student GPAs after modification," << std::endl;
  course1.listStudentGrades();
  newClassGPA = course1.computeGPA();
  std::cout << "The new class GPA with modified grades is: " << newClassGPA
            << std::endl;

    return 0;
}
