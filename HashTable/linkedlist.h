#pragma once

#include <iostream>
using namespace std;

struct Item {
    string key;
    Item * next;
};

class LinkedList {
    public:
        LinkedList();
        void insertItem(Item * node);
        bool removeItem(string key);
        Item * searchItem(string key);
        void printLinkedList();
    private:
        Item * head;
        int length;
};
