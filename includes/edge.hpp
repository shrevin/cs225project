#pragma once
#include "node.hpp"

#include <iostream>

class Edge {
    public:
        Edge() = default;
        Edge(Node src, Node dest, double weight);
        void setEdgeWeight(double weight);
        void setSrc(Node src);
        void setDest(Node dest);
        int getEdgeWeight() const;
        Node getSrc() const;
        Node getDest() const;
    
    private:
        Node _src;
        Node _dest;
        double _weight;
};