#include <iostream>
using namespace std;

// 1: Accessing Member Variables:
class MyClass
{
public:
    int x;

    void setX(int x)
    {
        this->x = x; // Use 'this' to specify the member variable 'x'
    }
};


// 2:Returning a Reference to the Current Object:
class Counter
{
private:
    int count = 0;

public:
    Counter &increment()
    {
        ++this->count;
        return *this; // Return a reference to the current object
    }
};



// 3:Passing the Current Object as a Parameter:
class Rectangle
{
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area()
    {
        return this->width * this->height;
    }

    void printArea()
    {
        print(this->area());
    }
};

int main()
{

    // 4:Comparing Objects:
    bool isEqual(Rectangle other)
    {
        return this == &other; // Compare memory addresses
    }

    return 0;
}