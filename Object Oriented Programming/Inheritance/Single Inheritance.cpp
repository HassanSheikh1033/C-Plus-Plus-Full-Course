#include <iostream>
using namespace std;


//--------- Base-Class------:
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}


//--------- Derived-Class------:
class derived : public base
{
    int data3;

public:
    void display();
    void process();
};

void derived :: process()
{
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "Value of Data 1 is "<< getdata1() << endl;
    cout << "Value of Data 2 is " << data2 << endl;
    cout << "Value of Data 3 is " << data3 << endl;
}


//---------Main-Function------ :
int main(){
   derived der;
   der.setdata();
   der.process();
   der.display();
   
   return 0;
}





