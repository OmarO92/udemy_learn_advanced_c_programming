#include <iostream>
#include <fstream> //filestream (objects we use to write/read data)
using namespace std;


int main() {

	//ofstream outFile;
	fstream outFile;
	string outputFileName = "text.txt";
	//outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if(outFile.is_open()) {
		outFile << "Hello, World!" << endl;
		outFile << "One" << endl;
		outFile.close();

	}else {
		cout << "could not create file: " << outputFileName << endl;
	}

	return 0;
}
