//Building a Tree using Array

#include <iostream>
#include <vector>

using namespace std;

void inOrder(vector<int> v, int root) {
    if (root >= v.size())
        return;
    
    inOrder(v, 2*root + 1);
    cout << v[root] << "  ";
    inOrder(v, 2*root + 2);
}

void preOrder(vector<int> v, int root) {
    if (root >= v.size())
        return;
    cout << v[root] << "  ";
    preOrder(v, 2*root + 1);
    preOrder(v, 2*root + 2);
}

void postOrder(vector<int> v, int root) {
    if (root >= v.size())
        return;
    postOrder(v, 2*root + 1);
    postOrder(v, 2*root + 2);
    cout << v[root] << "  ";
}

int main() {
    vector<int> v;
    int n;
    cout << "Total number of nodes: ";
    cin >> n;
    int d;
    while(n--) {
        cin >> d;
        v.push_back(d);
    }
    
    cout << "InOrder Traversal is...\n";
    inOrder(v, 0);
    cout << "\n";
    cout << "PreOrder Traversal is...\n";
    preOrder(v, 0);
    cout << "\n";
    cout << "PostOrder Traversal is...\n";
    postOrder(v, 0);
    cout << "\n";
}
