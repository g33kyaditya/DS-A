#pragma once

#include <iostream>
using namespace std;

class Queue{
    public:
        Queue(int max);
        ~Queue();
        void insert(int elem);
        int del();
        void print();
    private:
        int * array;
        int MAX;
        int front;
        int rear;
};
