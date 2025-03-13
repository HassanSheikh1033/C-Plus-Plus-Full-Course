#include<iostream>
using namespace std;

class Employee
{
private:
    int a , b , c;
public:
   int d,e;
   void setdata(int a1, int b1 , int c1); //Declaration
   void getdata(){
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"Value of c is "<<c<<endl;
    cout<<"Value of d is "<<d<<endl;
    cout<<"Value of e is "<<e<<endl;
   }
};

void Employee::setdata(int a1 , int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Hassan;
   // Hassan.a = 45; //This will throw error because a is private...
    Hassan.d = 89;
    Hassan.e = 45; 
    Hassan.setdata(4,5,6);
    Hassan.getdata();


    return 0;
}
