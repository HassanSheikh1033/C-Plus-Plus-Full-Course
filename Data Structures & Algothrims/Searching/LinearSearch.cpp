#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, target;

    int arr[6] = {0,5,12,3,7,1};
    n = 6;

    cout << "Enter the target element to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index : " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}






