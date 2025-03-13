#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() : price(0) {}

    void getDetails();
    void displayDetails();
    double calculateDiscountedPrice(double discountPercent);
};

void Book::getDetails() {
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter price: ";
    cin >> price;
}

void Book::displayDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: $" << price << endl;
}

double Book::calculateDiscountedPrice(double discountPercent) {
    return price - (price * discountPercent / 100);
}

int main() {
    Book book;
    book.getDetails();
    book.displayDetails();
    cout << "Discounted Price: $" << book.calculateDiscountedPrice(10) << endl;
    return 0;
}