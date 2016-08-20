#pragma once

#include <iostream>
using namespace std;

class Queue {
    public:
        Queue(int s);
        ~Queue();
        void push(int elem);
        void pop();
        void print();
    private:
        int front;
        int rear;
        int size;
        int * array;
};

