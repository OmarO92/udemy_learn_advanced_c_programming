#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream inFile;

	string inputFileName = "test.txt";


	inFile.open(inputFileName,ios::in);

	if(inFile.is_open()) {

		string line;

		//inFile >> line; //reads only 1 word of 1 line


		//while(!inFile.eof()){
		while(inFile){ //bool is overloaded so we don't need eof
			getline(inFile, line);//reads whole line

			cout << line << endl;
		}
		inFile.close();
	}
	else {

		cout << "Cannot open file: " << inputFileName << endl;
	}



	return 0;
	}
