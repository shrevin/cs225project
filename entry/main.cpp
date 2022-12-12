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

    std::string traversal;
    std::cout<<"Enter a traversal: Iterative_Deepening_DFS, Dijkstras, or BFS: ";
    std::cin >> traversal;

    std::cout<<"traversal: "<< traversal << std::endl;

    if (traversal == "Iterative_Deepening_DFS") {
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
    } else if (traversal == "BFS") {
        std::cout<<"hello"<<std::endl;
    } else if (traversal == "Dijkstras") {
        std::cout<<"hello"<<std::endl;
    } else {
        std::cout << "Unrecognizable selection!" << std::endl;
    }
    
    return 0;
}