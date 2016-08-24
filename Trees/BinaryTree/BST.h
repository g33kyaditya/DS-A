#pragma once

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * left;
    Node * right;
};

class BST {
    public:
        BST();
        void insert(int item);
        void insert(int item, Node * newNode);
        void inOrder();
        void inOrderTraverse(Node *);
        void preOrder();
        void preOrderTraverse(Node *);
        Node * createNode(int data);
    private:
        Node * root;
};
