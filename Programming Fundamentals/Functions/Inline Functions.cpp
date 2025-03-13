#include <iostream>
using namespace std;

inline int product(int a, int b){ //inline(=>) is a request to compiler...
    // static int c =0; //This executes one time..
    // c = c +1;
    return a*b ;
}


float moneyRecevied(int currentMoney , float factor = 1.04){
    return currentMoney * factor;
}

// int strLen(const char *p ){

// }



int main(){

    int a,b;
    cout<<"Enter the Value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The Product of a and b is: "<<product(a,b)<<endl;
     

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account ,you will receive "
    <<moneyRecevied(money)<<" Rs After 1year";
      cout<<"For VIP => If you have "<<money<<" Rs in your bank account ,you will receive "
    <<moneyRecevied(money, 1.1)<<" Rs After 1year";


    return 0;
}