#pragma once

#include <iostream>
using namespace std;

class Stack {
    public: 
        Stack(int size);
        ~Stack();
        void push(int element);
        int top();
        void pop();
        void print();
    private:
        int * array;
        int topIndex;
        int size;
}; 
