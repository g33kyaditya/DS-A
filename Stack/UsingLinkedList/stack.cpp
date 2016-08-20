#include "stack.h"

Stack::Stack() {
    head = NULL;
}

Stack::~Stack() {
    while (head != NULL) {
        Node * temp = head;
        delete temp;
        head = head->next;
    }
}

void Stack::push(int elem) {
    Node * newNode = new Node;
    newNode->next = NULL;
    newNode->data = elem;

    //Push to top
    
    Node * temp = head;
    head = newNode;
    head->next = temp;
}

int Stack::top() {
    return head->data;
}

void Stack::pop() {
    if (head == NULL){
        cout << "Underflow !\n";
        return;
    }
 
    Node * temp = head;
    head = head->next;
    delete temp;
}

void Stack::print() {
    Node * temp = head;
    while (temp != NULL) {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "\n";
}
