#include <iostream>
using namespace std;

class time{
    private: 
        int hr;
        int min;
        int sec;
    public:
    	time(){
    		hr = 0;
    		min = 0;
    		sec = 0;
		}
    	
        time(int h1, int m1, int s1){
               hr = h1;
               min = m1;
               sec = s1;  
        }    
        
        time add(){
            
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
