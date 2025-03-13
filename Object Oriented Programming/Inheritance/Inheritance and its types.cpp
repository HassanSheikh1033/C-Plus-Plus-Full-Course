#include <iostream>
using namespace std;

// Base Class :
class Employee
{
public:
    int Id;
    float salary;
    Employee(int inpId)
    {
        Id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
/* ------------Derived Class Syntax-----------:
 class {{Derived-class-Name}}  :  {{visibility-mode}} {{Base-Class-Name}}
{
    class members/Methods
}
Note: 1: Default visibility mode is private..
2: Private visibility mode: (Public Members of base class becomes private members of derived class...)
3: Public visibility mode: (Public Members of base class becomes public members of derived class...)
4.Private Members of base class are never inherited..
*/


class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int inpId)
    {
        Id = inpId;
        languagecode = 9;
    }

    void getData()
    {
        cout << Id << endl;
    }
};



int main()
{
    Employee Huzaifa(1) , Hassan(2);
    cout << Huzaifa.salary;
    cout << Hassan.salary;
    Programmer skillF(10);
    cout << skillF.languagecode;
    skillF.getData();

    return 0;
}


