#include <iostream>
using namespace std;


class CircularQueueArray {
    int* arr;
    int size;
    int front;
    int rear;

public:
    CircularQueueArray(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return rear == -1 && front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void add(int data) {
        if (isFull()) {
            cout << "Overflow" << endl;
            return;
        }
        
        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = data;
    }


    int remove() {
        if (isEmpty()) {
            cout << "Empty queue" << endl;
            return -1;
        }

        int res = arr[front];
        
        if (front == rear) { // Only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return res;
    }
    

    int peek() {
        if (isEmpty()) {
            cout << "Empty queue" << endl;
            return -1;
        }
        
        return arr[front];
    }


    ~CircularQueueArray() {
        delete[] arr; // Free the allocated memory
    }
};



int main() {
    CircularQueueArray q(5);
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);
    q.add(5);
    cout << q.remove() << endl;
    q.add(6);
    cout << q.remove() << endl;
    q.add(7);

    while (!q.isEmpty()) {
        cout << q.remove() << endl;
    }

    return 0;
}




