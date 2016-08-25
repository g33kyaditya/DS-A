#include "BST.h"

BST::BST() {
    root = NULL;
}

Node * BST::createNode(int data) {
    Node * newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node * BST::search(int data) {
    Node * temp = root;
    Node * parent = NULL;

    while (temp != NULL) {
        parent = temp;
        if (data < temp->data) 
            temp = temp->left;
        else if (data > temp->data)
            temp = temp->right;
        
        if (temp->data == data) { 
            //cout << "Search Complete\n";
            return parent;
        }
    }
    //cout << "Search InComplete\n";
    return parent;
}

void BST::noChild(Node * parent, int data) {

    if (parent->left != NULL) {
        if (parent->left->data == data) {
            parent->left = NULL;
        }
    }
    if (parent->right != NULL) {
        if (parent->right->data == data) {
            parent->right = NULL;
        }
    }

}

void BST::oneChild(Node * parent, int data) {
    if (parent->left != NULL) {
        if (parent->left->data == data) {
            Node * currentNode = parent->left;
            if (currentNode->left != NULL)
                 parent->left = currentNode->left;
            else
                parent->left = currentNode->right;
        }
    }
    
    if (parent->right != NULL) {
        if (parent->right->data == data) {
            Node * currentNode = parent->right;
            if (currentNode->left != NULL)
                parent->right = currentNode->left;
            else
                parent->right = currentNode->right;

        }
    }
}

void BST::remove(Node * parent, int data) {
    if (parent == NULL) {
        cout << "Node not found\n";
        return;
    }

    Node * currentNode = NULL;
    if (parent->left != NULL) {
        if (parent->left->data == data) {
            currentNode = parent->left;
        }
    }
    
    if (parent->right != NULL) {
        if (parent->right->data == data)
            currentNode = parent->right;
    }
    
    
    //No children
    if (currentNode->left == NULL && currentNode->right == NULL) {
        noChild(parent, data);
        delete currentNode;
        return;
    }
    
    //Two children
    if (currentNode->left != NULL && currentNode->right != NULL) {
        //Find smallest in the Right Subtree
        
        Node * p = NULL;
        Node * rt = currentNode->right;
        while(rt != NULL) {
            p = rt;
            rt = rt->left;
        }

        currentNode->data = p->data;
        cout << "Smallest node in the right subtree is = " << p->data << "\n";
        cout << currentNode->data << "\n";
        currentNode->right = NULL;
        //delete rt;
        //remove(currentNode, p->data);
    } 

    //One child
    if (currentNode->left != NULL || currentNode->right != NULL) {
        oneChild(parent, data);
        delete currentNode;
        return;
    }
}

void BST::insert(int item) {
    Node * newNode = createNode(item);

    if (root == NULL) {
        root = newNode;
    }
    else {
        insert(item, newNode);
    }
}

void BST::insert(int item, Node * newNode) {
    Node * parent = NULL;
    Node * temp = root;
    while (temp != NULL) {
        if (item < temp->data) {
            parent = temp;
            temp = temp->left;
        }
        else {
            parent = temp;
            temp = temp->right;
        }
    }
    
    if (item < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;
}

void BST::inOrder() {
    Node * temp = root;
    inOrderTraverse(temp);
}

void BST::inOrderTraverse(Node * temp) {
    if (temp == NULL)
        return;

    inOrderTraverse(temp->left);
    cout << temp->data << "  ";
    inOrderTraverse(temp->right);
}

void BST::preOrder() {
    Node * temp = root;
    preOrderTraverse(temp);
}

void BST::preOrderTraverse(Node * temp) {
    if (temp == NULL)
        return;

    cout << temp->data << "  ";
    preOrderTraverse(temp->left);
    preOrderTraverse(temp->right);
}
