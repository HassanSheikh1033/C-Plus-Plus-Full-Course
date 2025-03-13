#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node* root) {
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

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

Node* search(Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key > root->data) {
        return search(root->right, key);
    }

    return search(root->left, key);
}


Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}


Node* deleteNode(Node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children
        Node* temp = findMin(root->right);  
        root->data = temp->data; 
        root->right = deleteNode(root->right, temp->data);  
    }
    
    return root;
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

    cout << "In-order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Deleting node 50..." << endl;
    root = deleteNode(root, 50);

    cout << "In-order Traversal after deletion: ";
    inOrder(root);
    cout << endl;

    return 0;
}


