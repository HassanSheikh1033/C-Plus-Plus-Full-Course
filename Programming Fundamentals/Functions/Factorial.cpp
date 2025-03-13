#include<iostream>
using namespace std;

int fact(int n){
    fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int fact_Num = fact(n);
    cout<<"The factorial of the Number: "<<fact_Num<<endl;

    return 0;
}