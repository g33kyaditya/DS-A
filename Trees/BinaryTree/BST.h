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
        Node * search(int data);
        void remove(Node * ptr, int data);
        void noChild(Node * parent, int data);
        void oneChild(Node * parent, int data);
        void twoChild(Node * parent, int data);
    private:
        Node * root;
};
