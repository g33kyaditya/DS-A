#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;
    
    s.push(1);
    cout << "Top is = " << s.top() << "\n";
    s.push(2);
    cout << "Top is = " << s.top() << "\n";
    s.push(10);
    cout << "Top is = " << s.top() << "\n";
    s.push(15);
    cout << "Top is = " << s.top() << "\n"; 
    s.push(100);
    cout << "Top is = " << s.top() << "\n";  
    s.print();

    s.pop();
    cout << "Top is = " << s.top() << "\n";
    s.pop();
    cout << "Top is = " << s.top() << "\n";
    s.pop();
    cout << "Top is = " << s.top() << "\n";
    s.pop();
    cout << "Top is = " << s.top() << "\n";
    s.print();
    s.pop();
    s.print();
    s.pop();
} 
