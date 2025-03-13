#include <iostream>
using namespace std;

// Calculate the sum of Numbers:
int sum(float a, int b)
{
    return a + b;
}

// Calculate the three_sum of Numbers:
int sum(int a, int b, int c)
{
    return a + b + c;
}

// Calculate Volume of cylinder:
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate Volume of box:
int volume(int a)
{
    return (a * a * a);
}

// Calculate Volume of Rectangular box:
int volume(int l, int b, int h)
{
    return (l * b * h);
}


int main()
{
	
    cout << "Sum of 3 & 6 is " << sum(3, 6) << endl;
    cout << "Sum of 3 , 7 & 6 is " << sum(3, 7, 6) << endl;
    cout << "Volume of cuboid of 3 , 7 & 6 is " << volume(3, 7, 6) << endl;
    cout << "Volume of cylinder of 3 , 7 & 6 is " << volume(3, 6) << endl;
    cout << "Volume of cube of 3 sides is " << volume(3) << endl;

    return 0;
}
