#include "graph.h"
#include <queue>

Graph::Graph(int total) {
    V = total;
    adj = new list<int>[V+1];
}

void Graph::addEdge(int vert1, int vert2) {
    adj[vert1].push_back(vert2);
    adj[vert2].push_back(vert1);
}

void Graph::BFS(int start) {
    bool *visited = new bool[V+1];
    for (int i = 0; i <= V; i++)
        visited[i] = false;

    queue<int> q;
    cout << "The Breadth First Search is ... \n";

    q.push(start);
    visited[start] = true;
    int u;
    list<int>::iterator it;
    while(!q.empty()) {
        u = q.front();
        cout << u << " ";
        q.pop();
        for (it = adj[u].begin(); it != adj[u].end(); ++it) {
            if (!visited[*it]) {
                visited[u] = true;
                q.push(*it);
            }
        }
    }
}

void Graph::DFS(int start) {
    bool * visited = new bool[V+1];
    for (int i = 0; i <= V; i++)
        visited[i] = false;

    
    DFSUtil(start, visited);
}

void Graph::DFSUtil(int start, bool * visited) {
    cout << start << "  ";
    visited[start] = true;
    list<int>::iterator it;
    for (it = adj[start].begin(); it != adj[start].end(); it++) {
        if (!visited[*it]) {
            DFSUtil(*it, visited);
        }
    }
}
