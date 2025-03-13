#include <iostream>
using namespace std;


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int startRange = 1;
    int endRange = 500;

    cout << "Prime numbers between " << startRange << " and " << endRange << " are:" << endl;

    for (int i = startRange; i <= endRange; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
