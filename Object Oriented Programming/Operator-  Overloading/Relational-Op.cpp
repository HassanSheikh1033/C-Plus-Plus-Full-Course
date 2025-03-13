#include <iostream>
using namespace std;


class ComparisonOp {
public:
    int value;

    ComparisonOp(int val){
		value = val;
	}

    bool operator>(ComparisonOp Op) {
        return value > Op.value;
    }
    
     bool operator<(ComparisonOp Op) {
        return value > Op.value;
    }
    
     bool operator<=(ComparisonOp Op) {
        return value <= Op.value;
    }

    bool operator>=(ComparisonOp Op) {
        return value >= Op.value;
    }
    
     bool operator!=(ComparisonOp Op) {
        return value != Op.value;
    }
};


int main(int argc, char** argv) {
	  ComparisonOp comparison1(20), comparison2(10);
      cout<<"Comparison greater than: "<<(comparison1 > comparison2)<<endl;
	  cout<<"Comparison less than: "<<(comparison1 < comparison2)<<endl;
      cout<<"Comparison greater than or equal to: "<<(comparison1 >= comparison2)<<endl;
	  cout<<"Comparison less than or equal to: "<<(comparison1 <= comparison2)<<endl;
      cout<<"Comparison Not equal to: "<<(comparison1 != comparison2)<<endl;
	
	return 0;
}




