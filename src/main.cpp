#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

int main() {
    std::cout<<"hello"<<std::endl;
    Node n = Node();
    n.set_source_subreddit_name("shreya_fan_club");
    std::cout << n.get_source_subreddit_name() << std::endl;
    return 0;
}