#include <iostream>
#include "graph.hpp"

int main() {
    Graph g = Graph();
    g.readCSV("./data/sample_emptyline.csv");
    g.printGraph();

    return 0;
}