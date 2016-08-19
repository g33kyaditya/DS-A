#include "hashtable.h"
#include "linkedlist.h"

HashTable::HashTable() {
    tableLength = 13;
    array = new LinkedList[tableLength];
}

int HashTable::hash(string str) {
    int value = 0;
    for (int i = 0; i < str.length(); i++) {
        value = value + str[i];
    }
    return (value * str.length())%tableLength;
}

void HashTable::addItem(Item * item) {
    int index = hash(item->key);
    array[index].insertItem(item);
}

bool HashTable::deleteItem(string itemKey) {
    int index = hash(itemKey);
    if (array[index].removeItem(itemKey)) {
        cout << "Successfully removed\n";
    }
    else {
        cout << "Could not remove\n";
    }
}

void HashTable::printTable() {
    for (int i = 0; i < tableLength; i++) {
        array[i].printLinkedList();
        cout << "\n";
    }
}

void HashTable::searchItem(string str) {
    int index = hash(str);
    Item * prev = array[index].searchItem(str);
    if (prev->next == NULL) {
        cout << "Found " << prev->key << "\n";
    }
    else {
        Item * node = prev->next;
        cout << "Found " << node->key << "\n";
    }
}
