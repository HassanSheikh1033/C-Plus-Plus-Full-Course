#include <iostream>
#include <fstream>
#include <string>

class Employee {
private:
    std::string name;
    std::string fname;
    int age;
    int salary;

public:
    void getDetails(const std::string& name, const std::string& fname, int age, int salary) {
        this->name = name;
        this->fname = fname;
        this->age = age;
        this->salary = salary;
    }

    void showDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Father's Name: " << fname << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

    // Member function to save employee data to a file
    void saveEmployeeData(string filename) {
        ofstream outfile(filename);
        if (!outfile) {
            cout << "Failed to open file for writing: " << filename << std::endl;
            return; // Exit the function early if the file couldn't be opened
        }
        outfile << name << "\n" << fname << "\n" << age << "\n" << salary << "\n";
        outfile.close();
    }

    // Member function to load employee data from a file
    static Employee loadEmployeeData(const std::string& filename) {
        Employee emp;
        std::ifstream infile(filename);
        if (infile.is_open()) {
            std::string name, fname;
            int age, salary;
            std::getline(infile, name);
            std::getline(infile, fname);
            infile >> age;
            infile.ignore(); // Consume newline character
            infile >> salary;
            infile.close();
            emp.getDetails(name, fname, age, salary);
        }
        return emp; // Returns a new Employee object with loaded data
    }
};

int main() {
    string filename = "employee_data.txt";

    // Create an Employee object
    Employee emp;
    emp.getDetails("John Doe", "Jane Doe", 30, 50000);

    // Save employee data to a file
    emp.saveEmployeeData(filename);

    // Load employee data from a file
    Employee loadedEmp = Employee::loadEmployeeData(filename);
    std::cout << "Loaded employee details:\n";
    loadedEmp.showDetails();

    return 0;
}

