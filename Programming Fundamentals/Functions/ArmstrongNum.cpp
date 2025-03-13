#include<iostream>
using namespace std;

int ArmStrong(int num){
    int arm = 0;
    int x;
   
   	while(num > 0){
        x = num%10;
        num /= 10;
        arm += x*x*x;  
    }
        
	return arm;   
}


int main(){
    int num;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    int y = num;

    int Arm_No = ArmStrong(num);
    if(Arm_No == y){
        cout<<"Number is Armstrong.."<<endl;
    }else{
        cout<<"Number is not Armstrong.."<<endl;
    }


    return 0;
}

