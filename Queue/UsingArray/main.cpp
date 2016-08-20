#include "queue.h"

int main() {
    Queue q(3);

    q.push(1);
    q.print();
    q.push(2);
    q.print();
    q.push(3);
    q.print();

    q.push(4);

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();

    q.pop();
}
