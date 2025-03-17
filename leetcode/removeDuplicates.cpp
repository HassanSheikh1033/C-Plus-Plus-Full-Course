#include<iostream>
using namespace std;

int removeDuplicates(int arr[]){
    int i = 0;
    for(int j = 1; j<7; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
   int arr[7] = {2,2,3,3,3,5,5};
   removeDuplicates(arr);
   for(int i =0; i<3; i++){
   		cout<<arr[i]<<" ";
   }

    return 0;
}


