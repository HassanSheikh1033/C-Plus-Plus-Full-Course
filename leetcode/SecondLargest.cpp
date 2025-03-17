#include<iostream>
using namespace std;


int main(){
    int arr[5] = {2,7,1,5,9};
    int largest = arr[0];
    int second_largest = -1;
    for(int i =0; i<5; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
    }

    cout<<second_largest;

    return 0;
}