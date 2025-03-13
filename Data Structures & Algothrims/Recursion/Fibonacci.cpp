#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 1) return n;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}



int main() {
    int num = 10;
    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}




