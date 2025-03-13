#include <iostream>
using namespace std;

class Operator1 {
public:
    int t;

  Operator1(){
		t = 0;
	}

    Operator1(int val){
		t = val;
	}
	
    void operator++(int){
		t++;
	}

    Operator1 operator+(Operator1 Op){
		Operator1 sum;
        sum.t = t + Op.t;
        return sum;
	}

    Operator1 operator-(Operator1 Op){
		Operator1 sum;
        sum.t = t - Op.t;
        return sum;
	}

    bool operator=(Operator1 Op) {
        return t = Op.t;
    }

    bool operator>(Operator1 Op) {
        return t > Op.t;
    }
    bool operator>=(Operator1 Op) {
        return t >= Op.t;
    }
    void show(){
        cout <<"Value of T:"<< t << endl;
    }  
};

int main(int argc, char** argv) {
   Operator1 T1(10);
   Operator1 T2(20);
   Operator1 T3;
   Operator1 T4;
   T1++;
   T1.show();
   T3 = T1 + T2;
   T3.show();
   T4 = T1 - T2;
   T4.show();
   T1 = T2;
   T1.show();
    if(T1 > T2)
       cout << "T1 is greater than T2" << endl;
    if(T1 >= T2)
       cout << "T1 is greater than or equal to T2" << endl;
	return 0;
}





