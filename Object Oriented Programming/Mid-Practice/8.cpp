#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number components 
    Complex(double r = 0.0, double i = 0.0) 
	 {
	  real = r;
	  imag = i; 
	 }

    // Overloaded * operator to multiply two Complex objects together
    Complex operator*( Complex other) {
        double newReal = real * other.real - imag * other.imag;
        double newImag = real * other.imag + imag * other.real;
        return Complex(newReal, newImag);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};



int main() {
    // Create two Complex objects
    Complex num1(1.0, 2.0);
    Complex num2(3.0, 4.0);

    // Multiply num1 and num2 together using the overloaded * operator
    Complex product = num1 * num2;

    // Display the product of the two complex numbers
    product.display();

    return 0;
}



