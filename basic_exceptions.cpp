//name :Basic.cpp

#include <iostream>
using namespace std;

void mightGoWrong() {
	bool error = false;
	bool error2 = true;

	if(error) {
		throw "Something went wrong";
	}

	if(error2) {
		throw string("Something else went wrong.");
	}
}

int main() {

	try {
		mightGoWrong();
	}
	catch(int e) {
		cout << "error Code: " << e << endl;
	}
	catch(char const * e ){
		cout << "error message: " << e << endl;
	}

	catch(string &e) {
		cout << "String error message: " << e << endl;
	}
	cout << "still running" << endl;

	return 0;
}
