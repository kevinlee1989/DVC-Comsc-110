#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
         vector<string> perms;
	vector<string> names;

	if(nameList.size() == 0) {
        	int i;
       	 for(i=0;i<permList.size();i++){
                        if(i == permList.size()-1){
                        cout << permList[i] << endl;
                        }
                        else{
                                cout << permList[i] << ", ";
                        }
                }
        return;
    }
    for(int i=0; i<nameList.size(); i++) {
         perms = permList;
        perms.push_back(nameList[i]);
        names = nameList;
        names.erase(names.begin() + i);
        PrintAllPermutations(perms, names);

    }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;


   while(true){
   cin >> name;
   if(name == "-1"){
	break;
	}
   nameList.push_back(name);
   }
      PrintAllPermutations(permList,nameList);
   return 0;
}


