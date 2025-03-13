#include <iostream>
using namespace std;


class Medicine {
public:
    string name;
    double price;

    Medicine(string n, double p){
		this->name = n; 
		this->price = p;
	}

    virtual void display(){}
};





class Pharmacy {
private:
    Medicine* medicines[5]; 

public:
    void addMedicine(Medicine* med, int index) {
        if (index >= 0 && index < 5) { 
            medicines[index] = med;
        } else {
            cout<< "Index out of bounds" << endl;
        }
    }


    void displayAllMedicines() const {
        for (int i = 0; i < 5; ++i) {
            if (medicines[i]) {
                medicines[i]->display();
            }
        }
    }
};





class PrescriptionMedicine : public Medicine {
public:
    PrescriptionMedicine(string n, double p) : Medicine(n, p) {}

    void display() override {
        cout << "This is a prescription medicine." << endl;
        Medicine::display(); 
    }
};




class Customer {
public:
    string name;

    Customer(string n)  {
    	this->name = n;
	}

    void buyMedicine(Pharmacy& pharmacy, Medicine* med) {
        cout << name << " bought " << med->name << endl;
        pharmacy.addMedicine(med, 0); 
    }
};



int main() {
    Pharmacy myPharmacy;


    PrescriptionMedicine painkiller("Ibuprofen", 10.99);
    PrescriptionMedicine antibiotic("Amoxicillin", 50.00);


    myPharmacy.addMedicine(&painkiller, 0); 
    myPharmacy.addMedicine(&antibiotic, 1);

    
    Customer john("John Doe");
    
    john.buyMedicine(myPharmacy, &painkiller);
    
    
    myPharmacy.displayAllMedicines();

    return 0;
}





