#pragma once

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

class Stack {
    public:
        Stack();
        ~Stack();
        void push(int elem);
        int top();
        void pop();
        void print();
    private:
        Node * head;
};
