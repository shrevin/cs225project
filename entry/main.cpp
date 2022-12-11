#include <iostream>
#include "graph.hpp"
#include "iterativedfs.hpp"

int main() {
    // Graph g = Graph();
    // g.readCSV("./data/sample_emptyline.csv");
    // g.printGraph();
    std::string filepath;
    std::cout << "Enter a filepath for your graph data (no quotes): ";
    std::cin >> filepath;
    //std::cout << filepath << std::endl;
    std::cout <<"Adjacency List: " <<std::endl;
    std::cout<< "" <<std::endl;
    Graph g = Graph();
    g.readCSV(filepath);
    g.printGraph();
    std::cout<< "" <<std::endl;
    Vertex source;
    std::cout << "Enter a source subreddit: ";
    std::cin >> source;

    Vertex target;
    std::cout << "Enter a target subreddit: ";
    std::cin >> target;

    int depth;
    std::cout << "Enter a depth amount: ";
    std::cin >> depth;


    IterativeDfs d = IterativeDfs(filepath, source, target, depth);
    d.printDFSResults();

    return 0;
}