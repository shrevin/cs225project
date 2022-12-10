#include "graph.hpp"
#include <queue>

class BFS {
    public:
        BFS(std::string filename);
        void implementBFS(Vertex start_vertex);
        void BFSWholeGraph();
    private:
        Graph g;
        std::queue<Vertex> q;
        std::vector<Vertex> visited;
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjacency_list;
};