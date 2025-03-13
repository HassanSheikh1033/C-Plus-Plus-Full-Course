#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /*Constructors:: It is a special member function with te same name of its class.
    It is used to intialize the objects ofits class.
    It is automatically invoked when objects are created.*/

    complex(void); // Constructor declaration..
    void printNum()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};


complex :: complex(void)   //-->This is default Constructor as it takes no Parameters..
{
    a = 10;
    b = 0;
}


int main()
{
    complex c;
    c.printNum();

    return 0;
}

//  Properties of Constructors:
// 1.It should be declared inthe public section of Class.
// 2.They are automatically invoked whenever object is created.
// 3.They can't return values and donot have return types.
// 4.It can have Default Arguments.
// 5.We cannnot refer to their address.
