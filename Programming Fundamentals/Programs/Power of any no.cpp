#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long result = 1;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
}

