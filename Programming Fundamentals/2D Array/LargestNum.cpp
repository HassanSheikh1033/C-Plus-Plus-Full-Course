#include <iostream>
using namespace std;

int main(){
    int arr[2][2];
    int largest = 0;

    cout<<"Enter a number: "<<endl;
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i<2; i++){
         for(int j =0; j<2; j++){
            if(arr[i][j] > largest){
               largest = arr[i][j];
            }
        }  
    }
    
    cout<<"Largest Number is : "<<largest<<endl;

    return 0;
}

