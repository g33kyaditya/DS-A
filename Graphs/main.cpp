#include "graph.h"
using namespace std;

int main() {
    
    Graph graph(4);

    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    graph.BFS(2);
}
