#include <iostream>

#include "linkedlist.h"

using namespace std;
int main() {

    LinkedList list;

    Node * a = new Node {1, NULL};
    Node * b = new Node {2, NULL};
    Node * c = new Node {3, NULL};
    Node * d = new Node {4, NULL};
    Node * e = new Node {5, NULL};

    list.addNodeToFront(a);
    list.addNodeToFront(b);
    list.print();
    list.addNodeToFront(c);
    list.addNodeToFront(d);
    list.addNodeToFront(e);
    list.print();

    cout << "\n\n Now deleting\n\n";
    
    bool ok1 = list.deleteNode(2);
    bool ok2 = list.deleteNode(4);
    list.print();
}
