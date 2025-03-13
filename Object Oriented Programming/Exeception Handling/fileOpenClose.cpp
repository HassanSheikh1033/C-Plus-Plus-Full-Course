#include <iostream>
#include <fstream>
#include <stdexcept> // Required for std::runtime_error
using namespace std;



int main() {
    const int Max = 80;
    char buffer[Max];
    int count = 1;
    
    try {
        ifstream infile("fdaata.txt"); // Attempt to open the file

        if (!infile.is_open()) { // Check if the file was successfully opened
            throw runtime_error("Failed to open the file.");
        }

        while (!infile.eof()) { // Continue until the end of the file is reached
            infile.getline(buffer, Max);
            cout << "Line:" << count++ << " ";
            cout << buffer << endl;
        }

        infile.close(); // Always remember to close the file after reading
    } catch (runtime_error e) {
        cerr << "An error occurred: " << e.what() << endl; // Handle the specific exception
    } 

    return 0;
}




