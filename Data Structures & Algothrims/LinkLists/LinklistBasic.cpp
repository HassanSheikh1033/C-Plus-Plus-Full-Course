#include <iostream>
#include <string>
using namespace std;


class LL {
    class Node {
    public:
        string data;
        Node* next;

        Node(string data) {
            this->data = data;
            this->next = NULL;  
        }
    }; 

    Node* head;45t
    int size;


public:
    LL() {
        head = NULL; 
        size = 0;
    }

    void addFirst(string data) {
        Node* newNode = new Node(data);  // newNode = 1, newNode = 2, newNode = 3, 
        newNode->next = head; // = null , 1 
        head = newNode; // head = 1, .. head = 2 , head = 3  
        size++; // 1, 2, 3
    }

    void addLast(string data) {
        Node* newNode = new Node(data); // 1, 2, 3
        if (head == NULL){  
            head = newNode; // 1
        } else {
            Node* lastNode = head; // lastNode = 1 
            while (lastNode->next != NULL){    // for 2: false
                lastNode = lastNode->next; // l = l.next = 2, 
            }
            lastNode->next = newNode; // l.next = 2 , l.next = 3 ...
        } // 1 -> 2 -> 3 
        size++;
    }


    void printList() {
        Node* currNode = head;
        while (currNode != NULL) {  
            cout << currNode->data << " -> ";
            currNode = currNode->next;
        }
        cout << "NULL" << endl; 
}

    void removeFirst() {
        if (head == NULL) {  
            cout << "Empty List, nothing to delete" << endl;
            return;
        }
        
        Node* temp = head; // 1
        head = head->next; // 2
        delete temp;
        size--;
    }


    void removeLast() {
        if (head == NULL) {  
            cout << "Empty List, nothing to delete" << endl;
            return;
        }

        if (head->next == NULL) {  
            delete head;
            head = NULL;  
        } else {
            Node* currNode = head; // 1
            Node* lastNode = head->next; // 2
            while (lastNode->next != NULL) {  // 3,4
                currNode = currNode->next; // 2,3
                lastNode = lastNode->next; // 3,4 
            }
            currNode->next = NULL; 
            delete lastNode;
        }
        size--;
    }

    int getSize() {
        return size;
    }

    void reverseList() {
        if (head == NULL || head->next == NULL) {  // Use NULL instead of nullptr
            return;
        }

        Node* prevNode = head;
        Node* currNode = head->next;
        while (currNode != NULL) {  // Use NULL instead of nullptr
            Node* nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head->next = NULL;  // Use NULL instead of nullptr
        head = prevNode;
    }

    Node* reverseListRecursive(Node* head) {
        if (head == NULL || head->next == NULL) {  // Use NULL instead of nullptr
            return head;
        }

        Node* newHead = reverseListRecursive(head->next);

        head->next->next = head;
        head->next = NULL;  // Use NULL instead of nullptr

        return newHead;
    }

    void reverseListRecursive() {
        head = reverseListRecursive(head);
    }
};




int main() {
    LL list;
    list.addLast("is");
    list.addLast("a");
    list.addLast("list");
    list.printList();

    list.addFirst("this");
    list.printList();
    cout << "Size: " << list.getSize() << endl;

    list.removeFirst();
    list.printList();

    list.removeLast();
    list.printList();

    list.reverseList();
    list.printList();

    list.reverseListRecursive();
    list.printList();

    return 0;
}




