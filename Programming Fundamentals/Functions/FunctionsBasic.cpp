#include <iostream>
using namespace std;

// Function Prototype:
// type function-name (arguments);
//  int sum(int a , int b); //---> accptable
//  int sum(int a , b); //---> Not accptable
int sum(int, int); //---> accptable

int main()
{
    int num1, num2;
    cout << "Enter First Number:" << endl;
    cin >> num1;
    cout << "Enter Second Number:" << endl;
    cin >> num2;
    cout<< "The sum is" <<sum(num1,num2);
    return 0;
    //Num1 and Num2 are actual parameters
}

int sum(int a, int b){
    //Formal parameters a and b taking values from actual parameters...
    int c = a+b;
    return c;
}
