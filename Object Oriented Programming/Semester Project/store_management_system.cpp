#include <iostream>
#include <string>
#include <vector>
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





class Furniture : public Product {
private:
    string material;
    string dimensions;

public:
    Furniture(int id, string name, double price, string description, string material, string dimensions)
        : Product(id, name, price, description)
		{
	    	this->material = material;
		    this->dimensions = dimensions;
		} 

    void display() override {
        Product::display();
        cout << "Material: " << material << ", Dimensions: " << dimensions << endl;
    }
};





class Book : public Product {
private:
    string author;
    int publicationYear;

public:
    Book(int id, string name, double price, string description, string author, int publicationYear)
        : Product(id, name, price, description) {
	    	this->author = author;
			this->publicationYear = publicationYear;
		}

    void display() override {
        Product::display();
        cout << "Author: " << author << ", Publication Year: " << publicationYear << endl;
    }
};





class ShoppingCart {
private:
    vector<Product*> items;

public:
    void addProduct(Product* product) {
        items.push_back(product);
    }

    void displayCart() const {
        cout << "Your Cart Contents:" << endl;
        for (size_t i = 0; i < items.size(); ++i) {
            items[i]->display();
        }
    }
};






int main() {
 Book book(3, "The Great Gatsby", 12.99, "A novel by F. Scott Fitzgerald", "F. Scott Fitzgerald", 1925);
    book.display();


    Furniture table(4, "Coffee Table", 150.00, "Solid wood coffee table with glass top", "Oak", "60x30x18 inches");
    table.display();


    ShoppingCart cart;

    cout<<endl<<endl;

    cart.addProduct(&book);
    cart.addProduct(&table);


    cart.displayCart();



    return 0;
}




