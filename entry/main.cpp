#include <iostream>
#include "graph.hpp"
#include "iterativedfs.hpp"
#include "dijkstra.hpp"
#include "bfs.hpp"

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
        std::string filepath_to_write_to;
        std::cout << "Enter a filepath to the file you want to store the output of BFS: ";
        std::cin >> filepath_to_write_to;
        BFS b = BFS(filepath);
        std::set<Vertex> l = b.BFSWholeGraph(filepath_to_write_to);
        std::cout << "Your output has been generated! Please navigate to " << filepath_to_write_to << std::endl;
    } else if (traversal == "Dijkstras") {
        Vertex source;
        std::cout << "Enter a source subreddit: ";
        std::cin >> source;

        Vertex target;
        std::cout << "Enter a target subreddit: ";
        std::cin >> target;

        Dijkstra d = Dijkstra(g, source, filepath);
        d.getShortestDistance(target);
        std::vector<std::string> path = d.getShortestPath(target);
        std::cout << std::endl;
        std::cout << "Here are the nodes in your shortest path traversal!" << std::endl;
        std::cout << std::endl;
        for (size_t i = 0; i < path.size(); i++) {
        std::cout << "Node " << i << " = " << path[i] << std::endl; 
        }
    } else {
        std::cout << "Unrecognizable selection! Run main again. " << std::endl;
    }
    
    return 0;
}