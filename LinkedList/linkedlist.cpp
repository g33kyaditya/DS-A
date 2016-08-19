#include "linkedlist.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::addNodeToFront(Node * node) {
    if (head == NULL) {
        head = node;
        head->next = NULL;
        return;
    }
    
    Node * temp = head;
    head = node;
    head->next = temp;
}

bool LinkedList::deleteNode(int data) {
    if (head->data == data) {
        Node * temp = head;
        head = head->next;
        delete temp;
        return true;
    }
    
    Node * temp = head;
    Node * prev = NULL;
    bool found = false;
    while (temp->next != NULL) {
        if (temp->next->data == data) {
            prev = temp;
            found = true;
            break;
        }
        if (found)
            break;

        temp = temp->next;
    }

    if (prev != NULL) {
        prev->next = prev->next->next;
        return true;
    }
    else {
        return false;
    }
}

void LinkedList::print() {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "\n";
}
