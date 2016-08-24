#include "BST.h"

using namespace std;

int main() {
    BST tree;
    tree.insert(52);
    tree.insert(25);
    tree.insert(50);
    tree.insert(15);
    tree.insert(40);
    tree.insert(45);
    tree.insert(20);

    tree.inOrder();
    cout << "\n";
    tree.preOrder();
    cout << "\n";
}
