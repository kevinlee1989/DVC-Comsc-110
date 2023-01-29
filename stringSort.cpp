//Objective:  sort the data in an array
//Name: Teacher
//Course: COMSC-110-5003
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <string> 
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int SIZE = 7; //size of array day

//Programmer defined functions
void introduction(string obj); //program introduction
void outputArray(string* a);
void sortArray(string* a); //sort the values in the array
//main program
int main()
{
  //Data
  string objective = "sort the data in an array"; //program objective
  const int SIZE = 7; //size of array day
  string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; //days of the week
 
  //user introduction
  introduction(objective);  

  // output contents of the array, in original order
  cout << "Unsorted: "; 
  outputArray(day);
  cout << endl; 

  // sort the array
  sortArray(day);

  // output array in alphabetical order
  cout << endl << "Sorted: "; 
  outputArray(day);
  cout << endl; 
}//main

// introduction
void introduction(string obj)
{
  //data
  //obj is the program objective

  //user introduction
  cout << "Objective: This program will "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}//introduction

  //traverse array for output 
  void outputArray(string* a)
 {
  int t;
  for (t=0; t<SIZE; t++)
  cout << a[t] << ' '; 
 }//outputArray

  //sort the values in the array
void sortArray(string* a)
{
  //data
  //a is array of day passed by reference from main
  int i; // outer loop index
  int j; // inner loop index
  string temp; //used for sort swap

  // sort the array
  for (i = 0; i < SIZE; i++) 
  {
    for (j = i + 1; j < SIZE; j++) 
    { 
      if (a[i] > a[j]) 
      { 
        // swap code 
        temp = a[i]; 
        a[i] = a[j];   
        a[j] = temp; 
      } // if 
    } // for j
   cout << endl << "Sort progress  cycle " << i << ": ";
   outputArray(a);
  } // for i
}//sortArray