#include<iostream>
using namespace std;
template <typename T>


class Calculator{
    private:
        T s1;
        T s2; 
    public:
        Calculator(T a, T b){
            s1 = a;
            s2 = b;
        }   
		 
        void DisplaySum(){
            T sum = s1 + s2;
            cout<<"Sum is: "<<sum<<endl;
        }

        void DisplaySub(){
            T sub = s1 - s2;
            cout<<"Subtraction is: "<<sub<<endl;
        }
         
        void DisplayMul(){
            T mul = s1 * s2;
            cout<<"Sum is: "<<mul<<endl;
        }

        void DisplayDiv(){
            T div = s1 / s2;
            cout<<"Sum is: "<<div<<endl;
        }
};



int main(){
    Calculator <int> si(2,2);
    si.DisplaySum();
    Calculator <string> sy("A","B");
    sy.DisplaySum();
    Calculator <float> sf(2.5,2.9);
    sf.DisplaySub();
    
    
    return 0;
}









