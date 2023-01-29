#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main() {

	ifstream movies;
	vector<string> column1;
	vector<string> column2;
	vector<string> column3;
	string filename;
	
	getline(cin, filename);
	movies.open(filename);

	if(movies)
	{

		string inform;
		string time;
		string title;
		string data;
		string temp;
		while(getline(movies, inform))
		{
			time = inform.substr(0,inform.find(','));
			title = inform.substr(inform.find(',')+1,inform.rfind(',')-6);
			data = inform.substr(inform.rfind(',')+1,5);

			column1.push_back(time);
			column2.push_back(title);
			column3.push_back(data);

		}
		bool duplicate = false;
			for(int i =0; i<column2.size();i++){
				cout << i << endl;
				if( column2[i] == column2[i+1] && column2[i] != column2[i+2] && !duplicate){
					cout << setw(44) << left << column2[i].substr(0,44) << " | ";
					cout << setw(5) << right << column3[i]<< " | ";
					cout << column1[i] << " " << column1[i+1] << endl;
					duplicate = true;
					
				}
				else if(  column2[i] == column2[i+1] && column2[i] == column2[i+2] && column2[i] != column2[i+3] && !duplicate){
					cout << setw(44) << left << column2[i].substr(0,44) << " | ";
					cout << setw(5) << right << column3[i]<< " | ";
					cout << column1[i] << " " << column1[i+1] << " " << column1[i+2]  << endl;
					duplicate = true;
				}

				else if( column2[i] == column2[i+1] && column2[i] == column2[i+2] && column2[i] == column2[i+3] && !duplicate){
					cout << setw(44) << left << column2[i].substr(0,44) << " | ";
					cout << setw(5) << right << column3[i]<< " | ";
					cout << column1[i] << " " << column1[i+1] << " " << column1[i+2] << " " << column1[i+3] << endl;
					duplicate = true;
				}
				else if( column2[i-1] == column2[i] && column2[i] != column2[i+1] && duplicate){
					duplicate = false;
				}
				else if( column2[i] != column2[i+1] && !duplicate){
					cout << setw(44) << left << column2[i].substr(0,44) << " | ";
					cout << setw(5) << right << column3[i]<< " | ";
					cout << column1[i] << endl;
					duplicate = false;
				}
				
			}

				
			
	}

   return 0;
}