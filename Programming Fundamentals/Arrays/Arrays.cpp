#include <iostream>
using namespace std;

int main()
{
    int marks[] = {223, 346, 469, 192};
    cout << "These are Marks: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    // you can change the value;
    marks[2] = 482;

    // Other-Way:
    int mathMarks[4];
    mathMarks[0] = 33;
    mathMarks[1] = 46;
    mathMarks[2] = 52;
    mathMarks[3] = 75;
    cout << "These are Math Marks: " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;


    // Array Using Loops:
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << "is" <<marks[i]<<endl;
    }


    // Array with Pointers:
    int*p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;



    return 0;
}