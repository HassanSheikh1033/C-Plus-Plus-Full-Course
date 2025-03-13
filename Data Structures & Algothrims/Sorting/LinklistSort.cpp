#include <iostream>
#include <string>
using namespace std;


class LL {
    class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;  
        }
    }; 

    Node* head; 

public:
    LL() {
        head = NULL; 
    }

    void addFirst(int data) {
        Node* newNode = new Node(data);  
        newNode->next = head; 
        head = newNode; 
    }


    void printList() {
        Node* currNode = head;
        while (currNode != NULL) {  
            cout << currNode->data << " -> ";
            currNode = currNode->next;
        }
        cout << "NULL" << endl; 
    }


void SelectionSort() {
    Node* i = head; 
    while (i != NULL && i->next != NULL) { 
        Node* min = i; 
        Node* j = i->next;

        while (j != NULL) { 
            if (j->data < min->data) {
                min = j;
            }
            j = j->next;
        }

        int temp = i->data;
        i->data = min->data;
        min->data = temp;

        i = i->next;
    }
}

};




int main() {
    LL list;
    list.addFirst(7);
    list.addFirst(0);
    list.addFirst(8);
    list.addFirst(4);
    list.addFirst(2);
    list.printList();

    list.SelectionSort();
 	list.printList();
 
    return 0;
}




