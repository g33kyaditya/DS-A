#include "stack.h"

Stack::Stack(int s) {
    size = s;
    array = new int[size];
    topIndex = -1;
}

void Stack::push(int element) {
    topIndex++;
    if (topIndex >= size) {
        cout << "Cannot add element. Overflow!\n";
        return;
    }
    array[topIndex] = element;
}

Stack::~Stack() {
    delete [] array;
}

int Stack::top() {
    return array[topIndex];
}

void Stack::pop() {
    topIndex--;
    if (topIndex < 0) {
        cout << "Cannot remove element. Underflow!\n";
        return;
    }
}

void Stack::print() {
    for (int i = 0; i < topIndex; i++) {
        cout << array[i] << " <--";
    }
    cout << "\n";
}
