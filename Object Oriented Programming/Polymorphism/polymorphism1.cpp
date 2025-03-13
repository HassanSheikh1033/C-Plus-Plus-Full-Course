#include <iostream>
using namespace std;


class base{
    public: 
     virtual void show(){
        cout<<"Base class";
    }
    // virtual void show() = 0  ---Pure Virtual Functions---
};

class dri1 :  public base{
    public: 
    void show(){
        cout<<"Derived 1 class"<<endl;
    }
};

class dri2 :  public base{
    public: 
    void show(){
        cout<<"Derived 2 class"<<endl;
    }
};


int main(){
    base * ptr;
    base b1;
    dri1 d1;
    dri2 d2;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    ptr = &b1;
    ptr->show();
    

    return 0;
}


