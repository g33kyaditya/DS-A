#pragma once

#include <iostream>
#include <iterator>
#include <list>

using namespace std;

class Graph {
    public:
        Graph(int total);
        void addEdge(int vert1, int vert2);
        void BFS(int vertex);
        void DFS(int vertex);
    private:
        list<int> * adj;
        int V;
};
