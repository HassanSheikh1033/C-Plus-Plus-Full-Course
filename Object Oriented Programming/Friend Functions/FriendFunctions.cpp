#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    //Below line means Class allows permission to Friend Function:
    friend complex sumComplex(complex o1, complex o2);
    
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};


  // Friend Function :
complex sumComplex(complex o1, complex o2) //It is not a member of class..
{
    complex o3;
   // cout<<a; //it throws an error.
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum =sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}

/*Properties Of Friend Function:
1.It is not inthe scope of class...
2.It cannot be called from the object of that class..(c1.sumComplex = invalid).
3.It can invoked without any help of object.
4.Usually conatins objects as arguments.
5.Can be declared inside public or private section of Class.
6.It can't access the member directly by their names and need object_name.member_name
to access any member..

*/
