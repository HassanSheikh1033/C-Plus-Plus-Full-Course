#include <iostream>
#include <string>
using namespace std;


void sliceString() {
    string sentence = "Python is an amazing language!";
    
    // Extracting first 5 characters
    cout << "First 5 characters: " << sentence.substr(2, 5) << endl;
    
    // Extracting last 6 characters
    cout << "Last 6 characters: " << sentence.substr(sentence.length() - 6) << endl;
}

int main() {
    sliceString();
    return 0;
}





