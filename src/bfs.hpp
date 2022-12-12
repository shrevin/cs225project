#include "graph.hpp"
#include <queue>
#include <list>


class BFS {
    public:
        BFS(std::string filename);
        void implementBFS(Vertex start_vertex, std::set<Vertex>& vertices, std::ofstream& myfile);
        std::set<Vertex> BFSWholeGraph();
    private:
        Graph g;
        std::queue<Vertex> q;
        std::set<Vertex> visited;
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjacency_list;
       
};
