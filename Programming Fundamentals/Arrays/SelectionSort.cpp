#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4,6,9,1,3};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}