#include <iostream>
using namespace std;


class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize rectangle dimensions
    Rectangle(double len, double wid) : length(len), width(wid) {
        cout << "Rectangle object created with length " << length << " and width " << width << "." << endl;
    }

    // Overloaded + operator to add two Rectangle objects together
    Rectangle operator+(Rectangle other) {
        return Rectangle(length + other.length , width + other.width);
    }

};

int main() {
    // Create two Rectangle objects
    Rectangle rect1(5.0, 4.0);
    Rectangle rect2(3.0, 2.0);

    // Add rect1 and rect2 together using the overloaded + operator
    Rectangle sumRect = rect1 + rect2;

    return 0;
}


