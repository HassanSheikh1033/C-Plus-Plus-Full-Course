#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};


/*  
___________________________________________________________________________________________
For a Protected Members :                                                                  
   |   |   |   |   |   | Public Derivation  -  Private Derivation  -  Protected Derivation 
1.Private Members  =>      Not Inherited          Not Inherited        Not Inherited 
2.Protected Members =>     Protected              Private              Protected
3.Public Members =>        Public                 Private              Protected
___________________________________________________________________________________________
*/


class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a  => will not work since a is protected in both Base as well as Derived class..


    return 0;
}