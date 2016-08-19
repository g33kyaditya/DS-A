#include <iostream>
#include "hashtable.h"
#include "linkedlist.h"

using namespace std;

int main() {
    HashTable table;

    Item * A = new Item {"Apple", NULL};
    Item * B = new Item {"Banana", NULL};
    Item * C = new Item {"Caterpillar", NULL};
    Item * D = new Item {"Dog", NULL};
    Item * E = new Item {"Elephant", NULL};
    Item * F = new Item {"Fedora", NULL};
    Item * G = new Item {"Goosebumps", NULL};
    Item * H = new Item {"House", NULL};
    Item * I = new Item {"Insects", NULL};
    Item * J = new Item {"Jam", NULL};
    Item * K = new Item {"Kite", NULL};
    Item * L = new Item {"Limestone", NULL};
    Item * M = new Item {"Mountaineering", NULL};
    Item * N = new Item {"Night", NULL};
    Item * O = new Item {"Open Sesame", NULL};
    Item * P = new Item {"Potatoes", NULL};
    Item * Q = new Item {"Quantum Mechanics", NULL};
    Item * R = new Item {"Rrrrrrrrrrawr", NULL};
    Item * S = new Item {"Snakes", NULL};
    Item * T = new Item {"Tizzy Tube", NULL};
    Item * U = new Item {"Underworld", NULL};
    Item * V = new Item {"Volcanic Ash", NULL};
    Item * W = new Item {"Who When What Why", NULL};
    Item * X = new Item {"XXX", NULL};
    Item * Y = new Item {"Yellow", NULL};
    Item * Z = new Item {"Zest of Lemon", NULL};

    table.addItem(A);
    table.addItem(B);
    table.addItem(C);
    table.printTable();
    cout << "\n";
    table.addItem(D);
    table.addItem(E);
    table.addItem(F);
    table.addItem(G);
    table.addItem(H);
    table.addItem(I);
    table.addItem(J);
    table.addItem(K);
    table.addItem(L);
    table.addItem(M);
    table.addItem(N);
    table.addItem(O);
    table.addItem(P);
    table.addItem(Q);
    table.addItem(R);
    table.addItem(S);
    table.addItem(T);
    table.addItem(U);
    table.addItem(V);
    table.addItem(W);
    table.addItem(X);
    table.addItem(Y);
    table.addItem(Z);
    
    table.printTable();
    cout << "\n";
    table.searchItem("Underworld");
    table.searchItem("Yellow");
    table.searchItem("Kite");

    table.deleteItem("Underworld");

    table.printTable();
    cout << "\n";
    return 0;
}
