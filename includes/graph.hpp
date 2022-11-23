#pragma once
#include "node.hpp"
#include "edge.hpp"
#include <vector>
#include <fstream>
#include <map>
#include <unordered_map>

class Graph {
    public:
        /** Adds an edge between two nodes
          * @param src is the source node
          * @param dest is the destination node
          * @param weight is the weight of the edge between the source and the destination nodes
          * @return void
          */
        Graph();
        void addEdge(Node src, Node dest, Edge edge);
        void readCSV(std::string filename);
        void splitString(const std::string & str1, char sep, std::vector<std::string> &fields);
        void printGraph() const;
    private:
        //Stores graph as a map where key is node and value is a map of nodes with the edge in between the two nodes
        std::unordered_map<Node, std::unordered_map<Node, Edge>> adjacency_list;

};