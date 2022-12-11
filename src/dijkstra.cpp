#include "dijkstra.hpp"
#include "graph.hpp"
#include "edge.hpp"
#include "bfs.hpp"
#include <map>
#include <vector>
#include <string>
#include <limits>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

// template <class T, class Compare>
// class heap

Dijkstra::Dijkstra() {};
Dijkstra::Dijkstra(Graph& graph, Vertex _start, std::string filepath) : start(_start) {
    // PriorityQueue Q // min distance, defined by d[v]
    // std::pair<double, Vertex>>
    // graph.printGraph();
    priority_queue<std::pair<double, Vertex>, vector<std::pair<double, Vertex>>, greater<std::pair<double, Vertex>>> priority;
    std::set<Vertex> verticies;
    BFS b = BFS(filepath);
    std::ofstream myfile;
    myfile.open ("../files/vertices_bfs.txt");
    b.implementBFS(_start, verticies, myfile);
    myfile.close();
    //graph.getVertices();
    std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adj = graph.getAdjacencyList();

    // DijkstraSSSP(G, s):
    // foreach (Vertex v : G):
        // d[v] = +inf
        // p[v] = NULL
    
    std::vector<Vertex>::iterator it;
    for (Vertex vertex : verticies) {
        distances[vertex] = std::numeric_limits<double>::infinity();
        predecessors[vertex] = "";
    }
    // for (auto v : graph.getVertices()) {
    //     distances[v] = std::numeric_limits<double>::infinity();
    //     predecessors[v] = "";
    // }
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
    //int i = 0;
    while (!priority.empty()) {
        //std::cout << i << std::endl;
      //  i++;
        Vertex u = priority.top().second;
        priority.pop();
        std::unordered_map<Vertex, Edge> neighbors = adj[u];
        //std::cout << "size = " << neighbors.size() << std::endl;
            
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>>::iterator it;
        for (auto it = neighbors.begin(); it != neighbors.end(); it++) {
         //   std::cout << "in here!!" << i << std::endl;
            Vertex v = it->first;
            double cost = it->second.getEdgeWeight();
        //    std::cout << u << " " << v << std::endl;
          //  std::cout << cost << " " << distances[u] << " " << distances[v] << std::endl;
            if (cost + distances[u] < distances[v]) {
            //    std::cout << "updated: " << v << std::endl;
                distances[v] = cost + distances[u];
                predecessors[v] = u;
                priority.push(make_pair(distances[v], v));
            }
        }
    }
    //std::cout << "here4" << std::endl;
};

double Dijkstra::getShortestDistance(Vertex _end) {
    // Vertex curr = _end;
    // double total_dist = 0;
    // while(curr != _start) {
    //     if (!curr.empty()){
    //     std::cout << curr << std::endl;
    //     }
    //     if (distances[curr] ==  std::numeric_limits<double>::infinity() || predecessors[curr] == "") {
    //         break;
    //     }
    //     total_dist += distances[curr];
    //     curr = predecessors[curr];
    // }
    return distances[_end];
}

vector<Vertex> Dijkstra::getShortestPath(Vertex _end) {
    vector<Vertex> path;
    Vertex curr = _end;
    while (curr != start) {
        path.push_back(curr);
        curr = predecessors[curr];
    }
    path.push_back(start);
    return path;
}




// std::set<Vertex> getConnected(Graph& graph, Vertex& start){
//     std::queue<Vertex> q;
//     std::set<Vertex> visited;
//     std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adj = graph.getAdjacencyList();
//     q.push(start);
//     while (!q.empty()){
//         for ()
//     }
// }
