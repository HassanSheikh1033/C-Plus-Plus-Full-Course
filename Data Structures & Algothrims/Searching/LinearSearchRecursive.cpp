#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int target, int index = 0) {
    if (index >= n) {
        return -1; 
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, n, target, index + 1); 
}



int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;


    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}




