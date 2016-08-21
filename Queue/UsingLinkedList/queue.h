#pragma once

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

clas Queue {
    public:
        Queue();
        ~Queue();
        void push(int elem);
        void pop();
        void print();
    private:
        Node * head;
        Node * last;
};
