#include <iostream>
#include <string>
using namespace std;


void InsertionSort(int arr[4]) {
    int size = 4;
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void print(int arr[4]) {
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr1[4] = {1, 5, 2, 0};

    InsertionSort(arr1);
    print(arr1);

    return 0;
}





