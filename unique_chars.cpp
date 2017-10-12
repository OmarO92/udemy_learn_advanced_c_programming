#include <iostream>
#include <string>

using namespace std;

bool uniqueCharacters(string str){

	int checker = 0; //int bit vector
	
//	for(string::iterator it = str.begin(); it != str.end();it++){
//		cout << *it << endl;		
//	}
	for(int i = 0; i < str.length(); ++i){
		int val = str[i] - 'a';
		if( (checker & (1 << val)) > 0)
			return false;
		checker |= (1 << val);
	}
	return true;
}

int main() 
{
	string st = "Te sring";
	cout << uniqueCharacters(st) << endl;

	return 0;
}
