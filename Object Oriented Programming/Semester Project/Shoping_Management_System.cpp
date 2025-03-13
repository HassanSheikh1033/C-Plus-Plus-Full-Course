#include <iostream>
#include <string>
using namespace std;


class Product {
protected:
    int id;
    string name;
    double price;
    string description;

public:
    // Constructor
    Product(int id, string name, double price, string description){
        this->id = id;
		this->name = name; 
		this->price = price;
		this->description = description;
    }


    // Getter methods
    int getId(){ 
	   return id; 
	}
	
    string getName(){ 
	   return name; 
	}
	
    double getPrice(){ 
	   return price; 
	}
	
    string getDescription(){ 
	  return description;
	}


    // Setter methods
    void setId(int id) { 
	  this->id = id;
	}
	
    void setName(string name)
	{
	  this->name = name; 
	}
	
    void setPrice(double price){
	  this->price = price; 
	}
	
    void setDescription(string description){ 
	  this->description = description; 
	}
	

    virtual void display(){
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << ", Description: " << description << endl;
    }
};




// Electronics.h
class Electronics : public Product {
private:
    string brand;

public:
    Electronics(int id, string name, double price, string description, string brand)
        : Product(id, name, price, description)
		{
			this->brand = brand;
		} 

    void display() override {
        Product::display();
        cout << "Brand: " << brand << endl;
    }
};




// Clothing.h
class Clothing : public Product {
private:
    string size;

public:
    Clothing(int id, string name, double price, string description, string size)
        : Product(id, name, price, description) {
	    	this->size = size;
		}

    void display() override {
        Product::display();
        cout << "Size: " << size << endl;
    }
};





int main() {
    Electronics electronics(1, "Laptop", 1200.00, "High-performance laptop with 16GB RAM", "Dell");
    electronics.display();


    Clothing clothing(2, "T-Shirt", 15.99, "Cotton blend t-shirt", "M");
    clothing.display();


    return 0;
}



