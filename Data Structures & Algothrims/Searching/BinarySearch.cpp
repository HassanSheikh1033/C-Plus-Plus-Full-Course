#include <iostream>
#include <algorithm>
using namespace std;


int binarySearch(int arr[], int l, int r, int target) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }

    return -1; 
}


int main() {
    int target;

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, n-1, target);
    if (result != -1) {
        cout << "Element found at index = " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}





