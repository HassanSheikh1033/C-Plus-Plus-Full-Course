#include <iostream>
using namespace std;


static int globalCounter = 0;

class GlobalCounter {
public:
    GlobalCounter() {
        globalCounter++;
    }


    static void getCounter() {
        cout << "Global Counter Value: " << globalCounter << endl;
    }
};



int main() {

    GlobalCounter a;
    GlobalCounter b;


    GlobalCounter::getCounter(); 

    return 0;
}



