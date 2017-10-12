
#include <iostream>
#include <map>

//Maps sort by Keys

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(): name("jdoe"), age(999) {}

    Person(const Person &other) {
        cout << "Copy Constructor Running!" << endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age) :
    name(name), age(age){

    }   
    void print() {
        cout << name << ": " << age << endl;
    } 
};



int main() {


    map<int, Person> people;

    //shallow copies, don't want to do this 
        // when working with pointers 
    people[0] = Person("Mike",40);
    people[1] = Person("Vicky", 30);
    people[2] = Person("Raj",20);

    //creating w/ copy constructor
    people.insert(make_pair(55,Person("Bob",45)));
    people.insert(make_pair(56,Person("Sue",24)));


    for(map<int,Person>::iterator it = people.begin(); it != people.end();it++){
        it->second.print();
    }

    return 0;
}