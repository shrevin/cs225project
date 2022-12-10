#include "bfs.hpp"
#include <algorithm>
#include <iostream>

BFS::BFS(std::string filename) {
    g.readCSV(filename);
    adjacency_list = g.getAdjacencyList();
}

void BFS::BFSWholeGraph() {
    std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>>::iterator it;
    for (it = adjacency_list.begin(); it != adjacency_list.end(); it++) {
        implementBFS(it->first);
    }
}

void BFS::implementBFS(Vertex start_vertex) {
    if (std::find(visited.begin(), visited.end(), start_vertex) == visited.end()) {
        q.push(start_vertex);
        //visited.push_back(start_vertex);
    }
    while (!q.empty()) {
        Vertex popped = q.front();
        std::cout << popped << std::endl;
        q.pop();
        visited.push_back(popped);
        std::unordered_map<Vertex, Edge> adjacent_vertices = adjacency_list[popped];
        // iterate through adjacent_vertices and add all vertices if they are not visited
        std::unordered_map<Vertex, Edge>::iterator it;
        for (it = adjacent_vertices.begin(); it != adjacent_vertices.end(); it++) {
            //How do I access each element? 
            if (std::find(visited.begin(), visited.end(), it->first) == visited.end()) {
                q.push(it->first);
            } 
        }

    }
}