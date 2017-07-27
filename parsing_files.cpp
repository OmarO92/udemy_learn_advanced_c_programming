#include <iostream>
#include <fstream>

using namespace std;


int main() 
{

	string fileName = "stats.txt";
	fstream inFile;

	inFile.open(fileName);

	if(!inFile.is_open()){
		return 1;
	}

	while(inFile){
		string line;
		int population;

		getline(inFile,line,':');	
		inFile >> population;

		//inFile.get();//discard the new line character
		inFile >> ws;//reads whitespace C++11
		if(inFile){
			cout << "'" << line << "'" <<  " -- " << population << endl;
		}	
	}

	inFile.close();

	return 0;
}
