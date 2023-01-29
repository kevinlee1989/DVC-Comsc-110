//Objective: randomly select and output titles in a loop until the user wishes to stop
//Name: Kevin Jaewoo Lee 1989282
//Course: COMSC-110-1572
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <deque>
#include <fstream> 
#include <iostream>
using namespace std;
#include <cstdlib> //random number generator
#include <ctime>  //random number generator

//Programmer defined data types
struct Music
{
  string name;
};// Music

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction

//main program
int main()
{
  //Data
  string objective = "The program will randomly select and output titles in a loop until the user wishes to stop\n"; //program objective
  string instructions = "Just answer whether you want to play a song or not\n\n"; //user instructions 
  ifstream fin; 
  const int MAX_SONGS = 200; // list capacity 
  int nSongs = 0; // initially empty 
  string songs[MAX_SONGS];
  char answer;
  srand(time(0)); rand(); //"seed" the random number generator
  deque<Music> music;
  Music amusic;
  int i;

  //user introduction
  introduction(objective, instructions);

 //read input file
  fin.open("songs.txt"); 
  if (!fin.good()) throw "I/O error";

  //output prompt
  while(true)
 {
  cout << "play a song [Y/N]?: ";
  cin >> answer;
  cin.ignore(1000,10);
  int random = 0 + rand() % 200; //random song generator
  //save input file to list
  while (fin.good()) 
  { 
    string aSongs; // temporary storage for new score
    getline(fin,aSongs);

    // add new score to list, if list is not full 
    if (nSongs < MAX_SONGS) 
     {
      songs[nSongs++] = aSongs; 
     } //if
  } // while file
 //determine whether it was played last 5 times
 while(true)
 {
  int count =0;
  random = 0 + rand() % 200; 
  for(i=0;i<music.size();i++)
  {
  if(music[i].name == songs[random]) count = count + 1;
  }
  if(count ==0) break;
 }
  //user answer
  if( answer == 'y' || answer =='Y')
  {
   cout << songs[random] << endl;
   //store the last 5 played songs
   amusic.name = songs[random];
   music.push_back(amusic);
   if ( music.size() >5)
   {
    music.pop_front();
   }
  }
  else if( answer == 'n' || answer =='N') break;
  else
  {
   cout << "Can not understand, I will just play another song " <<endl;
  }
 }
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