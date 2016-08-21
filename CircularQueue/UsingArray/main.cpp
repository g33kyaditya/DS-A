#include "queue.h"

int main() {
    Queue q(3);
    
    q.insert(1);
    q.print();
    q.insert(2);
    q.print();
    q.insert(3);
    q.print();
    q.insert(4);

    cout << "Deleted " << q.del() << "\n";
    q.print();

    cout << "Deleted " << q.del() << "\n";
    q.print();

    cout << "Deleted " << q.del() << "\n";
    q.print();
    
    q.del();

}
