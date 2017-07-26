#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {

	bool error1Detected = true;
	bool error2Detected = false;

	if(error1Detected) {
		throw bad_alloc();
	}	

	if(error2Detected) {
		throw exception();
	}
}
int main() {

	try {
		goesWrong();
	}

//THIS WILL CATCH EXCEPTION EVEN IF THROWING BAD ALLOC b/c
//EXCEPTION IS THE PARENT CLASS
//TO FIX THIS YOU MUST CATCH THE CHILD CLASS (bad_alloc) FIRST
	catch(exception &e) {
		cout << "Catching exception " << e.what() << endl;
	}
	catch(bad_alloc &e) {
		cout << "Catching aad_alloc" <<e.what() << endl;
	}

	return 0;

}
