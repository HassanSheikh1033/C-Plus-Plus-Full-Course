#include <iostream>
using namespace std;


// Forward Declaration:
class complex;

//Calculator Class :
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};


// Complex Class:
class complex
{
    int a, b;
   //Individually declaration functions as Friends:
    friend int Calculator :: sumRealComplex(complex o1, complex o2);
    friend int Calculator :: sumCompComplex(complex o1, complex o2);
   //Declaring the entire calculator class as friend:
    friend class calculator;


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};


int Calculator :: sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}



///--------------Main_Section------------///
int main()
{
  complex o1 , o2;
  o1.setNumber(1,4);
  o2.setNumber(5,7);
 
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"Sum of real Part of o1 & o2 is "<<res<<endl;
     int resc = calc.sumCompComplex(o1,o2);
    cout<<"Sum of Complex Part of o1 & o2 is "<<resc<<endl;

    
   return 0;
}
