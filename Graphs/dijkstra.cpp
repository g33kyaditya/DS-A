#include <iostream>
#include <climits>
#include <vector>

using namespace std;

#define V 9

int findMinimum(bool visited[], int dist[]);
void dijkstra(int graph[][9], int start);

int main() {
    
    int graph[V][V] = {
                        {0, 4, 0, 0, 0, 0, 0, 8, 0},
                        {4, 0, 8, 0, 0, 0, 0, 11, 0},
                        {0, 8, 0, 7, 0, 4, 0, 0, 2},
                        {0, 0, 7, 0, 9, 14, 0, 0, 0},
                        {0, 0, 0, 9, 0, 10, 0, 0, 0},
                        {0, 0, 4, 0, 10, 0, 2, 0, 0},
                        {0, 0, 0, 14, 0, 2, 0, 1, 6},
                        {8, 11, 0, 0, 0, 0, 1, 0, 7},
                        {0, 0, 2, 0, 0, 0, 6, 7, 0}
                      };
 
    dijkstra(graph, 0);
}

int findMinimum(bool visited[], int dist[]) {
    int current = INT_MAX;
    int ret;
    for (int i = 0; i < V; i++) {
        if (dist[i] <= current && !visited[i]) {
            current = dist[i];
            ret = i;
        }
    }

    return ret;
}

void dijkstra(int graph[V][V], int start) {
    int dist[V];
    bool visited[V];
    vector<int> path;
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[start] = 0;
    path.push_back(start);
    for (int count = 0; count < V - 1; count++) {
        int u = findMinimum(visited, dist);

        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !visited[v] && graph[u][v] != INT_MAX && graph[u][v] + dist[u] < dist[v]) {
                dist[v] = graph[u][v] + dist[u];
                path.push_back(v);
            }
        }
    }
    
    cout << "Vertex i's distance from source...\n";
    for (int i = 0; i < V; i++) {
        cout << i << "    " << dist[i] << "\n";
    }

    cout << "\nThe path is...\n";
    for (int i = 0; i < V; i++)
        cout << path[i] << "   ";
    cout << "\n";

}
