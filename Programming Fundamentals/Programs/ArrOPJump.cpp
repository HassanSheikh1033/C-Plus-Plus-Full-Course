#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3, 5, 1, 4}; // Define array with a fixed size
    int val, n;

    cout << "Enter the value to insert: ";
    cin >> val;
    cout << "Enter the position (0-4): ";
    cin >> n;

    // Shift elements to the right from the position `n`
    for(int j = 3; j >= n; j--){ // 3 is the last valid index before insertion
        arr[j + 1] = arr[j]; // Shift element right by 1
    }

    // Insert the value at the given position
    arr[n] = val;

    // Print the updated array
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

