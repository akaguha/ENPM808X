/*
 *  @file courseGrade.h
 *  @author  Akash Guha (akaguha@terpmail.umd.edu)
 *  @date    09/10/2018
 *  @version 1.0
 *
 *  @brief class to calculates the total GPA, modifies
 *  grade and lists the student grades
 *
 */

#ifndef APP_COURSEGRADE_H_
#define APP_COURSEGRADE_H_
#include <vector>

class courseGrade {
 private:
  std::vector<double> studGrades;  //< vector to store the student grades
 public:
  // Default constructor
  courseGrade();
  // Destructor
  virtual ~courseGrade();
  // calculates the final class GPA
  double computeGPA();
  // replaces the student's old grade with new grade at student_id = loc
  void changeGrade(int loc, double newGrade);
  // prints the list of students and their corresponding GPAs
  void listStudentGrades();

};

#endif /* APP_COURSEGRADE_H_ */
