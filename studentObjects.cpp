//Objective: The program will provide a program to manage the records of students.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
struct student
{
 string name;
 string address;
 string city;
 string state;
 int zip;
 char gender;
 int studentid;
 double gpa;
}; //Students

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
student geta(student& x, int b);
void output(student& x, int c);

//main program
int main()
{
  //Data
  string objective = "The program will provide a program to manage the records of students.\n"; //program objective
  string instructions = "write the personal information for each of 3 students, one 
student at a time.\n"; //user instructions 

  //user introduction
  introduction(objective, instructions);
  
  //input student personal information
  student a = geta(a,1);
  student b = geta(b, 2);
  student c = geta(c, 3);

  // output student personal information
  output(a,1);
  output(b,2);
  output(c,3);

}//main


//user introduction
void introduction(string obj, string ins)
{
  //data
  //obj is the program objective
  //ins is the user instructions

  //user introduction
  cout << "Objective: " << obj; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << "Instructions: " << ins;
}//introduction

student geta(student& x, int b)
{
  student a;
  cout  << endl << "Enter for Student " << b << endl;
  cout << "Name: ";
  getline(cin, x.name);
  cout << "Address: ";
  getline(cin, x.address);
  cout << "City: ";
  getline(cin, x.city);
  cout << "State: ";
  getline(cin, x.state);
  cout << "Zip [numbers only]: ";
  cin >> x.zip;
  cin.ignore(1000,10);
  cout << "Gender [M/F]: ";
  cin >> x.gender;
  cin.ignore(1000,10);
  cout << "Student ID [numbers only]: ";
  cin >> x.studentid;
  cin.ignore(1000,10);
  cout << "GPA [numbers only]: ";
  cin >> x.gpa;
  cin.ignore(1000,10);
  return a;
}// geta

void output(student& x, int c)
{
  cout << endl << "Output for student " << c << endl;
  cout << "Name: " << x.name<< endl;
  cout << "Address: " << x.address<< endl;
  cout << "City: " << x.city<< endl;
  cout << "State: " << x.state<< endl;
  cout << "Zip [numbers only]: " << x.zip<< endl;
  cout << "Gender [M/F]: " << x.gender<< endl;
  cout << "Student ID [numbers only]: " << x.studentid<< endl;
  cout << "GPA [numbers only]: " << x.gpa<< endl;
}//output student