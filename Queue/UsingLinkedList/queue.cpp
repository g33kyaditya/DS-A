#include "queue.h"

Queue::Queue() {
    head = NULL;
    last = NULL;
}

Queue::~Queue() {
    Node * temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

void Queue::push(int elem) {
    Node * newNode = new Node;
    newNode->next = NULL;
    newNode->data = elem;

    if (head == NULL) {
        head = newNode;
        last = newNode;
    }
    else {
        last->next = newNode;
        last = newNode;
    }
}

void Queue::pop() {
    if (head != NULL) {
        Node * temp = head;
        head = head->next;
        delete temp;
    }
    else {
        cout << "Underflow !\n";
    }
}

void Queue::print() {
    Node * temp = head;
    while (temp != NULL) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

