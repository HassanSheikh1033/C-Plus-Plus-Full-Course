#include<iostream>
using namespace std;

int isSorted(int arr[]){
    for(int i = 0; i<5; i++){
        if(arr[i] >= arr[i-1]){

        } else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[5] = {2,7,1,5,9};
    
     cout<<isSorted(arr);
    
    return 0;
}

