//Author: Alexander Gonzalez
//Date: 09/13/17
//Purpose:Student class. Contains student ID # and Student Name.
#include <string>
#include <iostream> 
using namespace std;
class Student {
 public:
  Student();
  Student(string studentName, int idNum);
  string getName();
  int getID();
  void setGradeInt(int grade);
  string getGradeLetter();
  void setGradeLetter(int grade);
  int getGradeInt();
  void toString();
 public:
  string name;
  int id;
  int numberGrade;
  string letterGrade;
};//end Student class

