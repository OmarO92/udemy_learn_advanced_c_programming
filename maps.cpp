#include <iostream>
#include <map>//store key,value pairs (lookup table)

using namespace std;


int main() {

	//map<key,value>name
	map<string,int>ages;

	//add items to map
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70; //overwrites original mapping of Mike

	//we can also add to map by using Pair
	pair<string,int> addToMap("Peter",100);
	ages.insert(addToMap);

	//alternative way to add
	ages.insert(pair<string,int>("Jose",200));

	//another alternative way to add
	ages.insert(make_pair("Josh",300));

	//cout << ages["Mike"] << endl;

	//test if value exists in map
	//if the Key doesn't exist, it adds to map as null value
	//cout << ages["Sue"] << endl;

	//find returns an iterator
	//if it is not foudn it points at the end of the map
	//so we check if our find is not the end of the map
	if(ages.find("Vicky") != ages.end()){
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key Not Found" << endl;
	}

	//iterate map
	for(map<string,int>::iterator it = ages.begin();it != ages.end();it++){
		cout << it->first << ": " << it->second << endl;

	}
	cout << " \t ---------- \n";

	//another way to iterate map
	for(map<string,int>::iterator it = ages.begin();it != ages.end();it++){
		//Pair is a template class that has 
			//the first and second from the above
			//so we can print out the values by creating a pair 
				//of the same type as the Map and set it as *iterator
		pair<string,int> age = *it;
		cout << age.first << ": " << age.second << endl;

	}
	return 0;
}
