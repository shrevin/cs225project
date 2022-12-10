#pragma once
#include <iostream>
#include <string>

typedef std::string Vertex;

class Edge {
    public:
        Edge() = default;
        Edge(Vertex src, Vertex dest, double weight);
        void setEdgeWeight(double weight);
        void setSrc(Vertex src);
        void setDest(Vertex dest);
        double getEdgeWeight() const;
        Vertex getSrc() const;
        Vertex getDest() const;
    
    private:
        Vertex _src;
        Vertex _dest;
        double _weight;
};