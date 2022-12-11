#pragma once

#include <vector>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>

#include "edge.hpp"



class Graph {
    public:
        /** Adds an edge between two nodes
          * @param src is the source node
          * @param dest is the destination node
          * @param weight is the weight of the edge between the source and the destination nodes
          * @return void
          */
        Graph();
        void addEdge(Vertex src, Vertex dest, Edge edge);
        void readCSV(std::string filename);
        void splitString(const std::string & str1, char sep, std::vector<std::string> &fields);
        void printGraph() const;
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> getAdjacencyList();
        std::vector<Vertex> getVertices();
        std::string TrimRight(const std::string & str);
        std::string TrimLeft(const std::string & str);
        std::string Trim(const std::string & str);


    private:
        //Stores graph as a map where key is node and value is a map of nodes with the edge in between the two nodes
        std::vector<Vertex> vertices;
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjacency_list;

};