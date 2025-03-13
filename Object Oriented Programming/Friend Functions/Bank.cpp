#include <iostream>
using namespace std;


class Account; 

class BankManager {
public:
    friend void displayAccountDetails(Account& Account);
};



class Account{
private:
    int accountNumber;
    int balance;

    friend void displayAccountDetails( Account& Account);

public:
    Account(int number, int initialBalance) {
         accountNumber = number;
         balance = initialBalance; 
         }

};




void displayAccountDetails( Account& Account) {
    cout << "Account Number: " << Account.accountNumber << endl;
    cout << "Balance: $" << Account.balance << endl;
}




int main() {
    Account* Account = new Account(123456, 1000);

    displayAccountDetails(Account);


    return 0;
}





