#include "queue.h"

Queue::Queue(int s) {
    front = -1;
    rear = -1;
    size = s;
    array = new int[size];
}

Queue::~Queue() {
    delete [] array;
}

void Queue::push(int elem) {
    // if not overflow
    if (rear +1 < size) {
        rear++;
        array[rear] = elem;
    }
    else {
        cout << "Overflow ! \n";
    }
}

void Queue::pop() {
    if (front == rear) {
        cout << "Underflow !\n";
        return;
    }

    front++;
}

void Queue::print() {
    for (int i = front+1; i <= rear; i++) {
        cout << array[i] << "   ";
    }
    cout << "\n";
}
