#include <iostream>
using namespace std;


class Person {
public:
    string name;
    int age;       
    string gender; 

    Person(string n, int a, string g) {
         name = n,
         age = a, 
         gender = g; 
    }


    bool compareAge( Person other)  {
        return this->age > other.age;
    }


    void printDetails() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};



int main() {
    Person person1("John Doe", 30, "Male");
    Person person2("Jane Smith", 25, "Female");
    
  
    if(person1.compareAge(person2)) {
        cout << "Person1 is older than Person2." << endl;
    } else {
        cout << "Person1 is younger than or equal to Person2." << endl;
    }
    
    
    person1.printDetails();
    person2.printDetails();


    return 0;
}




