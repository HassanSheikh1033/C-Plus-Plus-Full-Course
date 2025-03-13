#include<iostream>
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



class Stack {
    private:
        Node* head = NULL;

    public:
        void push(int data) { // 1,2
            Node* newNode = new Node(data);

            if(head == NULL) {
                head = newNode;
                return;
            }

            newNode->next = head;
            head = newNode;
            // 4-3-2-1
        }



        bool isEmpty() {
            return head == NULL;
        }


        int pop() {
            if(isEmpty()) {
                return -1;
            }

            Node* top = head; // 3-2-1
            head = head->next;
            int topData = top->data;
            delete top; 
            return topData;
        }



        int peek() {
            if(isEmpty()) {
                return -1;
            }
            return head->data;
        }
};



int main() {
    Stack* stack = new Stack();
    stack->push(5); 
	stack->push(10);
	stack->push(15);
	stack->push(20);
	
	
    while(!stack->isEmpty()) {
        cout << stack->peek() << endl;
        stack->pop();
    }
    
    
    delete stack;  
    return 0;
}







