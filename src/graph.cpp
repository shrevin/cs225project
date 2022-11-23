#include "graph.hpp"


Graph::Graph() {
}
void Graph::addEdge(Node src, Node dest, Edge edge) {
    if (adjacency_list.find(src) == adjacencygit _list.end()) {
        //std::unordered_map<Node, Edge> map = std::unordered_map<Node, Edge>(); //= unordered_map<Vertex, Edge>();
        // map2.insert({dest, edge});
        adjacency_list[src] = std::unordered_map<Node, Edge>();
        adjacency_list[src].insert({src, map2});
        //adjacency_list[src][dest] = edge;
    } else {
        adjacency_list[src][dest] = edge;
        // std::unordered_map<Node, Edge> temp = adjacency_list[src];
        // temp.insert(dest, edge);

        // adjacency_list[src].insert({dest, edge});
    }
}

void Graph::splitString(const std::string & str1, char sep, std::vector<std::string> &fields) {
    std::string str = str1;
    std::string::size_type pos;
    while((pos=str.find(sep)) != std::string::npos) {
        fields.push_back(str.substr(0,pos));
        str.erase(0,pos+1);  
    }
    fields.push_back(str);
    //return fields.size();
}


void Graph::readCSV(std::string path) {
    std::ifstream csv(path);
    while (csv.good()) {
        std::string line;
        std::getline(csv, line);  // line contains the first line
        std::vector<std::string> entries;
        splitString(line, ',', entries);
        // readability is at index 22
        double readability = std::stod(entries.at(22));
        // if adjacency_list does not source_id, create a node and add it to the map and create another map as its value
        // if adjacency_list does contain current subreddit, add dest node to the map<Node, Edge>, and create edge
        Node src = Node(entries.at(2), entries.at(0));
        Node dest = Node(entries.at(2), entries.at(1));
        Edge edge = Edge(src, dest, readability);
        addEdge(src, dest, edge);
    }
}

// void Graph::printGraph() const {
//     for (auto i = adjacency_list.begin(); i != adjacency_list.end(); i++) {
//         std::map<Node, Edge> edges = i->second;
//         std::cout << "NODE: " << i->first.get_source_subreddit_name(); 
//         for (auto j = edges.begin(); j != edges.end(); j++) {
//             std::cout << " " << j->first.get_source_subreddit_name();
//         }
//         std::cout << std::endl;
//     }
    
// }