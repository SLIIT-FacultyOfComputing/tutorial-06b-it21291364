#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;
// Assign studentId and name
void Student::assignDetails(int stdId,const char stdName[20] ) {
  studentId=stdId;
  strcpy(name,stdName);
}

// Display StudentId and Name
void Student::display() {
 cout<<"Student name: "<<name<<endl;
 cout<<"Student ID:"<<studentId<<endl;
}
