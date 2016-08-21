#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
void Sort(stack<int> s1) {
    stack<int> s2;
    s2.push(s1.top());
    s1.pop();
    int temp = s1.top();
    s1.pop();
    bool flag = false;
    while (!s1.empty()) {
        while (temp > s2.top()) {
            s2.push(temp);
            temp = s1.top();
            s1.pop();
        }
        while (1) {
            if (temp < s2.top()) {
                s1.push(s2.top());
                s2.pop();
            }
            else if (temp > s2.top()){
                s2.push(temp);
                flag = true;
                break;
            }
            if (flag)
                break;
        }
        if (!s1.empty())
            temp = s1.top();
    }

    cout << "The sorted stack is ...\n";
    while (!s2.empty()) {
        cout << s2.top() << "\n";
        s2.pop();
    }

}

int main() {
    stack<int> s1;

    s1.push(1);
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(0);
    
    cout << "Now sorting...\n";
    Sort(s1);
    
}
