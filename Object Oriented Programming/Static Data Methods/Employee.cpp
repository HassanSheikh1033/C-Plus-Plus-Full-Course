#include <iostream>
using namespace std;


class Employee{
    static int count;
    int id;
    public: 
    Employee(){
        count += 1;
        id = count;
    }

    static void getTotal(){
        cout<<"Number of Employees: "<<count<<endl;
    }


    void getid(){
        cout<<"Employee is created"<<id<<endl;
    }

    ~Employee(){
        cout<<"Employee is destroyed"<<id<<endl;
    }
};


int Employee :: count ;

int main(){
    Employee a;
    Employee b;
    Employee::getTotal();
    a.getid();
    b.getid();
    Employee c, d;
    Employee::getTotal();

    return 0;
}


