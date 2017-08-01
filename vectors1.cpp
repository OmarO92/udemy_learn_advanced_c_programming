//Name :vectors1.cpp

#include <iostream>
#include <vector> //reziable array


using namespace std;

int main() {


	vector<string> strings; //don't have to set a size

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	//can access vectors like arrays w/ [ ] 
	//	strings[3] = "Dog";


	//cout << strings[1] << endl;
	//cout << "Strings.size() : " << strings.size() << endl;


	//not recommended syntax
	for(int i = 0; i < strings.size(); i++){
		cout << strings[i] << endl;
	}
	cout << endl;

	for(vector<string>::iterator it = strings.begin(); 
			it != strings.end(); it++) {

		cout << *it << endl;
	}


	//iterator pointing to first element
	//	vector<string>::iterator it = strings.begin();

	//it++; //it'll increment to next item
	//cout << *it << endl;//dereferencing iterator to show element of vector


	//vector<string>::iterator it2 = strings.begin();
	//it2 += 2;

	//cout << *it2 << endl;


	vector<int>numbers;

	for(int i = 0;i < 1000; i++) {

		numbers.push_back((i + 1) *  2);
		cout << i << endl;
	}
	
	
	for(vector<int>::iterator iter = numbers.begin(); 
			iter != numbers.end(); iter++){

		cout << *iter << endl;	
	}

	return 0;
}
