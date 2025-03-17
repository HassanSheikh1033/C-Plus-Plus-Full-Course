#include <iostream>
#define MAX_SIZE 100 
using namespace std;


class Queue {
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1; 
        rear = -1;  
    }

   
    bool isEmpty() {
        return front == -1;
    }

   
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

   
    void add(int data) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = data;
    }


    int remove() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return -1;
        }
        
        int data = arr[front];
        if (front == rear){
            front = rear = -1;
        } else {
            front++;
        }
        return data;
    }
};


int main() {
    Queue q;
    q.add(10);
    q.add(20);
    q.add(30);

    cout << q.remove() << endl; // Outputs: 10
    cout << q.remove() << endl; // Outputs: 20
    cout << q.remove() << endl; // Outputs: 30
    cout << q.remove() << endl; // Outputs: Empty Queue, then -1

    return 0;
}





