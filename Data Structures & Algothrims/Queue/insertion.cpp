#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL; // Initialize next to NULL
    }
};


class Queue {
    Node* head = NULL;
    Node* tail = NULL;

public:
    bool isEmpty() {
        return head == NULL && tail == NULL;
    }

    void add(int data) {
        Node* newNode = new Node(data); // Allocate new Node dynamically
        if (isEmpty()) {
            tail = head = newNode;
        } else {
            tail->next = newNode; // Use '->' to access pointer members
            tail = newNode;
        }
    }

   
    int remove() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return -1; // Returning -1 to indicate empty queue
        }
        
        int front = head->data;
        Node* temp = head;

        if (tail == head) { // If there's only one element
            tail = NULL;
        }

        head = head->next;
        delete temp; // Free the memory of the removed node
        return front;
    }
};



int main() {
    Queue q;
    q.add(10);
    q.add(20);
    q.add(30)
    cout << q.remove() << endl; 
    cout << q.remove() << endl; 
    cout << q.remove() << endl; 
    cout << q.remove() << endl; 

    return 0;
}



