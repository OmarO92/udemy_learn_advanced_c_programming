
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
    void print() const {
        cout << name << ": " << age << flush;
    } 
    //operator overload
        //const so we dont alter the passed Person
    bool operator <(const Person &other) const{
        if(name == other.name){
            return age < other.age;
        } else {
            return name < other.name;
        }
    }
};



int main() {

    int count = 0;
    map<Person, int> people;

    //shallow copies, don't want to do this 
        // when working with pointers 
    count++;
    cout << "assign " << count;
    people[Person("Mike",40)] = 4;
    //wont change key! 
        //we can add logic to op overload
        //to add a new key w/ this value  
    count++;
    cout << "assign " << count;
    people[Person("Mike",444)] = 123;   
    
    count++;
    cout << "assign " << count;
    people[Person("Vicky", 30)] = 3;
   
    count++;
    cout << "assign " << count;
    people[Person("Raj",20)] = 2;



    for(map<Person,int>::iterator it = people.begin(); it != people.end();it++){
        cout << it->second << ": " << flush;
        it->first.print(); 
        cout << endl;
    }

    return 0;
}