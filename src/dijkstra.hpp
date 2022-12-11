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
        Dijkstra();
        Dijkstra(Graph graph, Vertex _start);
        Vertex getStart() const { return start; }
        map<Vertex, double> getDist() const { return distances; }
        map<Vertex , Vertex> getPre() const { return predecessors; }
        
    private:
        Vertex start;
        map<Vertex, double> distances; // <Arbitrary Vertex, shortes distance from start to it>
        map<Vertex, Vertex> predecessors; // <Arbitrary Vertex, Predecessor>
};