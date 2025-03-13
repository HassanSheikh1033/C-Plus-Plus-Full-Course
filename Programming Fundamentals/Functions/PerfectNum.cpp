#include <iostream>
using namespace std;

bool isPerfectNumber(int number) {
    int sum = 1; // 1 is always a divisor, so we start with sum = 1

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i * i != number) {
                sum += number / i;
            }
        }
    }

    return (sum == number);
}

int main() {
    cout << "Perfect numbers between 1 and 500 are: " << endl;

    for (int i = 2; i <= 500; ++i) {
        if (isPerfectNumber(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
