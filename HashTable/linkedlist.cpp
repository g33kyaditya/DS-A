#include "linkedlist.h"

LinkedList::LinkedList() {
    head = NULL;
    length = 0;
}

void LinkedList::insertItem(Item * node) {
    if (head == NULL) {
        head = node;
    }
    else {
        Item * temp = head;
        head = node;
        head->next = temp;
    }
    length++;
}

bool LinkedList::removeItem(string key) {
    Item * node = searchItem(key);
    
    if (node == head) {
        Item * temp = head;
        head = head->next;
        delete temp;
        cout << "Successfully deleted node \n";
        length--;
        return true;
    }

    if (node != NULL) {
        Item * nodeToBeDeleted = node->next;
        node->next = nodeToBeDeleted->next;
        cout << "Successfully deleted node with value :" << nodeToBeDeleted->key << "\n";
        delete nodeToBeDeleted;
        length--;
        return true;
    }
    else {
        cout << "Could not find the node to be deleted\n";
        return false;
    }
}

Item * LinkedList::searchItem(string key) {
    Item * temp = head;
    if (head->key == key) {
        return head;
    }

    Item * next;
    while (temp->next != NULL) {
        next = temp->next;
        if (next->key == key) {
            return temp;
        }
        temp = next;
    }
}

void LinkedList::printLinkedList() {
    Item * temp = head;
    while(temp != NULL) {
        cout << temp->key << " -> ";
        temp = temp->next;
    }
}
