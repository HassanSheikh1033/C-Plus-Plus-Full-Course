#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void insertfirst(Node** a) {
  Node* newNode = new Node();
  newNode->data = 5;
  newNode->next = *a;
  *a = newNode;
}

void insertlast(Node** a, Node** b) {
  Node* newNode = new Node();
  newNode->data = 6;
  newNode->next = NULL;
  if (*b != NULL) {
    (*b)->next = newNode;
  } else { 
    *a = newNode;
  }
  *b = newNode; 
}

void removefirst(Node** a) {
  if (*a == NULL) {
    return; 
  }
  Node* temp = *a;
  *a = (*a)->next;
  delete temp;
}

void removelast(Node** a, Node** b) {
  if ((*a)->next == NULL) { 
    delete *a;
    *a = NULL;
    *b = NULL; 
    return;
  }

  Node* temp = *a;
  while (temp->next != *b) {
    temp = temp->next;
  }

  Node* t2 = *b;
  temp->next = NULL;
  *b = temp; 
  delete t2;
}

void addAtSpecificPoint(Node** a, int data, int position) {
  Node* newNode = new Node();
  newNode->data = data;

  if (position == 0) { 
    newNode->next = *a;
    *a = newNode;
    return;
  }

  Node* temp = *a;
  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }

  if (temp == NULL) { 
    cout << "Position out of bounds." << endl;
    delete newNode;
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}


void removeAtSpecificPoint(Node** a, int position) {
  if (*a == NULL) {
    cout << "List is empty." << endl;
    return;
  }

  Node* temp = *a;

  if (position == 0) { 
    *a = temp->next;
    delete temp;
    return;
  }

  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }

  if (temp == NULL || temp->next == NULL) { // If position is out of bounds
    cout << "Position out of bounds." << endl;
    return;
  }

  Node* nextNode = temp->next->next;
  delete temp->next;
  temp->next = nextNode;
}




void display(Node* a) {
  while (a != NULL) {
    cout << a->data << " ";
    a = a->next;
  }
}

int main() {
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

  Node* tail = th;

  insertfirst(&h);
  insertlast(&h, &tail);

  cout << "List after inserting at the beginning and end: ";
  display(h);
  cout << endl;

  addAtSpecificPoint(&h, 10, 2); // Add 10 at position 2
  cout << "List after adding 10 at position 2: ";
  display(h);
  cout << endl;

  removeAtSpecificPoint(&h, 1); // Remove node at position 1
  cout << "List after removing node at position 1: ";
  display(h);
  cout << endl;

  removefirst(&h);
  removelast(&h, &tail);

  cout << "List after removing first and last nodes: ";
  display(h);
  cout << endl;

  return 0;
}
