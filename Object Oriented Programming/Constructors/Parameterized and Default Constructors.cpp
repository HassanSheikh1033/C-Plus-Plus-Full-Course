#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // Constructor declaration..
    void printNum()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(int x, int y) //-->This is Parameterized Constructor as it takes two parameters.
{
    a = x;
    b = y;
}


int main()
{
    // Implicit Call:
    complex a(4, 5);

    // Explicit Call:
    complex b = complex(7, 5);

    a.printNum();
    b.printNum();
    return 0;
}
