#include <iostream>
using namespace std;

int main(){
    int arr[2][2];

    cout<<"Enter a number: "<<endl;
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    int count = 0;
    int num;
    cout<<"Enter a number to search: "<<endl;
    cin>>num;
    for(int i = 0 ; i<2; i++){
         for(int j =0; j<2; j++){
            if(arr[i][j] == num){
               count++;
            }
        }  
    }
 
    if(count == 1){
        cout<<"The Number is allocated"<<endl;
    }
    else{
        cout<<"Element does not exist in array..";
    }

    return 0;
}

