#include "edge.hpp"
void Edge::setEdgeWeight(int weight) {
    _weight = weight;
}

int Edge::getEdgeWeight() {
    return _weight;
}

Node Edge::getSrc() {
    return _src;
}

Node Edge::getDest() {
    return _dest;
}
