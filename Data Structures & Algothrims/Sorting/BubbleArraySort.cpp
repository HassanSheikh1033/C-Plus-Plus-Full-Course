#include <iostream>
#include <string>
using namespace std;


void BubbleSort(int arr[4]) {
    int size = 4;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    BubbleSort(arr1);
    print(arr1);

    return 0;
}




