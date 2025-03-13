#include<iostream>
using namespace std;

int reverse(int num){
    int x,rev = 0;
    while(num>0){
        x = num % 10;
        num /= 10;
        rev = rev*10 + x;  
    }
    return rev;
}

int main(){
    int num, y;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    y = num;
    int Reverse_Num = reverse(num);
    cout<<"Reverse of Number "<<y<<" is "<<Reverse_Num;   

    return 0;
}
