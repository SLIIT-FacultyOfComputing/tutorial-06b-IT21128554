#include "Student.h"
#include <iostream>
#include<string>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Std , char Sname[]) 
{
  Id = Std;
  strcpy(name , Sname);
}

// Display StudentId and Name
void Student::display() 
{
 cout << "Student Id" << Id<< endl;
 cout << "Student Name" << name << endl;
}
