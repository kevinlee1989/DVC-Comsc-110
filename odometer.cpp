//Objective:  simulates a car odometer in a car traveling 1 mile every second.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip> //formatting
#include <iostream>  //console I/O
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
#ifdef _WIN32
 #include <windows.h>
 #else
 #include <unistd.h>
 #endif 

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int tenths; //represents the tenths of a car odometer [valid value: 0-9]
  int ones;  //represents the ones of a car odometer [valid value: 0-9]
  int tens;  //represents the tens of a car odometer [valid value: 0-9]
  int hundreds; //represents the hundreds of a car odometer [valid value: 0-9]
  int thousands; //represents the thousands of a car odometer [valid value: 0-9]
  int tensOfthousands; //represents tens of thousands of a car odometer [valid value: 0-9]
  int hundredsOfthousands; //represents hundreds of thousands of a car odometer [valid value: 0-9]


  // introduction
  cout << "Objective: This program will simulates a car odometer in a car traveling 1 mile every second..\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl;
  cout << "Instructions: CTRL-C to exit...\n" << endl << endl;
  cout.fill('0');
  
  //output car of odometer
 cout.fill('0');
  for (hundredsOfthousands = 0; hundredsOfthousands < 10; hundredsOfthousands++) 
  { 
    for (tensOfthousands = 0; tensOfthousands < 10; tensOfthousands++) 
    { 
      for (thousands = 0; thousands < 10; thousands++) 
      { 
       for (hundreds = 0; hundreds < 10; hundreds++) 
       { 
        for (tens = 0; tens < 10; tens++) 
        { 
         for (ones = 0; ones < 10; ones++) 
         { 
           for (tenths = 0; tenths < 10; tenths++) 
          { 
        cout << setw(1) << hundredsOfthousands; 
        cout << setw(1) << tensOfthousands; 
        cout << setw(1) << thousands; 
        cout << setw(1) << hundreds;
        cout << setw(1) << tens;
        cout << setw(1) << ones;
        cout << setw(1) << "." << tenths;
        cout.flush(); 
  
        #ifdef _WIN32
        Sleep(100); // one thousand milliseconds  
        #else 
        sleep(1); // one seconds 
        #endif 
  
        cout << '\r'; // CR
          } //for tenths loop
         } //for ones loop
        } //for tens loop
       } //for hundreds loop
      } //for thousands loop
    } //for tensOfthousands loop
  } //for hundredsOfthousands loop
 }//main