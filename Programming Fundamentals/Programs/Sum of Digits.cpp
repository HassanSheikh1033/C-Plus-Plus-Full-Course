#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    
    int originalNum = num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;       
    }
    
	cout << "The sum of digits in " << originalNum << " is: " << sum << endl;

    return 0;
}

