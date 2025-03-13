#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {     //4iterations..
        int key = arr[i]; 
        //cout<<key<<endl; // Ouput: 11 13 5 6 ;
        int j = i - 1;
       // cout<<j; //Output: 0 1 2 3
        
        
        while (j >= 0 && arr[j] > key) { 
           //	cout<<endl<<key;// 11 5 5 5 6 6 6  
            arr[j + 1] = arr[j];
			cout<<arr[j+1]; 
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


// Utility function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
      cout<<arr[i]<<" ";
    }
      cout<<endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    //Length of arr:
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    //cout<<"The Size of arr is: "<<arrSize<<endl; //5
    
    cout << "Original array: ";
    printArray(arr, arrSize);

    // Perform Insertion Sort
    insertionSort(arr, arrSize);

    cout << "Sorted array: ";
    printArray(arr, arrSize);

    return 0;
}
