#include <iostream>
#include <string>
using namespace std;


void findSubstring() {
    string text = "The quick brown fox jumps over the lazy dog.";
    string searchFor = "fox";

    size_t found = text.find(searchFor);
    if (found != string) {
        cout << "'" << searchFor << "' found in the text." << endl;
    } else {
        cout << "'" << searchFor << "' not found in the text." << endl;
    }
}


int main() {
    findSubstring();
    return 0;
}


