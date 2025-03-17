#include<iostream>
using namespace std;


int main(){
    int arr[5] = {2,7,1,5,9};
    int largest = arr[0];
    for(int i = 0; i<5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<largest;
    return 0;
}


