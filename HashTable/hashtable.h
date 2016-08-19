#pragma once

#include "linkedlist.h"

using namespace std;

class HashTable {
    public:
        HashTable();
        int hash(string str);
        void addItem(Item * newItem);
        bool deleteItem(string itemKey);
        void printTable();
        void searchItem(string str);
    
    private:
       int tableLength;
       LinkedList * array;
};
