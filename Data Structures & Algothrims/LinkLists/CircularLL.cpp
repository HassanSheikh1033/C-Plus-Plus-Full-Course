#include <iostream>
#include <string>
using namespace std;


class Node {
public:
    string data;
    Node* next;
    Node(string data) {
        this->data = data;
        this->next = NULL;
    }
};



class LinkList {
    Node* head;
public:
    LinkList() {
        head = NULL;
    }
    
    int getSize() { 
        if (head == NULL) return 0;
        int count = 1;
        Node* temp = head;
        while (temp->next != head) {
            count++;
            temp = temp->next;
        }
        return count;
    }


    void addFirst(string data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* lastNode = head;
            while (lastNode->next != head) {
                lastNode = lastNode->next;
            }
            newNode->next = head;
            head = newNode;
            lastNode->next = head;
        }
    }


    void addLast(string data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* lastNode = head;
            while (lastNode->next != head) {
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
            newNode->next = head; 
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
        prevNode->next = newNode;
    }



    void removeFirst() {
        if (head == NULL) {
            cout << "Empty List, nothing to delete" << endl;
            return;
        }
        if (head->next == head) {
            delete head;
            head = NULL;
        } else {
            Node* lastNode = head;
            while (lastNode->next != head) {
                lastNode = lastNode->next;
            }
            Node* temp = head;
            head = head->next;
            lastNode->next = head;
            delete temp;
        }
    }



    void removeLast() {
        if (head == NULL) {
            cout << "Empty List, nothing to delete" << endl;
            return;
        }
        if (head->next == head) {
            delete head;
             head = NULL;
        } else {
            Node* currNode = head;
            while (currNode->next->next != head) {
                currNode = currNode->next;
            }
            Node* lastNode = currNode->next;
            currNode->next = head;
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
        delete nodeToDelete;
    }


    void printList() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* currNode = head;
        do {
            cout << currNode->data << " -> ";
            currNode = currNode->next;
        } while (currNode != head);
        cout << "(head)" << endl;
    }

};



int main() {
    LinkList list;
    int choice, index;
    string data;
    do {
        cout << "Enter your choice: ";
        cin >> choice;

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




