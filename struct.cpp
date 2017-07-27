#include <iostream>
#include <fstream>

using namespace std;
//turn off packing
#pragma pack(push,1) //align data on whatever follows (the struct) on single byte boundaries
//results in no padding and shows the true size of the Struct below

struct Person {
	char name[50];
	int age;
	double height;	
};
#pragma pack(pop) //turn back on packing 


int main() 
{





	Person someone = {
		"Omar",
		25,
		5.6
	};
	//prints 64 even though bite size is 62, extra 2 bytes are "Padding"
	//cout << sizeof(Person) << endl;

	string fileName = "test.bin"; //doesn't have to be bin



	/* WRITE BINARY FILE */

	fstream outputFile;

	//ios::binary|ios::out use bitwise OR to allow output w/ binary
	outputFile.open(fileName, ios::binary|ios::out); //needs to be binary b/c 'out' is default format w/ new line characters


	if(outputFile.is_open()){

		//reinterpret_cast<char *>(variable_to_cast) 
		//is new alternative to (char *)(variable_to_cast)
		//write to the address of the struct
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outputFile.close();
	}

	else {
		cout << "Could not create file " + fileName;
	}

	/* READ BINARY FILE */

	Person someoneElse = {};
	fstream inputFile;

	//ios::binary|ios::in use bitwise OR to allow input w/ binary
	//needs to be binary b/c 'in' is default format w/ new line characters


	inputFile.open(fileName, ios::binary|ios::in); 
	if(inputFile.is_open()){

		//reinterpret_cast<char *>(variable_to_cast) 
		//is new alternative to (char *)(variable_to_cast)
		//write to the address of the struct
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inputFile.close();
	}

	else {
		cout << "Could not read file " + fileName;
	}


	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
	return 0;
}
