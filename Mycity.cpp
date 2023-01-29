//Objective:  output the forecasted high temperatures for any 5-day period for a selected city
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
  string city = "Pleasant Hill, CA"; // name of the selected city and state
  int day1Temp = 97; //1st day's high temperature in the city we selected as measured in degrees Farenheit
  int day2Temp = 99; //2nd day's high temperature in the city we selected as measured in degrees Farenheit
  int day3Temp = 93; //3rd day's high temperature in the city we selected as measured in degrees Farenheit
  int day4Temp = 88; //4th day's high temperature in the city we selected as measured in degrees Farenheit
  int day5Temp = 87; //5th day's high temperature in the city we selected as measured in degrees Farenheit
  string day1Date = "Tuesday, Sep 7"; //day of the week, month and day
  string day2Date = "Wednesday, Sep 8"; //day of the week, month and day
  string day3Date = "Thursday, Sep 9"; //day of the week, month and day
  string day4Date = "Friday, Sep 10"; //day of the week, month and day
  string day5Date = "Saturday, Sep 11"; //day of the week, month and day

  // introduction
  cout << "Objective: This program will output the forecasted high temperatures for any 5-day period for a selected city\n"; 
  cout << "Programmer: Kevin Jaewoo Lee 1989282\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //output the forecasted high temperatures for those 5 days
  cout << city <<  " forecast high temperatures:" << endl;
  cout << day1Date << day1Temp << "degrees" << endl;
  cout << day2Date << day2Temp << "degrees" << endl;
  cout << day3Date << day3Temp << "degrees" << endl;
  cout << day4Date << day4Temp << "degrees" << endl;
  cout << day5Date << day5Temp << "degrees" << endl;

}//main