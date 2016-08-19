#pragma once

struct Node {
    int data;
    Node * next;
};

class LinkedList {
    public:
        LinkedList();
        void addNodeToFront(Node * node);
        bool deleteNode(int data);
        void print();
    private:
        Node * head;
};
