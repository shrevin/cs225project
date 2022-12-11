#include "iterativedfs.hpp"

IterativeDfs::IterativeDfs(std::string file_name, Vertex source, Vertex destination, int depth) {
    g_.readCSV(file_name);
    adjacency_list_ = g_.getAdjacencyList();
    source_ = source;
    destination_ = destination;
    depth_ = depth;
}

bool IterativeDfs::traversal(Vertex tempSrc, std::map<Vertex, std::set<Vertex>> map, int depth) {

    if (tempSrc == destination_) {
        return true;
    }
    if (depth <= 0) {
        return false;
    }
    for (auto i = map[tempSrc].begin(); i != map[tempSrc].end(); i++) {
        if (traversal(*i, map, depth - 1) == true) {
            return true;
        }
    }
    return false;
}

bool IterativeDfs::search() {
    std::map<Vertex, std::set<Vertex>> map = mapToSet();
    for (int i = 0; i <= depth_; i++) {
        if (traversal(source_, map, i) == true) {
            return true;
        }
    }
    return false;
}

std::map<Vertex, std::set<Vertex>> IterativeDfs::mapToSet() {
    std::map<Vertex, std::set<Vertex>> to_return;
    for (auto const &pair: adjacency_list_) {
        std::set<Vertex> set;
        for (auto const &pair2: pair.second) {
            set.insert(pair2.first);
        }
        to_return.insert({pair.first, set});
    }
    return to_return;
}

void IterativeDfs::printDFSResults() {
    bool found = search();

    std::cout<<""<<std::endl;
    std::cout<<"ITERATIVE DEEPENING DFS RESULTS:"<<std::endl;
    std::cout<<""<<std::endl;

    if (found) {
        std::cout<< "The " << destination_ << " subreddit was found within a depth of " << depth_ << " from the " << source_ << " subreddit." <<std::endl;
    } else {
        std::cout<< "The "<< destination_ << " subreddit was not reachable within a depth of " << depth_ << " from the " << source_ << " subreddit."<<std::endl;
        std::cout<<destination_ << " may not be in the same connected component as " << source_ << ", or it is further than " << depth_ << " clicks from the source."<<std::endl;
    }
    std::cout<<""<<std::endl;
}