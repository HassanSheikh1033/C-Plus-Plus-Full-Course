#include <iostream>
using namespace std;

class UnaryOp {
public:
    int value;

    UnaryOp(int val){
		value = val;
	}

	void operator++(){
		++value;
	}
	
    void operator++(int){
		value++;
	}
	
	void operator--(){
		--value;
	}
	
    void operator--(int){
		value--;
	}

    void show(){
        cout << value << endl;
    }
};



int main(int argc, char** argv) {
    UnaryOp o1(10);
    UnaryOp o2(20);
    UnaryOp o3(30);
    UnaryOp o4(40);
    ++o1;
    --o2;
    o3++;
    o4--;
    o1.show();
    o2.show();
	o3.show();
    o4.show();
	return 0;
}







