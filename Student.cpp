#include "Student.h"
#include <iostream>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int Std , char Sname[]) 
{
  StudentId = Std;
  strcpy(studentname , Sname);
}

// Display StudentId and Name
void Student::display() 
{
 cout << "Student Id" << StudentId<< endl;
 cout << "Student Name" << studentname << endl;
}
