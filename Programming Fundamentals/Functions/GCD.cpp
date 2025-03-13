#include <iostream>
using namespace std;

// Function to find the GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the function to find the GCD
    int gcd = findGCD(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}
