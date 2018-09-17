//Author: Alexander Gonzalez
//Date: 09/13/17
//Purpose:Student class demo.
#include <string>
#include <iostream> 
#include "Student.h"
using namespace std;

int main (){
  Student student("Alex",23232323);
  student.setGradeInt(80);
  student.setGradeLetter(85);
  student.toString();
}
