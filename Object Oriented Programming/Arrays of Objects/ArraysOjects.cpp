#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int Salary;

public:
    void setId(void)
    {
        Salary = 122;
        cout << "Enter the ID of Employee: ";
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The ID of this Employee is: " << Id << endl;
    }
};


int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}