#include "edge.hpp"

Edge::Edge(Vertex src, Vertex dest, double weight) : _src(src), _dest(dest), _weight(weight) {
}

void Edge::setEdgeWeight(double weight) {
    _weight = weight;
}

void Edge::setSrc(Vertex src) {
    _src = src;
}

void Edge::setDest(Vertex dest) {
    _dest = dest;
}

double Edge::getEdgeWeight() const {
    return _weight;
}

Vertex Edge::getSrc() const {
    return _src;
}

Vertex Edge::getDest() const {
    return _dest;
}
