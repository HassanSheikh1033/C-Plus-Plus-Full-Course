#include <iostream>
using namespace std;

// What is static Data Member ? Only one copy of that member is created
// for the entire class and is shared by all the objects of that class, no
//  matter how many objects are created.


class Employee
{
    int id;
    static int count; // By deflaut , it's value is zero..

public:
    void setData(void)
    {
        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this Employee is " << id << " and this is employee id " << count << endl;
    }
    static void getCount(void)
    {
        //cout<<id //It throws an error...
        cout << "The Value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee Harry, Hassan, Huzaifa;

    Harry.getData();
    Harry.setData();
    Employee ::getCount();

    Hassan.getData();
    Hassan.setData();
    Employee ::getCount();

    Huzaifa.getData();
    Huzaifa.setData();
    Employee ::getCount();

    return 0;
}


