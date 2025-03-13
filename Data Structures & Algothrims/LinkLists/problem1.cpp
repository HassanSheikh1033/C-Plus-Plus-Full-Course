#include <iostream>

// Define the structure of the node
struct Node {
    int data;      // Data to store in the node
    Node* link;    // Pointer to the next node
};

int main() {
    int n;
    std::cout << "Enter the value for the nodes: ";
    std::cin >> n;


    Node* start = new Node;  
    start->data = n;         
    start->link = NULL;   


    Node* cur = start;

    for (int i = 1; i < 10; ++i) {
        Node* temp = new Node;
        temp->data = n;   
        temp->link = NULL;

        
        cur->link = temp;
        cur = temp;         
    }

    
    cur->link = start;

    
    std::cout << "Circular linked list: ";
    Node* temp = start;
    do {
        std::cout << temp->data << " ";
        temp = temp->link;
    } while (temp != start);
    std::cout << std::endl;

    
    temp = start;
    Node* nextNode;
    do {
        nextNode = temp->link;
        delete temp;
        temp = nextNode;
    } while (temp != start);

    return 0;
}
