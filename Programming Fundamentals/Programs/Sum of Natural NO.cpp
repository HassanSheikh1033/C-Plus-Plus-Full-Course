#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
       cout << "Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= num; ++i) {
            sum += i;
        }

        cout << "The sum of natural numbers up to " << num << " is: " << sum << endl;
    }

    return 0;
}

