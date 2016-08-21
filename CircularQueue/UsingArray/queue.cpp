#include "queue.h"

Queue::Queue(int s) {
    MAX = s;
    array = new int [MAX];
    front = -1;
    rear = -1;
}

Queue::~Queue() {
    delete [] array;
}

void Queue::insert(int elem) {
    if ((rear + 1)%MAX == front) {
        cout << "Overflow !\n";
        return;
    }

    rear = (rear + 1)%MAX;
    array[rear] = elem;
    if (front == -1)
        front = 0;
}

int Queue::del() {
    if ((front == rear) && (front == -1)) {
        cout << "Underflow !\n";
        return -1;
    }

    int ret = array[front];
    
    if (front == rear) {
        front = rear = -1;
    }
    else
        front = (front + 1)%MAX;
    
    return ret;
}

void Queue::print() {
    for (int i = front; i <= rear; i++)
        cout << array[i] << "  ";

    cout << "\n";
}
