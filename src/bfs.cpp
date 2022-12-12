#include "bfs.hpp"
#include <algorithm>
#include <iostream>
#include <iostream>
#include <fstream>

BFS::BFS(std::string filename) {
    g.readCSV(filename);
    adjacency_list = g.getAdjacencyList();
}

std::set<Vertex> BFS::BFSWholeGraph() {
    std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>>::iterator it;
    std::set<Vertex> traversed_vertices;
    std::ofstream myfile;
    myfile.open ("../files/vertices_bfs.txt");
    for (it = adjacency_list.begin(); it != adjacency_list.end(); it++) {
        implementBFS(it->first, traversed_vertices, myfile);
    }
    myfile.close();
    return traversed_vertices;
}

void BFS::implementBFS(Vertex start_vertex, std::set<Vertex>& vertices, std::ofstream& myfile) {
    if (std::find(visited.begin(), visited.end(), start_vertex) == visited.end()) {
        q.push(start_vertex);
        visited.insert(start_vertex);
    }
    while (!q.empty()) {
        Vertex popped = q.front();
        vertices.insert(popped);
        q.pop();
        myfile << popped << "\n";
        std::unordered_map<Vertex, Edge> adjacent_vertices = adjacency_list[popped];
        // iterate through adjacent_vertices and add all vertices if they are not visited
        std::unordered_map<Vertex, Edge>::iterator it;
        for (it = adjacent_vertices.begin(); it != adjacent_vertices.end(); it++) {
            //How do I access each element? 
            if (std::find(visited.begin(), visited.end(), it->first) == visited.end()) {
                q.push(it->first);
                visited.insert(popped);
            } 
        }
    }
}



