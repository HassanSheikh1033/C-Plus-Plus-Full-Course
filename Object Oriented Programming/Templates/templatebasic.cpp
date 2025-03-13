#include<iostream>
using namespace std;
template <typename T>


class Box{
    private:
        T value; 
    public:
        void getV(T a){
            value = a;
        }    
        void show(){
            cout<<"Value is: "<<value<<endl;
        }
};



int main(){
    Box <int> b1;
    b1.getV(10);
    b1.show();
    Box <float> b2;
    b2.getV(15.66);
    b2.show();
    Box <string> b3;
    b3.getV("I am Pakistani");
    b3.show();

    return 0;
}




