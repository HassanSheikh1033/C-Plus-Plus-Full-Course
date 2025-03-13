#include<iostream>
using namespace std;

int main() {
    int firstNum, secondNum;

    cout<<"Enter the first number: ";
    cin>>firstNum;
    cout<<"Enter the second number: ";
    cin>>secondNum;
    cout<<endl;

    cout<<"First and Second Number Before Swapping: "<<firstNum<<"  "<<secondNum<<endl;

    firstNum = firstNum + secondNum;
    secondNum = firstNum - secondNum;
    firstNum = firstNum - secondNum; 

    cout<<"First and Second Number After Swapping: "<<firstNum<<"  "<<secondNum<<endl;

    return 0;
}