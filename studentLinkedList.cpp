//Objective:  outputting the formatted table of students.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


//Programmer defined data types
struct Student
{
  string name;
  int id;
  float gpa;
  Student* next; // the next-link
}; // Student

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
void getInformation( int nStudent, Student* start);

//main program
int main()
{
  //Data
  string objective = "This program will output the formatted table of students..\n"; //program objective
  string instructions = "Just watch...\n\n"; //user instructions 
  //user introduction
  introduction(objective, instructions);

  // open a file for input
  ifstream fin;
  fin.open("students.txt");
  if (!fin.good()) throw "I/O error";
  int nStudent =0;
 
  // create an empty linked list
  Student* start = 0;
 
  // read and save the records
  while (fin.good())
  {
    // Step 1, create a node
    Student* aStudent = new Student;

    // Step 2, read its data fields
    getline (fin, aStudent->name);

    fin >> aStudent->id;
    nStudent = nStudent + 1;
    fin.ignore(1000, 10);
 
    fin >> aStudent->gpa;
    fin.ignore(1000, 10);
 
    fin.ignore(1000, 10); // skip the separator line

    // Step 3, add new node to the list
    aStudent->next = start;
    start = aStudent;
  }
  fin.close();
  getInformation(nStudent,start);
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

void getInformation( int nStudent, Student* start)
{
  Student* c;
  cout << "There are " << nStudent << " students in this file! " << endl ;
  for (c = start; c; c = c->next)
  {
    cout << "Name = " << left << setw(30) << c->name;
    cout.fill('0'); 
    cout << " ID = " << right << setw(7) << c->id
      << ", gpa = " << c->gpa << endl;
    cout.fill(' '); 
  }
}
