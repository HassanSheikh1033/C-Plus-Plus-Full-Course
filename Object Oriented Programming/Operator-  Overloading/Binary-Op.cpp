#include <iostream>
using namespace std;

class BinaryOp {
public:
    int value;

    BinaryOp(){
		value = 0;
	}

    BinaryOp(int val){
		value = val;
	}

    BinaryOp operator+(BinaryOp Op){
		BinaryOp sum;
        sum.value = value + Op.value;
        return sum;
	}

     BinaryOp operator-(BinaryOp Op){
		BinaryOp sum;
        sum.value = value - Op.value;
        return sum;
	}
    
};



int main(int argc, char** argv) {
    BinaryOp o1(10);
    BinaryOp o2(20);
    BinaryOp o3;
    o3 = o1 + o2;
    cout << o3.value << endl;
	return 0;
}


