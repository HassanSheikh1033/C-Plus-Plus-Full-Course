#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};


Node* insert(Node* root, int data) {
    if (root == NULL) {
        return new Node(data); 
    }

    if (data < root->data) {
        root->left = insert(root->left, data); 
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}


void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " "; 
    inOrder(root->right);  
}


Node* search(Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key > root->data) {
        return search(root->right, key);
    }

    return search(root->left, key);
}


int main() {
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "In-order traversal of the BST: ";
    inOrder(root);
    cout << endl;

    int key = 40;
    Node* result = search(root, key);
    if (result != NULL) {
        cout << "Node with value " << key << " found in the tree." << endl;
    } else {
        cout << "Node with value " << key << " not found in the tree." << endl;
    }

    return 0;
}



