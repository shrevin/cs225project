#include "dijkstra.hpp"
#include "graph.hpp"
#include "edge.hpp"
#include <map>
#include <vector>
#include <string>
#include <limits>
#include <queue>
#include <iostream>
using namespace std;

// template <class T, class Compare>
// class heap

Dijkstra::Dijkstra() {};
Dijkstra::Dijkstra(Graph graph, Vertex _start) : start(_start) {
    // PriorityQueue Q // min distance, defined by d[v]

    priority_queue<vector<std::pair<double, Vertex>>, std::pair<double, Vertex>, greater<std::pair<double, Vertex>>> priority;
    std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adj = graph.getAdjacencyList();
    // DijkstraSSSP(G, s):
    // foreach (Vertex v : G):
        // d[v] = +inf
        // p[v] = NULL
    
    for (auto v : graph.getVertices()) {
        distances[v] = std::numeric_limits<double>::infinity();
        predecessors[v] = "";
    }

    // d[s] = 0

    distances[_start] = 0;

    // Q.buildHeap(G.vertices())

    for (auto i = distances.begin(); i != distances.end(); i++) {
        std::pair<double, Vertex> temp; // int = distance, Vertex is vertex
        temp.first = i->second;
        temp.second = i ->first;
        priority.push(temp);
    }
    
    // repeat while !Q.empty():
    // Vertex u = Q.removeMin()
    // foreach (Vertex v : neighbors of u):
    // if cost(u, v) + d[u] < d[v]:
        // d[v] = cost(u, v) + d[u]
        // p[v] = u

    while (!priority.empty()) {
        Vertex u = priority.top().second;
        priority.pop();
        std::unordered_map<Vertex, Edge> neighbors = adj[u];
        for (auto it = neighbors.begin(); it != neighbors.end(); it++) {
            Vertex v = it->first;
            double cost = it->second.getEdgeWeight();
            if (cost + distances[u] < distances[v]) {
                distances[v] = cost + distances[u];
                predecessors[v] = u;
            }
        }
    }
};



