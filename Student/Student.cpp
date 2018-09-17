//Author: Alexander Gonzalez
//Date: 09/13/17
//Purpose: .cpp file for Student.h file

#include "Student.h"   //   header fileusing
#include <iostream>
#include <string>
using namespace std;

Student::Student(){
  name="John Smith";
  id=111111111;
    }
Student::Student(string studentName,int studentID){
  name=studentName;
  id=studentID;
}
string Student::getName(){
  return name;
}
int Student::getID(){
  return id;
} 
void Student::setGradeInt(int grade){
  if(grade>=0&&grade<=100){
    numberGrade=grade;
  }
  else{
  cout<<"Please enter grade between 0 and 100"<<endl;
  }
}
int Student:: getGradeInt(){
  return numberGrade;
}
void Student:: setGradeLetter(int grade){
  if(grade<60){
    letterGrade='F';
      }
  if(grade<70&&grade>=60){
    letterGrade='D';
      }
  if(grade<80&&grade>=70){
    letterGrade='C';
      }
  if(grade<90&&grade>=80){
    letterGrade='B';
      }
  if(grade<100&&grade>=90){
    letterGrade='A';
      }
}
string Student:: getGradeLetter(){
  return letterGrade;
}
 void Student:: toString(){
   
   cout<<  "Name: "<<  getName()<< " Student ID: "<< getID()<< " Number Grade: "<<getGradeInt() << " Letter Grade: " <<getGradeLetter()<<endl; 
 }
