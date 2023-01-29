//Objective:  template for C++ programs and to test code
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
int add(int,int);

//main program
int main()
{
int num1;
int num2;
int abcd;

cout << "Input first number: ";
cin >> num1;
cout << "Input second number: ";
cin >> num2;

 abcd = add(num1,num2);

cout <<  num1 < "+" << num2 << "=" << abcd;

}//main

int add(int a, int b){

return a+ b;
}