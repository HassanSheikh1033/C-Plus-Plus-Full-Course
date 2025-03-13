#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};


void insertfirst(Node** a, Node** b) {
  Node* newNode = new Node();
  newNode->data = 5;

    newNode->next = *a;
    *a = newNode;
    (*b)->next = *a; 
  }



void insertlast(Node** a, Node** b) {
  Node* newNode = new Node();
  newNode->data = 6;

    newNode->next = *a;
    (*b)->next = newNode;
    *b = newNode;        
  }


void removefirst(Node** a, Node** b) {
  Node* temp = *a;

  *a = (*a)->next; 
  (*b)->next = *a; 

  delete temp;
}


void removelast(Node** a, Node** b) {
  if (*a == *b) { 
    delete *a;
    *a = NULL;
    *b = NULL;
  } else {
    Node* temp = *a;

    while (temp->next != *b) {
      temp = temp->next;
    }

    Node* t2 = *b;
    temp->next = *a;
    *b = temp;  
    delete t2;      
  }
}


void display(Node* a) {
  Node* h = a;
  do {
    cout << a->data << " ";
    a = a->next;
  } while (a != h); 
  cout << endl;
}



int main() {
  Node* h = NULL; 
  Node* tail = NULL;

  h = new Node();
  Node* s = new Node();
  Node* th = new Node();

  h->data = 1;
  s->data = 2;
  th->data = 3;

  h->next = s;
  s->next = th;
  th->next = h; 
  tail = th;    

  insertfirst(&h, &tail);
  insertlast(&h, &tail);

  display(h);

  removefirst(&h, &tail);
  removelast(&h, &tail);

  display(h);

  return 0;
}



