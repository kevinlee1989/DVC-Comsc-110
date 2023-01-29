//Objective:   Input any number of movie titles and year each movie was created from file movieData.txt and store on a list.
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <deque> //collection
#include <fstream>
#include <iostream>
using namespace std;
#include <cstdlib> //random number generator
#include <ctime>  //random number generator


//Programmer defined data types
struct Movies
{
  string title;
  int year;
};//Movies

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
void inputMovies(deque<Movies>& movie); //read input file and create a list
int askMovie(deque<Movies>& movie, int random); // ask user whether they got the question right or wrong
char yOrN(); // ask user to play again or add another movie to the list
void outputList(deque<Movies>& movie); //output the list
void sortList(deque<Movies>& movie); // sort list of movies with year

//main program
int main()
{
  //Data
  string objective = "The program will Input any number of movie titles and year each movie was created from file movieData.txt and store on a list.\n"; //program objective
  string instructions = "Guess what year that movie was made only by numbers.\n\n"; //user instructions 
  deque<Movies> movie; // create an empty collection 
  srand(time(0)); rand(); //"seed" the random number generator
  int userGuessYear; // user guessing the year of the movie which is chosen by the random generator
  int result;//determine whether they got the question right or wrong
  char answer; //user answer whether they want to play again or add the another movie to the list 
  int i; //for index loop

  //user introduction
  introduction(objective, instructions);

  //read input file and create a list
  inputMovies(movie);

  //check whether the user guess right or wrong and ask to play it again or add another movie to the list
 do
 {
  int random = rand() % movie.size();
  result = askMovie(movie,random);
  if (result == 0)
  {
   cout << " You are correct! "<< endl ;
  }//correct
  if (result ==1)
  {
   cout << " You guess it wrong! it was made in " << movie[random].year <<endl;
  }//wrong
  answer = yOrN();
 }while(answer == 'y' || answer =='Y');

  //output sorted movie title and year
  outputList(movie);

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

  //read input file and create a list
void inputMovies(deque<Movies>& movie)
{
  //data
  ifstream fin; //for file input
  string fileName = "movieData.txt"; //for open the file
  Movies amovie; // updation a movie from input file 

  //read file
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  //create a list
  while(fin.good())
  {
  getline(fin, amovie.title);
  fin >> amovie.year;
  fin.ignore(1000,10);
  fin.ignore(1000,10);
  movie.push_back(amovie);
  }

}


// ask user whether they got the question right or wrong
askMovie(deque<Movies>& movie, int random)
{
  //data
  int userGuessYear; // user guessing the year of the movie which is chosen by the random generator
  int result; //determine whether user guess is right or wrong

  cout << "Guess what year is " << movie[random].title <<" movie was made? [valid input : numbers]: ";
  cin >> userGuessYear;
  cin.ignore(1000,10);

  if (movie[random].year == userGuessYear)
  {
   result = 0;
  }//correct
  else
  {
   result = 1;
  }
  return result;
}//askMovie

char yOrN()
{
  //data 
  char userAnswer; //user answer to play again or add another movie to the list
  char resultAnswer; // value return to main function

  //ask the user to play again
  while(true)
 {
  cout << "Do you want to play again or want to add another movie to the list? ";
  cin >> userAnswer;
  cin.ignore(1000,10);
  if (userAnswer == 'y' || userAnswer == 'Y')
  {
   resultAnswer = 'y';
   break;
  }
  else if (userAnswer =='n' || userAnswer == 'N')
  {
   resultAnswer = 'n';
   cout << endl;
   break;
  }
  else
  {
   cout << " I can not understand whether you want to play again or add another movie! " << endl;
  }
 }//while
 return resultAnswer;
}//yOrN

// sort list of movies with year
void sortList(deque<Movies>& movie)
{
   //data
  //movie is collection list of the input file
  int i; // outer loop index
  int j; // inner loop index
  int swapy; //used for sort swap
  string swapt; //used for sort swap

  // sort the array
  for (i = 0; i <movie.size(); i++) 
  {
    for (j = i + 1; j <movie.size(); j++) 
    { 
      if (movie[i].year>movie[j].year) 
      { 
        // swap code 
        swapy = movie[i].year; 
        movie[i].year = movie[j].year;   
        movie[j].year = swapy; 
        swapt = movie[i].title; 
        movie[i].title = movie[j].title;   
        movie[j].title = swapt; 
      } // if 
    } // for j
  } // for i
}//sort




void outputList(deque<Movies>& movie)
{
  //data
  int i; //for index loop

  sortList(movie);
  for(i=0;i<movie.size();i++)
  {
   cout << movie[i].title << "  " << movie[i].year << endl;
  }
}//outputList