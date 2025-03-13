#include <iostream>
#include <string>
using namespace std;


void SelectionSort(int arr[4]){
    int i,j,min,temp;
    int size = 4;
    for(i = 0; i<size-1; i++){
        min = i;
        for(j = i + 1; j<size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void print(int arr[4]){
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<" ";
    }    
}

int main(){
    int arr[4] = {1,5,2,0};
    SelectionSort(arr);
    print(arr);

    return 0;
}



