#include <iostream>
using namespace std;


class MyClass {
public:
    int memberVariable;

    void memberFunction() {
        std::cout << "Hello from memberFunction!" << std::endl;
    }
};

int main() {
    MyClass* ptr = new MyClass();
    ptr->memberVariable = 42;
    ptr->memberFunction();

    delete ptr; // Don't forget to deallocate the dynamically allocated object.
    
    return 0;
}


