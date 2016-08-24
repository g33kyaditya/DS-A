#include "BST.h"

BST::BST() {
    root = NULL;
}

Node * BST::createNode(int data) {
    Node * newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void BST::insert(int item) {
    Node * newNode = createNode(item);

    if (root == NULL) {
        root = newNode;
    }
    else {
        insert(item, newNode);
    }
}

void BST::insert(int item, Node * newNode) {
    Node * parent = NULL;
    Node * temp = root;
    while (temp != NULL) {
        if (item < temp->data) {
            parent = temp;
            temp = temp->left;
        }
        else {
            parent = temp;
            temp = temp->right;
        }
    }
    
    if (item < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;
}

void BST::inOrder() {
    Node * temp = root;
    inOrderTraverse(temp);
}

void BST::inOrderTraverse(Node * temp) {
    if (temp == NULL)
        return;

    inOrderTraverse(temp->left);
    cout << temp->data << "  ";
    inOrderTraverse(temp->right);
}

void BST::preOrder() {
    Node * temp = root;
    preOrderTraverse(temp);
}

void BST::preOrderTraverse(Node * temp) {
    if (temp == NULL)
        return;

    cout << temp->data << "  ";
    preOrderTraverse(temp->left);
    preOrderTraverse(temp->right);
}
