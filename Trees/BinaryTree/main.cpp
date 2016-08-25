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

    cout << "InOrder Traversal is...\n";
    tree.inOrder();
    cout << "\n\n\n";
    
    Node * foo = tree.search(45);
    tree.remove(foo, 45);
    cout << "After removal of 45, the InOrder Traversal is...\n";
    tree.inOrder();
    cout << "\n\n\n";

    foo = tree.search(50);
    tree.remove(foo, 50);
    cout << "After removal of 50, the InOrder Traversal is...\n";
    tree.inOrder();
    cout << "\n\n\n";

    foo = tree.search(25);
    tree.remove(foo, 25);
    cout << "After removal of 25, the InOrder Traversal is...\n";
    tree.inOrder();
    cout << "\n\n\n";

}
