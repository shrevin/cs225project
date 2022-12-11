#include "graph.hpp"



Graph::Graph() {

}

void Graph::addEdge(Vertex src, Vertex dest, Edge edge) {
    if (adjacency_list.find(src) == adjacency_list.end()) {
        adjacency_list[src] = std::unordered_map<Vertex, Edge>();
        adjacency_list[src].insert({dest, edge});
    } else {
        adjacency_list[src].insert({dest, edge});
    }
    // bool src_in_vert = false;
    // bool dest_in_vert = false; 

    // for (size_t i = 0; i < vertices.size(); i++) {
    //     if (src == vertices[i]) {
    //         src_in_vert = true;
    //     }
    //     if (dest == vertices[i]) {
    //         dest_in_vert = true;
    //     }
    // }

    // if(!src_in_vert) {
    //     vertices.push_back(src);
    // }

    // if(!dest_in_vert) {
    //     vertices.push_back(dest);
    // }
    
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

std::string Graph::TrimRight(const std::string & str) {
    std::string tmp = str;
    return tmp.erase(tmp.find_last_not_of(" ") + 1);
}

std::string Graph::TrimLeft(const std::string & str) {
    std::string tmp = str;
    return tmp.erase(0, tmp.find_first_not_of(" "));
}

std::string Graph::Trim(const std::string & str) {
    std::string tmp = str;
    return TrimLeft(TrimRight(str));
}

void Graph::readCSV(std::string path) {
    std::ifstream csv(path);
    while (csv.good()) {
        std::string line;
        std::getline(csv, line);
        if (line == "") {
            continue;
        }  
        // line contains the first line
        std::vector<std::string> entries;
        splitString(line, ',', entries);
        // std::cout << line << std::endl;
        // for (std::string s: entries) {
        //     std::cout << "new entry: " << s << std::endl;
        // } 
        // readability is at index 22
        std::vector<std::string> meta_vec;
        std::string meta = entries.at(5);
        //splitString(meta, ',', meta_vec);
        double readability = std::stod(Trim(entries.at(22)));
        //std::cout << "READABILITY = " << readability << std::endl;
        // if adjacency_list does not source_id, create a node and add it to the map and create another map as its value
        // if adjacency_list does contain current subreddit, add dest node to the map<Node, Edge>, and create edge
        Vertex src =  Trim(entries.at(0));
        //Node(entries.at(2), entries.at(0));
        Vertex dest = Trim(entries.at(1));
        vertices.insert(src);
        vertices.insert(dest);
        //Node(entries.at(2), entries.at(1));
        Edge edge = Edge(src, dest, readability);
        addEdge(src, dest, edge);
    }
}

void Graph::printGraph() const {
    for (auto i = adjacency_list.begin(); i != adjacency_list.end(); i++) {
        std::unordered_map<Vertex, Edge> edges = i->second;
        std::cout << "NODE: " << i->first;
        std::cout << "  NODES:";
        for (auto j = edges.begin(); j != edges.end(); j++) {
            std::cout << " " << j->first << " readability " << j->second.getEdgeWeight();
        }
        std::cout << std::endl;
    }
    
}

std::unordered_map<Vertex, std::unordered_map<Vertex, Edge>> Graph::getAdjacencyList() {
    return adjacency_list;
}

 std::set<Vertex> Graph::getVertices(){
    return vertices;
}
