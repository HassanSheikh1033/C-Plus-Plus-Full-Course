#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Constants
const int MAX_STUDENTS = 10;
const string DATABASE_FILE = "student_database.txt";

// Student structure
struct Student {
    string name;
    int age;
    double gpa;
};

// Function prototypes
void displayMenu();
void addStudent(Student students[], int &numStudents);
void displayStudents(const Student students[], int numStudents);
void saveToDatabase(const Student students[], int numStudents);
void loadFromDatabase(Student students[], int &numStudents);

int main() {
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    // Load existing data from the database file
    loadFromDatabase(students, numStudents);

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                saveToDatabase(students, numStudents);
                cout << "Exiting program. Thank you for using the student database!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    cout << "========== Student Database Management ==========" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Students" << endl;
    cout << "3. Save to Database" << endl;
}

void addStudent(Student students[], int &numStudents) {
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin.ignore(); // Clear the newline character left in the buffer
        getline(cin, students[numStudents].name);
        cout << "Enter student age: ";
        cin >> students[numStudents].age;
        cout << "Enter student GPA: ";
        cin >> students[numStudents].gpa;
        numStudents++;
        cout << "Student added successfully." << endl;
    } else {
        cout << "Database full. Cannot add more students." << endl;
    }
}

void displayStudents(const Student students[], int numStudents) {
    if (numStudents > 0) {
        cout << "========== Student List ==========" << endl;
        for (int i = 0; i < numStudents; ++i) {
            cout << "Name: " << students[i].name << ", Age: " << students[i].age << ", GPA: " << students[i].gpa << endl;
        }
    } else {
        cout << "No students in the database." << endl;
    }
}


//void saveToDatabase(const Student students[], int numStudents) {
//    ofstream outFile(DATABASE_FILE);
//
//    if (outFile.is_open()) {
//        for (int i = 0; i < numStudents; ++i) {
//            outFile << students[i].name << " " << students[i].age << " " << students[i].gpa << endl;
//        }
//        outFile.close();
//        cout << "Data saved to database successfully." << endl;
//    } else {
//        cout << "Error: Unable to open the database file for writing." << endl;
//    }
//}

void saveToDatabase(const Student students[], int numStudents) {
    ofstream outFile(DATABASE_FILE);

    if (!outFile.is_open()) {
        cout << "Error opening the file for writing." << endl;
        return;
    }

    for (int i = 0; i < numStudents; ++i) {
        outFile << students[i].name << " " << students[i].age << " " << students[i].gpa << endl;
    }

    outFile.close();
    cout << "Data saved to database successfully." << endl;
}



void loadFromDatabase(Student students[], int &numStudents) {
    ifstream inFile(DATABASE_FILE);

    if (inFile.is_open()) {
        while (numStudents < MAX_STUDENTS && inFile >> students[numStudents].name >> students[numStudents].age
               >> students[numStudents].gpa) {
            numStudents++;
        }
        inFile.close();
    } else {
        cout << "Database file not found. Creating a new database." << endl;
    }
}

