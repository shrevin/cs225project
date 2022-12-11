#include <iostream>
#include "graph.hpp"

int main() {
    // Graph g = Graph();
    // g.readCSV("./data/sample_emptyline.csv");
    // g.printGraph();
    std::string filepath;
    std::cout << "Enter a filepath for your graph data (no quotes): ";
    std::cin >> filepath;
    std::cout << filepath << std::endl;
    Graph g = Graph();
    g.readCSV(filepath);
    g.printGraph();
    return 0;
}