#include "edge.hpp"

Edge::Edge(Node src, Node dest, double weight) : _src(src), _dest(dest), _weight(weight) {
}

void Edge::setEdgeWeight(double weight) {
    _weight = weight;
}

void Edge::setSrc(Node src) {
    _src = src;
}

void Edge::setDest(Node dest) {
    _dest = dest;
}

int Edge::getEdgeWeight() const {
    return _weight;
}

Node Edge::getSrc() const {
    return _src;
}

Node Edge::getDest() const {
    return _dest;
}
