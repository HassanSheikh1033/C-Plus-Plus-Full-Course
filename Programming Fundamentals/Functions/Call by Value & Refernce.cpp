#include <iostream>
using namespace std;

// Call by Value:
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Pointer Reference:
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by Reference variables:
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int x = 4, y = 5;
    swap(x, y); // This will not swap.
    cout << "Value of x is " << x << " and Value of y is " << y << endl;

    swapPointer(&x, &y); // This will swap using pointer Variables..
    cout << "Value of x is " << x << " and Value of y is " << y << endl;

    swapReferenceVar(x,y); //This will swap using Reference variables..
    cout<<"Value of x is "<<x<< " and Value of y is " <<y<<endl;
                                          
    return 0;
}




