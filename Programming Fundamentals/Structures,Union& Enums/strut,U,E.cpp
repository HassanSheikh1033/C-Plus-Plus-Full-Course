#include <iostream>
using namespace std;

// Structure Function:
typedef struct employee
{
    /* data */
    int eID;      // 4
    char favChar; // 1
    float salary; // 4
} ep;


// Union Function:
union money
{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};


int main()
{

    // Structure Function:
    ep harry;
    harry.eID = 1;
    harry.favChar = 'c';
    harry.salary = 12000;
    cout << "Value is " << harry.eID << endl;
    cout << "Value is " << harry.favChar << endl;
    cout << "Value is " << harry.salary << endl;


    // Union Function:
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.car;


    // Enum Function:
    enum Meal { breakfast , lunch , dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;





    return 0;
}