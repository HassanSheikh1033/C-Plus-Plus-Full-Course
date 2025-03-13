#include <iostream>
using namespace std;

class Calculator;

class MathHelper {
public:
    // Friend function declaration
    friend int sum(Calculator calc);
};


class Calculator {
private:
    int num1;
    int num2;

    // Declare sum function as a friend to access private members
    friend int sum(Calculator calc);


public:
    Calculator(int n1, int n2){
	   num1 = n1;
	   num2 = n2;
	}
};



// Friend function definition to compute the sum
int sum(Calculator calc) {
    // Access private members of Calculator class using friend function
    return calc.num1 + calc.num2;
}




int main() {
    Calculator calc(5, 10);
    cout << "Sum: " << sum(calc) << endl;
    return 0;
}





