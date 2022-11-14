#pragma once
#include "Node.hpp"

#include <iostream>

class Edge {
    public:
        void setEdgeWeight(int weight);
        int getEdgeWeight();
        Node getSrc();
        Node getDest();
    
    private:
        Node _src;
        Node _dest;
        int _weight;
};