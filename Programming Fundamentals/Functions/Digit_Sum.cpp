#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number to calculate the sum of its digits: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    
	return 0;
}
