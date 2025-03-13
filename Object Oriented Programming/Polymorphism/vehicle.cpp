#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual double calculateRentalFee() const = 0; // Pure virtual function changed to return double

};


class Car : public Vehicle {
public:
	int horsepower;
    Car(int hp) : horsepower(hp) {}

    double calculateRentalFee() const override {
        double baseFee = 50.0; // Base daily rental fee for cars
        double additionalFee = horsepower * 10.0; // Additional fee based on horsepower
        return baseFee + additionalFee;
    }
};




class Truck : public Vehicle {
public:
	int horsepower;
    Truck(int hp) :  horsepower(hp) {} // Call base class constructor

    double calculateRentalFee() const override {
        double baseFee = 75.0; // Base daily rental fee for trucks
        double additionalFee = horsepower * 20.0; // Additional fee based on horsepower
        return baseFee + additionalFee;
    }
};

class Motorcycle : public Vehicle {
public:
	int horsepower;
    Motorcycle(int hp) :  horsepower(hp) {} // Call base class constructor

    double calculateRentalFee() const override {
    	cout<<"Motorcycle"<<endl;
        double baseFee = 30.0; // Base daily rental fee for motorcycles
        double additionalFee = horsepower * 5.0; // Additional fee based on horsepower
        return baseFee + additionalFee;
    }
};



int main() {
    Vehicle* vehicles[] = {
        new Car(200),
        new Truck(300),
        new Motorcycle(100)
    };


    for (int i = 0; i<3; ++i) {
        cout << "Rental Fee for "<< vehicles[i]->calculateRentalFee() << endl;
//        delete vehicle;
    }
    
    return 0;
}





