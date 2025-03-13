#include <iostream>
#include <string>
using namespace std;


class MobilePhone {
private:
    string brand;
    string model;
    double price;

public:
    MobilePhone(string brand, string model, double price) {
        this->brand = brand;
        this->model = model;
        this->price = price; 
    }


    bool isCheaperThan( MobilePhone otherPhone) {
        return this->price > otherPhone.price;
    }

};




int main() {
    MobilePhone phone1("Apple", "iPhone 13 Pro Max", 999.99);
    MobilePhone phone2("Samsung", "Galaxy S21 Ultra", 1199.99);


    if (phone1.isCheaperThan(phone2)) {
        cout << "Phone 1 is cheaper than Phone 2." << endl;
    } else {
        cout << "Phone 1 is not cheaper than Phone 2." << endl;
    }
    
    
    

    return 0;
}










