#include <iostream>
using namespace std;

void displayFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int terms;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;

    displayFibonacci(terms);


    return 0;
}

