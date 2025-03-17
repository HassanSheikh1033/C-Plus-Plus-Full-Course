#include<iostream>
using namespace std;


void Arr_sum(int arr[3][3]){
   int sum =0;
   
   for(int i = 0 ; i<3; i++){
    for(int k=0; k<3; k++){
      sum +=  arr[i][k];
    }
   }
   cout<<"The sum is: "<<sum;		
}



int main(){
   int arr[3][3];
   
   cout<<"Enter the values: "<<endl;
   for(int i = 0 ; i<3; i++){
    for(int k=0; k<3; k++){
    	cin>>arr[i][k];
    }
   }
   
   Arr_sum(arr);
   
   	return 0;
}

