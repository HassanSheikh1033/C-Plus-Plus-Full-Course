#include<iostream>
using namespace std;



struct node{
    int data;
    node* left;
    node* right;
}

node* insert(node* root, int value){
    if(root == NULL){
        node* nN = new node();
        nN->data = value;
        nN->left = NULL;
        nN->right = NULL;
        return nN;
    }

    if(value < root->data){
        root->left = insert(root->left, value)
    }

    if(value > root->data){
        root->right = insert(root->right,value)
    }

    return root;
}



int main(){
    node* root = NULL;
    root = insert(root,50);
    root = insert(root,30);

    return 0;
}

