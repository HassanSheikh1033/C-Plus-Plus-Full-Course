#include <iostream>
using namespace std;

class complex{
    private: 
        int a;
        int b;
        int c;
        int d;
    public:
    	// complex(){
    	// 	x = 0;
    	// 	y = 0;
    	// 	z = 0;
		// }
    	
        complex(int a1, int b1, int c1, int d1){
               a = a1;
               b = b1;
               c = c1; 
               d = d1; 
        }    

        complex operator*(complex other){
            complex mul;
            (mul.a + mul.b) * (mul.c + mul.d);
        }
        
        void show(){
            cout<<"x value "<< x <<endl;
            cout<<"y value "<< y <<endl;
            cout<<"z value "<< z <<endl;
        }
};

int main(){
    complex v1(2,3,4);
    complex v2(3,4,5);

    complex v3;
	v3 = v1 + v2;
    v3.show();

    return 0;
}
