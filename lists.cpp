//difference from vector, you can insert elements anywhere in list
// w/vector you can only insert at end

#include <iostream>
#include <list>

using namespace std;

int main() {


	list<int> numbers; 
	//adds to back of list
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	//adds to front of list
	numbers.push_front(0);



	//create iterator
	list<int>::iterator it = numbers.begin();
	//increment iterator
	it++;
	//insert number where iterator is currently
	numbers.insert(it,100);
	cout << "Element " << *it << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;

	//numbers.erase(eraseIt);//doesnt always work b/c we invalidate the iterator
	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;
	
	//dont increment interator in for declaration b/c we only move
	//if we don't erase b/c erase automatically increments iterator
	//try using while in place of this FOR
	for(list<int>::iterator it = numbers.begin(); 
			it != numbers.end();){
			if(*it == 2) {
				//insert something before 2
				numbers.insert(it,1234);
			}
			if(*it == 1){
				it =	numbers.erase(it);
			}
			else {
				it++;
			}
	}
	//we can only iterate forward and backwards with a list
	for(list<int>::iterator it = numbers.begin(); 
			it != numbers.end();it++){
		cout << *it << endl;
	}
	return 0;
}
