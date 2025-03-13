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

public:
    Node* head;
    int size;

    LL() {
        head = NULL;
        size = 0;
    }

    void addFirst(string data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
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
        }
        size++;
    }

    void printList(Node* currNode) {
        if (currNode == NULL) {
            cout << "NULL" << endl;
            return;
        }

        cout << currNode->data << " -> ";
        printList(currNode->next);
    }

    void printList() {
        printList(head);
    }
    
    
    int search(string key, Node* temp, int i) {
        if (temp == NULL) {
            cout << "Reached end of list, key not found." << endl;
            return -1;
        }

        cout << "Checking node with data: " << temp->data << " at index " << i << endl;

        if (temp->data == key) {
            return i;
        }

        return search(key, temp->next, i + 1);
    }

    int search(string key) {
        return search(key, head, 0);
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

    string key;
    cout << "Enter data to search: ";
    cin >> key;

    int position = list.search(key);
    if (position != -1) {
        cout << "Data found at index " << position << endl;
    } else {
        cout << "Data not found in the list." << endl;
    }

    return 0;
}



