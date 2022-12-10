#pragma once
#include "graph.hpp"
#include <iostream>
#include <set>
#include <vector>
#include "edge.hpp"

class IterativeDfs {
    public:
    IterativeDfs(std::string file_name, Vertex source, Vertex destination, int depth);
    bool traversal(Vertex tempSrc, std::map<Vertex, std::set<Vertex>> map, int depth);
    bool search();
    std::map<Vertex, std::set<Vertex>> mapToSet();

    private:
    std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjacency_list_;
    Graph g_;
    Vertex source_;
    Vertex destination_;
    int depth_;
};