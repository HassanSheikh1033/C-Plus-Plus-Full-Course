#include <iostream>
using namespace std;

class vector{
    private: 
        int x;
        int y;
        int z;
    public:
    	vector(){
    		x = 0;
    		y = 0;
    		z = 0;
		}
    	
        vector(int x1, int y1, int z1){
               x = x1;
               y = y1;
               z = z1;  
        }    

        vector operator+(vector other){
            return vector(x + other.x , y + other.y , z + other.z);
        }
        
        void show(){
            cout<<"x value "<< x <<endl;
            cout<<"y value "<< y <<endl;
            cout<<"z value "<< z <<endl;
        }
};

int main(){
    vector v1(2,3,4);
    vector v2(3,4,5);

    vector v3;
	v3 = v1 + v2;
    v3.show();

    return 0;
}







