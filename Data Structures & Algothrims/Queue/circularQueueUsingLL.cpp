#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


class Queue {
    Node* head = NULL;
    Node* tail = NULL;

public:
    bool isEmpty() {
        return head == NULL;
    }

    void add(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
            tail->next = head;  // Point to itself, making it circular
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;  // Maintain the circular link
        }
    }

    int remove() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int front = head->data;
        Node* temp = head;

        if (head == tail) {  
            head = tail = NULL;
        } else {
            head = head->next;
            tail->next = head;
        }

        delete temp;
        return front;
    }


    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);  // Stop when we return to the head
        cout << endl;
    }
};

int main() {
    Queue q;
    q.add(10);
    q.add(20);
    q.add(30);

    q.display(); 

    cout << q.remove() << endl; 
    q.display();

    cout << q.remove() << endl; 
    q.display();

    cout << q.remove() << endl; 
    q.display();

    cout << q.remove() << endl;  // Attempting to remove from an empty queue

    return 0;
}






