//Objective: calculate the monthly payment on borrowed amount of money to be paid back over 30 years.

//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iomanip> //formatting
#include <iostream> //console output
using namespace std;
#include <cmath> //power function

//Programmer defined data types
struct Mortgage
{
  int amountBorrowed; //dollar amount to be borrowed
  double interestRate ; //annual percent interest rate
  double monthlyPayment; //monthly payment borrower pays on the  mortgage
  double p; //the mortgage amount as entered by the user
};//Mortgage

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
string getFileName();

//main program
   #include <stdio.h>
  
   int main()
   {
           int A,B,count=0;
           scanf("%d %d",&A,&B);
  
           if(A>B){
  
              int temp=A;
              A=B;
              B=temp;
           do{
                      A*2;
                     count++;
              }while(A<B);
 
 
            printf("%d\n",count);
          }
 
          else if(A==B){
 
                  printf("Both numbers are same\n");
         }
 
          else{
          do{
                  A*2;
                  count++;
          }while(A<B);
 
         printf("%d\n",count);
        }
 
         return 0;
 }