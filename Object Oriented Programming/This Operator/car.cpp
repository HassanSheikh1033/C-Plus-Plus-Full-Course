#include <iostream>
using namespace std;

class Car {
private:
    string make; 
    string model; 
    int year; 


public:
    Car(string m, string mo, int y) 
    {
         this->make = m;
         this->model = mo;
         this->year = y; 
    }


    void display() {
        cout << "Make: " << this->make<< endl;
        cout << "Model: " << this->model << endl;
        cout << "Year: " << this->year << endl;
    }
};

int main() {
    
    Car myCar("Toyota", "Corolla", 2020);


    myCar.display();

    return 0;
}







