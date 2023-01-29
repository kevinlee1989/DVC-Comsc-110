//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-5003
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int yearsLived = 24; //the number of years in which you've lived, including your birth year and the current year
  int nLeapYears = 5; //the number of leap years in your life , if you are born on leap year do not include a leap year same with birth year
  int nDaysBefore = 251; //the number of days in your birth year before you were born, including your day of birth
  int nDaysAfter = 113; //the number of days remaining in the current year after the due date for this lab, excluding that
  int days = 0; // the number of days the user lived by the due date of the assignment
  string dob = "Sept 9, 1998"; //the suer's date of birth [month, date, year]
  string dueDate = "Sept 9, 2021"; //the due date of the assignment [month,day,year]

  // user introduction
  cout << "Objective: This program will calculate how many days old you will be by the due date of this assignment.\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

 // Calculate how many days old the user will be by the assignment due date.
  days = days + (365 * yearsLived);
  days = days + nLeapYears;
  days =days - nDaysBefore;
  days = days - nDaysAfter;

  // Output results 
  cout << "DOB: " << dob << endl;
  cout << "Due: " << dueDate << endl;
  cout << "Age: " << days << " " << "days" << endl;

}//main