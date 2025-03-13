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
        Node* temp = head;
        head = head->next;
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
            Node* currNode = head;
            Node* lastNode = head->next;
            while (lastNode->next != NULL) {
                currNode = currNode->next;
                lastNode = lastNode->next;
            }
            currNode->next = NULL;
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


    // Recursive print function
    void printList() {
        printListRecursive(head);
        cout << "NULL" << endl;
    }

    void printListRecursive(Node* node) {
        if (node == NULL)
             return;
        cout << node->data << " -> ";
        printListRecursive(node->next);
    }


    // Search function
    void search(string target) {
        Node* temp = head;
        int position = 0;
        while (temp != NULL) {
            if (temp->data == target) {
                cout << "Element '" << target << "' found at position " << position << "." << endl;
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "Element '" << target << "' not found in the list." << endl;
    }


};


int main() {
    LinkList list;
    int choice, index;
    string data;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add First\n";
        cout << "2. Add Last\n";
        cout << "3. Add at Index\n";
        cout << "4. Remove First\n";
        cout << "5. Remove Last\n";
        cout << "6. Remove at Index\n";
        cout << "7. Print List\n";
        cout << "8. Search Element\n";
        cout << "9. Exit\n";
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
                cout << "Enter element to search: ";
                cin >> data;
                list.search(data);
                break;
            case 9:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
