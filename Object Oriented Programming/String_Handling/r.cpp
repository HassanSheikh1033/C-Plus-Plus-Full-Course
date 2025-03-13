#include <iostream>
#include <string>
using namespace std;


int main(){
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Original String: " << input << endl;

    // Convert to lowercase
    for(size_t i = 0; i < input.length(); ++i) {
        input[i] = tolower(input[i]);
    }
    
    cout << "Lowercase String: " << input << endl;


    // Convert back to uppercase
    for(size_t i = 0; i < input.length(); ++i) {
        input[i] = toupper(input[i]);
    }
    
    
    cout << "Uppercase String: " << input << endl;


    return 0;
}
