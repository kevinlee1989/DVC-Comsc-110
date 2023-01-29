//Objective:  read names in a text file, sort them alphabetically, and output them to the screen with these specifications:
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream> //console IO 
#include <string> // string manipulation
using namespace std;
#include <cctype> //using toupper

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int MAX_SIZE = 5; //size of array day

//Programmer defined functions
void introduction(string obj); //program introduction
void outputArray(string* a);
void sortArray(string* a); //sort the values in the array
string changeCase(string s); //change the case of the value to all uppercase
string getFileName();

//main program
int main()
{
  //Data
  string objective = "read names in a text file, sort them alphabetically, and output them to the screen with these specifications:"; //program objective
  string s;
  int nNames; 
  string names[MAX_SIZE]; //friends name
  string fileName;
  ifstream fin;
  string aNames; // temporary storage for new name
  int i;
 
  //user introduction
  introduction(objective);  

  //read input file
  fileName = getFileName();
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  // read and save the names
  while (fin.good()) 
  { 
    // read a score from the file 
    fin >> aNames; 
    fin.ignore(1000, 10); 
    int count=0;
  
  for (i=0; i < nNames; i =i + 1)
  {
   if (aNames == names[i])
   {
    count = 1;
   }
  }//for i traverse list to check for duplicate

    // add new score to list, if list is not full 
    if (count == 0 && nNames < MAX_SIZE) 
      names[nNames++] = aNames; 
  } // while 
  fin.close(); 

  // sort the array
  sortArray(names);

  // output array in alphabetical order
  cout << endl << "Sorted: "; 
  outputArray(names);
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
  int i;
  for (i=0; i<MAX_SIZE; i++)
  cout << a[i] << endl; 
 }//outputArray

  //sort the values in the array
void sortArray(string* a)
{
  //data
  //a is array of day passed by reference from main
  int i; // outer loop index
  int j; // inner loop index
  string swap; //used for sort swap

  // sort the array
  for (i = 0; i < MAX_SIZE; i++) 
  {
    for (j = i + 1; j < MAX_SIZE; j++) 
    { 
      if (changeCase(a[i]) > changeCase(a[j])) 
      { 
        // swap code 
        swap = a[i]; 
        a[i] = a[j];   
        a[j] = swap; 
      } // if 
    } // for j
  } // for i
}//sortArray

//change the case of the value to all uppercase
string changeCase(string s)
{
  //data
  //s is the string being converted to all uppercase character
  string result=s; //s converted to all uppercase characters
  int i; //loop index

  //convert string s to all uppercase characters
  for(i=0; i<s.length(); i++)
  {
   result[i] = toupper(s[i]);
  }
  return result;
}//changeCase

//get user specified filename
string getFileName()
{
  //data
  string fN;

  //input filename
  do
  {
    cout << "Please enter an input filename [i.e. : x.txt] : ";
    getline(cin,fN);
  }while(!(fN.length() >=5)); // do-while
    return fN;
}//getFileName