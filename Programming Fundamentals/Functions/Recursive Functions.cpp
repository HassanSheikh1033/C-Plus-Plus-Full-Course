#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
    // Working of this Function:
    // factorial(4) = 4 * factorial(3);
    // factorial(4) = 4 * 3 * factorial(2);
    // factorial(4) = 4 * 3 * 2 * factorial(1);
    // factorial(4) = 4 * 3 * 2 * 1 ;
    // factorial(4) = 24;
}



int fib(int x){
    if(x<2){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}



int main()
{
    int a;
    cout << "Enter a Number: " << endl;
    cin >> a;
    // cout << "Factorial of " << a << " is " << factorial(a) << endl;
    cout << "The term in fabonacci sequence at position " << a << " is " << fib(a) << endl;
    

    return 0;
}
