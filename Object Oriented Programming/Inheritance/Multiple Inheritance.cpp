#include <iostream>
using namespace std;
/* Syntax of Multiple Inheritance :
   (class DerivedC : visibility_mode base1 , visibility_mode base2)
*/


class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};



class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};



class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};



class Derived : public base1, public base2 , public base3
{
public:
    void show()
    {
        cout << " The value of base1 is " << base1int << endl;
        cout << " The value of base2 is " << base2int << endl;
        cout << " The value of base3 is " << base3int << endl;
        cout << " The sum of these value is " << base1int + base2int << endl;
    }
};


/* 
The inherited derived will look like this:
Data Members:
|   base1int ---> protected.
|   base2int ---> protected.
Member Functions:
|   set_base1int() ----> Public
|   set_base2int() ----> Public
|   set_show() ----> Public

*/


int main()
{
    Derived Hassan;
    Hassan.set_base1int(25);
    Hassan.set_base2int(45);
    Hassan.set_base2int(30);
    Hassan.show();
    return 0;
}




/* UML  Class Diagrams:
A class diagram presents aassociation between classes in a project.
-> Properties, behaviour
*/


