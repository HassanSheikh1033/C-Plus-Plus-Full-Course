#include <iostream>
using namespace std;


class MathUtils{
    static int value;
    static int a,b;
    public:
    
	MathUtils(int v1, int v2){
        a = v1;
        b = v2;
    } 
    
    
    static void getSum(){
        value = a + b;
        cout<<value<<endl;
    }
    
    static void getSub(){
        value = a - b;
        cout<<value<<endl;
    }
    static void getMul(){
        value = a * b;
         cout<<value<<endl;
    }
    static void getDiv(){
        value = a / b;
        cout<<value<<endl;
    }
};

 int MathUtils :: a ;
 int MathUtils :: b ;
 int MathUtils :: value;
 


 int main(){
    MathUtils a(30,20);
    MathUtils::getSum();
    MathUtils::getSub();
    MathUtils::getMul();
	MathUtils::getDiv();


    return 0;
 }
 
 
 
