#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string grade;
public:
    Student(string name, int age, string grade) 
    {
         this->name = name;
         this->age = age;
         this->grade = grade; 
    }


    void updateStudent(string newName, int newAge, string newGrade) {
        this->name = newName;
        this->age = newAge;
        this->grade = newGrade;
    }

    // Getter methods
    string getName(){
        return name;
    }

    int getAge() {
        return age;
    }

    string getGrade() {
        return grade;
    }

};



int main() {
    Student student("John Doe", 20, "A");


    student.updateStudent("Jane Smith", 21, "B");

    // Printing the updated student details
    cout << "Updated Name: " << student.getName() << endl;
    cout << "Updated Age: " << student.getAge() << endl;
    cout << "Updated Grade: " << student.getGrade() << endl;

    return 0;
}

