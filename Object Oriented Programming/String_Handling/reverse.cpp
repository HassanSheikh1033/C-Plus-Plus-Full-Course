#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


string reverseString(string str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}


void printReversedString() {
    string str = "Hello, World!";
    cout << "Reversed: " << reverseString(str) <<endl;
}


int main() {
    printReversedString();
    return 0;
}



