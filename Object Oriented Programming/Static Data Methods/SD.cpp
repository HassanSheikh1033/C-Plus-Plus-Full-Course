#include <iostream>
using namespace std;

class abc{
    static int total;
    int id;
    public: 
    abc(){
        total = total + 1;
        id = total;
    }

    static void getTotal(){
        cout<<"Number of Objects: "<<total<<endl;
    }


    void getid(){
        cout<<"Object is created"<<id<<endl;
    }

    ~abc(){
        cout<<"Object is destroyed"<<id<<endl;
    }
};

 int total = 0;

int main(){
    abc a;
    abc b;
   

    return 0;
}


