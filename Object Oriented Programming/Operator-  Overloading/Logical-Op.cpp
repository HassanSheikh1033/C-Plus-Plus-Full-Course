#include <iostream>
using namespace std;

class LogicalOp {
public:
    bool value;

    LogicalOp(bool val) {
        value = val;
    }

    bool operator&&(LogicalOp Op) {
        return value && Op.value;
    }

    bool operator||(LogicalOp Op) {
        return value || Op.value;
    }

    bool operator!() {
        return !value;
    }
};


int main(){
    LogicalOp logical1(true), logical2(false);
    cout << "Logical AND: " << (logical1 && logical2) << endl;
    cout << "Logical OR: " << (logical1 || logical2) << endl;
    cout << "Logical Not: " << (!logical2) << endl;


    return 0;
}
