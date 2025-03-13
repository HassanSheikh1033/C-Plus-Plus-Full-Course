#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNum()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};



int main()
{
    complex c1(4,5);
    c1.printNum();

    complex c2(6);
    c2.printNum();

    complex c3;
    c2.printNum();

    return 0;
}




