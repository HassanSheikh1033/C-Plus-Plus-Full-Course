#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the numvber: "<<endl;
    int sum = 0;
    int tempNum =num ;

    for( tempNum!=0 ; tempNum/10){
        int digit = tempNum % 10;
        sum += digit;
    }
    cout<<"The sum of digits" << num << "is" << sum <<endl;

    return 0;
}



