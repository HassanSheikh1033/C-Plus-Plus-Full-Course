#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



class Employee {
private:
    char name[20];
    char fname[20];
    int age;
    int salary;
public:
    void getDetails() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the father name: ";
        cin >> fname;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << fname << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};





int main() {
    Employee employees[10]; // Array to hold up to 10 employees
//    int numberOfEmployees = 0; // Counter for the number of employees added
//
//    // Adding new employees
//    for (int i = 0; i < 10 && numberOfEmployees < 10; ++i) {
//        cout << "Enter details for employee " << (numberOfEmployees + 1) << ": " << endl;
//        employees[numberOfEmployees].getDetails();
//        numberOfEmployees++;
//    }



    // Displaying all employees
    cout << "Displaying all employees: " << endl;
    for (int i = 0; i < numberOfEmployees; ++i) {
        employees[i].showDetails();
    }



    // Saving employee data to a file
    ofstream outfile("employees.txt");
    for (int i = 0; i < numberOfEmployees; ++i) {
        outfile << employees[i].name << endl;
        outfile << employees[i].fname << endl;
        outfile << employees[i].age << endl;
        outfile << employees[i].salary << endl;
    }
    outfile.close();

    // Loading employee data from a file
    ifstream infile("employees.txt");
    for (int i = 0; i < numberOfEmployees; ++i) {
        cout << "Loading details for employee " << (i+1) << ":" << endl;
        getline(infile, employees[i].name);
        getline(infile, employees[i].fname);
        infile >> employees[i].age;
        infile.ignore(); // Consume newline character
        infile >> employees[i].salary;
    }
    infile.close();

    return 0;
}

