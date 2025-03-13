#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    Account(string accountNumber, double initialBalance = 0.0){
        this->accountNumber = accountNumber;
		this->balance = initialBalance; 
	}


    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Cannot deposit negative amount." << endl;
        }
    }


    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or cannot withdraw negative amount." << endl;
        }
    }


    double getBalance() {
        return balance;
    }

    void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};




class SavingsAccount : public Account {
public:
    SavingsAccount(string accountNumber, double initialBalance = 0.0)
        : Account(accountNumber, initialBalance) {}


    void addInterest(double interestRate = 0.05) {
        double interestAmount = balance * interestRate;
        balance += interestAmount;
        cout << "Added interest (" << interestRate << "). Interest Amount: " << interestAmount << ". New balance: " << balance << endl;
    }
};





class CurrentAccount : public Account {
public:
    CurrentAccount(string accountNumber, double initialBalance = 0.0)
        : Account(accountNumber, initialBalance) {}

    void payBill(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Paid bill of " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or cannot pay negative amount." << endl;
        }
    }
};




int main() {
    SavingsAccount savings("SA123456", 1000);
    CurrentAccount current("CA123456", 2000);

    // Operations
    savings.deposit(500);
    savings.withdraw(300);
    savings.addInterest();

    current.deposit(1500);
    current.payBill(400);
    current.withdraw(600);

    // Display balances
    savings.display();
    current.display();

    return 0;
}


