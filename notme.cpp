//Objective:  Delcare objects using an object specification and assign values to its data fields.
//Name: Justin Makela Guerrero 1784107
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <iostream>
using namespace std;

//Programmer defined data types
struct Student
 {
 string name;
 string address;
 string city;
 string state;
 int zip;
 char gender;
 int studentId;
 double gpa;

 }; //Students



//Special compiler dependent definitions
//NONE

//global constants/variables
const int size = 3;

//Programmer defined functions
void introduction(string obj,string ins); //user introduction
void display(Student a, Student b, Student c);

//Void Statements
void introduction(string obj,string ins)
{
  //data
  //obj is the program objective
  //ins is the user instructions

  // introduction 
  cout << "Objective:" << obj; 
  cout << "Programmer: Justin Makela-Guerrero\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << "instructions:" << ins;
}//introduction

void display(Student a, Student b, Student c)
{
  cout << "Output for Student 1" << endl;
  cout << "Name: "<< a.name <<endl;
  cout << "Address: " << a.address <<endl;
  cout << "City: " << a.city <<endl;
  cout << "State: " << a.state <<endl;
  cout << "Zip: " << a.zip <<endl;
  cout << "Gender: " << a.gender <<endl;
  cout << "ID: " << a.studentId <<endl;
  cout << "GPA: " << a.gpa <<endl;
  cout << endl;
  
  cout << "Output for Student 2" << endl;
  cout << "Name: "<< b.name <<endl;
  cout << "Address: " << b.address <<endl;
  cout << "City: " << b.city <<endl;
  cout << "State: " << b.state <<endl;
  cout << "Zip: " << b.zip <<endl;
  cout << "Gender: " << b.gender << endl;
  cout << "ID: " << b.studentId <<endl;
  cout << "GPA: " << b.gpa <<endl;
  cout << endl;

  cout << "Output for Student 3" << endl;
  cout << "Name: "<< c.name <<endl;
  cout << "Address: " << c.address <<endl;
  cout << "City: " << c.city <<endl;
  cout << "State: " << c.state <<endl;
  cout << "Zip: " << c.zip <<endl;
  cout << "Gender: " << c.gender <<endl;
  cout << "ID: " << c.studentId <<endl;
  cout << "GPA: " << c.gpa <<endl;
  cout << endl;
}


//main program
int main()
{
  //Data
  string objective = "Have a structure keep values with one value returing function.\n";//program objective
  string instructions = "Watch...\n";//user instructions
  Student a;
  Student b;
  Student c;

  //user introduction
  introduction(objective, instructions);

  cout << "Enter for Student 1" << endl;

  cout << "Name: ";
  getline(cin, a.name);

  cout << "Address: ";
  getline(cin, a.address);

  cout << "City: ";
  getline(cin, a.city);

  cout << "State: ";
  getline(cin, a.state);

  cout << "Zip [numbers only]: ";
  cin >> a.zip;
  cin.ignore(1000,10);

  cout << "Gender [M/F]: ";
  cin >> a.gender;
  cin.ignore(1000,10);

  cout << "Student ID [numbers only]: ";
  cin >> a.studentId;
  cin.ignore(1000,10);

  cout << "GPA [numbers only]: ";
  cin >> a.gpa;
  cin.ignore(1000,10);

  cout << endl << endl;

  cout << "Enter for Student 2" << endl;

  cout << "Name: ";
  getline(cin, b.name);

  cout << "Address: ";
  getline(cin, b.address);

  cout << "City: ";
  getline(cin, b.city);

  cout << "State: ";
  getline(cin, b.state);

  cout << "Zip [numbers only]: ";
  cin >> b.zip;
  cin.ignore(1000,10);

  cout << "Gender [M/F]: ";
  cin >> b.gender;
  cin.ignore(1000,10);

  cout << "Student ID [numbers only]: ";
  cin >> b.studentId;
  cin.ignore(1000,10);

  cout << "GPA [numbers only]: ";
  cin >> b.gpa;
  cin.ignore(1000,10);

  cout << endl << endl;

  cout << "Enter for Student 3" << endl;

  cout << "Name: ";
  getline(cin, c.name);

  cout << "Address: ";
  getline(cin, c.address);

  cout << "City: ";
  getline(cin, c.city);

  cout << "State: ";
  getline(cin, c.state);

  cout << "Zip [numbers only]: ";
  cin >> c.zip;
  cin.ignore(1000,10);

  cout << "Gender [M/F]: ";
  cin >> c.gender;
  cin.ignore(1000,10);

  cout << "Student ID [numbers only]: ";
  cin >> c.studentId;
  cin.ignore(1000,10);

  cout << "GPA [numbers only]: ";
  cin >> c.gpa;
  cin.ignore(1000,10);

  cout << endl << endl;

  display(a, b, c);

}//main


