#include<iostream>
using namespace std;

void Max(int a, int b){
   if(a>b){
      cout<<"Number1 is greater than Number2";
   }
   else{
     cout<<"Number1 is greater than Number2";
   }
}



int main(){
    int num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
     cout<<"Enter the second number: "<<endl;
    cin>>num2;

    int max = Max(num1,num2);
    
    cout<<max;

    return 0;
}
