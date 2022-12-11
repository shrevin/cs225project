#include "graph.hpp"
#include <queue>
#include <list>


class BFS {
    public:
        BFS(std::string filename);
        void implementBFS(Vertex start_vertex, std::list<Vertex>& vertices, std::ofstream& myfile);
        std::list<Vertex> BFSWholeGraph();
    private:
        Graph g;
        std::queue<Vertex> q;
        std::vector<Vertex> visited;
        std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> adjacency_list;
       
};