#include "graph.h"
using namespace std;

int main() {
    
    Graph graph(4);

    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.BFS(2);
    cout << "\n\nThe Depth First Search is ...\n";
    graph.DFS(1);
    cout << "\n";
}
