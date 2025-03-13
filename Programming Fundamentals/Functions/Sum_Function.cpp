#include<iostream>
using namespace std;

int sum(int a,int b, int c){
    int addNo =0;
    addNo = a+b+c;
    return addNo;
}

int main(){
    int num1,num2,num3;
    cout<<"Enter three Numbers: "<<endl;
    cin>>num1>>num2>>num3;
    int sum_Nums = sum(num1,num2,num3);
    cout<<"Sum of Numbers is "<<sum_Nums<<endl;
    

    return 0;
}
