#include <iostream>
#include <vector>

using namespace std;


int main() {


	//to initialize a vector of 0s, use 2nd argument
	/*
		 vector<int>zero_vector(10,0);
		 for(vector<int>::iterator i = zero_vector.begin(); 
		 i != zero_vector.end(); i++){
		 cout << *i << " ";
		 }
	 */
	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;


	//capacity is size of internal array that vector is using
	//capacity increases in steps as elements get added
	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;


	for(int i = 0; i < 10000; i++) {
		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity updated: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	//remove all eleements in vector
	/* 
		 numbers.clear();
		 cout << "Size: " << numbers.size() << endl;
		 cout << "Capacity: " << numbers.capacity() << endl;//remains the same
	 */


	//resize the size, but not capacity
	/*
		 numbers.resize(100);
		 cout << numbers[2] << endl;
		 cout << "Size: " << numbers.size() << endl;
		 cout << "Capacity: " << numbers.capacity() << endl;//remains the same
	 */

	//reserve will reserve memory in the internal array of vector
	//increases the Capacity by whatever we pass in
	/*	 numbers.reserve(200000);
			 cout << numbers[2] << endl;
			 cout << "Size: " << numbers.size() << endl;
			 cout << "Capacity: " << numbers.capacity() << endl;//remains the same
	 */
	return 0;

}
