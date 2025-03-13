#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;
};

void insertfirst(Node** a){
  Node* newNode = new Node();
  newNode->data = 5;
  newNode->next = *a;
  if (*a != NULL) {
    (*a)->prev = newNode;
  }
  newNode->prev = NULL;
  *a = newNode;
}

void insertlast(Node** a, Node** b){
  Node* newNode = new Node();
  newNode->data = 6;
  newNode->next = NULL;
  if (*b != NULL) {
    (*b)->next = newNode;
  }
  newNode->prev = *b;
  *b = newNode;
}


void display(Node* a) {
  while(a != NULL){
    cout << a->data << " ";
    a = a->next;
  }
  cout << endl;
}


void removefirst(Node** a) {
  if (*a == NULL) {
    return; 
  }
  Node* temp = *a;
  *a = (*a)->next;
  if (*a != NULL) {
    (*a)->prev = NULL;  
  }
  delete temp;
}

void removelast(Node** a) {
  Node* b = *a;
  while(b->next != NULL){
    b = b->next;
  }
  if (*a == b) { 
    delete *a;
    *a = NULL;
    b = NULL;
    return;
  }

  Node* temp = b;
  b = b->prev;
  b->next = NULL;
  delete temp;
}


// Function to add a node at a specific position in the doubly linked list
void addAtSpecificPoint(Node** a, int data, int position) {
  Node* newNode = new Node();
  newNode->data = data;
  
  if (position == 0) { // Insert at the start
    newNode->next = *a;
    newNode->prev = NULL;
    if (*a != NULL) {
      (*a)->prev = newNode;
    }
    *a = newNode;
    return;
  }

  Node* temp = *a;
  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }

  if (temp == NULL) { // Position is out of bounds
    cout << "Position out of bounds." << endl;
    delete newNode;
    return;
  }

  newNode->next = temp->next;
  newNode->prev = temp;
  
  if (temp->next != NULL) {
    temp->next->prev = newNode;
  }
  
  temp->next = newNode;
}



// Function to remove a node at a specific position in the doubly linked list
void removeAtSpecificPoint(Node** a, int position) {
  if (*a == NULL) {
    cout << "List is empty." << endl;
    return;
  }

  Node* temp = *a;
  
  if (position == 0) { // Remove the first node
    *a = temp->next;
    if (*a != NULL) {
      (*a)->prev = NULL;
    }
    delete temp;
    return;
  }

  for (int i = 0; temp != NULL && i < position; i++) {
    temp = temp->next;
  }

  if (temp == NULL) { // Position is out of bounds
    cout << "Position out of bounds." << endl;
    return;
  }

  if (temp->prev != NULL) {
    temp->prev->next = temp->next;
  }
  
  if (temp->next != NULL) {
    temp->next->prev = temp->prev;
  }

  delete temp;
}

int main(){
  Node* h = NULL;
  Node* s = NULL;
  Node* th = NULL;

  h = new Node();
  s = new Node();
  th = new Node();

  h->data = 1;
  s->data = 2;
  th->data = 3;

  h->next = s;
  s->next = th;
  th->next = NULL;
  
  h->prev = NULL;
  s->prev = h;
  th->prev = s;

  Node* tail = th;

  insertfirst(&h);
  insertlast(&h, &tail);
  
  cout << "List after inserting at the beginning and end: ";
  display(h);

  addAtSpecificPoint(&h, 10, 2); // Add 10 at position 2
  cout << "List after adding 10 at position 2: ";
  display(h);

  removeAtSpecificPoint(&h, 1); // Remove node at position 1
  cout << "List after removing node at position 1: ";
  display(h);

  removefirst(&h);
  removelast(&h);

  cout << "List after removing first and last nodes: ";
  display(h);

  return 0;
}
