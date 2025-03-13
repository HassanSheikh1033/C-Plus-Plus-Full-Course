#include <iostream>
#include <string>
using namespace std;


class Node {
public:
    string data;
    Node* next;
    Node* prev; 

    Node(string data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;  
    }
};


class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() {
        head = NULL;
    }
    
    int getSize() { 
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }


    void addFirst(string data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head; 
            head->prev = newNode; 
            head = newNode;
        }
    }


    void addLast(string data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* lastNode = head;
            while (lastNode->next != NULL) {
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
            newNode->prev = lastNode;  
        }
    }



    void addAtIndex(int index, string data) {
        int size = getSize();
        if (index < 0 || index > size) {
            cout << "Invalid index" << endl;
            return;
        }
        if (index == 0) {
            addFirst(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* prevNode = head;
        for (int i = 0; i < index - 1; i++) {
            prevNode = prevNode->next;
        }
        newNode->next = prevNode->next;
        newNode->prev = prevNode;
        if (prevNode->next != NULL) {
            prevNode->next->prev = newNode;  
        }
        prevNode->next = newNode;
    }



    void removeFirst() {
        if (head == NULL) {
            cout << "Empty List, nothing to delete" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;  
        }
        delete temp;
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
            Node* lastNode = head;
            while (lastNode->next != NULL) {
                lastNode = lastNode->next;
            }
            lastNode->prev->next = NULL;  
            delete lastNode;
        }
    }



    void removeAtIndex(int index) {
        int size = getSize();
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        if (index == 0) {
            removeFirst();
            return;
        }
        Node* prevNode = head;
        for (int i = 0; i < index - 1; i++) {
            prevNode = prevNode->next;
        }
        Node* nodeToDelete = prevNode->next;
        prevNode->next = nodeToDelete->next;
        if (nodeToDelete->next != NULL) {
            nodeToDelete->next->prev = prevNode;  
        }
        delete nodeToDelete;
    }

    
    void printList() {
        Node* currNode = head;
        while (currNode != NULL) {
            cout << currNode->data << " <-> ";
            currNode = currNode->next;
        }
        cout << "NULL" << endl;
    }
};


int main() {
    DoublyLinkedList list;
    int choice, index;
    string data;
    do {
        switch (choice) {
            case 1:
                cout << "Enter data to add at the beginning: ";
                cin >> data;
                list.addFirst(data);
                break;
            case 2:
                cout << "Enter data to add at the end: ";
                cin >> data;
                list.addLast(data);
                break;
            case 3:
                cout << "Enter index to add at: ";
                cin >> index;
                cout << "Enter data to add: ";
                cin >> data;
                list.addAtIndex(index, data);
                break;
            case 4:
                list.removeFirst();
                break;
            case 5:
                list.removeLast();
                break;
            case 6:
                cout << "Enter index to remove: ";
                cin >> index;
                list.removeAtIndex(index);
                break;
            case 7:
                list.printList();
                break;
            case 8:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}




