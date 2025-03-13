#include <iostream>
using namespace std;

class Teacher; 

class Student {
private:
    int studentID;
    double grade;

    friend void updateGrade(Student& student, double newGrade);


public:
    Student(int id, double initialGrade) {
         studentID = id;
         grade = initialGrade;
    }

    // Getter function for studentID
    int getStudentID() const {
        return studentID;
    }

    // Getter function for grade
    double getGrade() const {
        return grade;
    }
};


class Teacher {
public:
    // Friend function declaration
    friend void updateGrade(Student& student, double newGrade);
};



// Friend function definition to update the grade of a specific student
void updateGrade( Student& student, double newGrade) {
    student.grade = newGrade;
    cout << "Grade for student ID " << student.studentID << " updated to " << newGrade << endl;
}




int main() {
    Student student1(1001, 85.0);

    // Display initial grade
    cout << "Initial grade for student ID " << student1.getStudentID() << ": " << student1.getGrade() << std::endl;


    // Update grade using friend function
    updateGrade(student1, 90.0);


    // Display updated grade
    cout << "Updated grade for student ID " << student1.getStudentID() << ": " << student1.getGrade() << endl;

    return 0;
}



