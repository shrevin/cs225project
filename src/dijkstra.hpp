#include <iostream>
#include <string>
#include <limits>
#include <map>
#include "graph.hpp"
#include <bits/stdc++.h>
#include <vector>


using namespace std;
typedef std::string Vertex;

class Dijkstra {
    public:
        Dijkstra() ;
        Dijkstra(Graph& graph, Vertex _start, std::string filepath);
        Vertex getStart() const { return start; }
        map<Vertex, double> getDistances() const { return distances; }
        map<Vertex , Vertex> getPredecessors() const { return predecessors; }
        double getShortestDistance(Vertex _end);
        vector<Vertex> getShortestPath(Vertex _end);
        
    private:
        Vertex start;
        map<Vertex, double> distances; // <Arbitrary Vertex, shortes distance from start to it>
        map<Vertex, Vertex> predecessors; // <Arbitrary Vertex, Predecessor>
};