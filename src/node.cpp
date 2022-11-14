#include "node.hpp"

Node::Node() {

}

Node::Node(std::string set_id, std::string set_subreddit_name) {
    _post_id = set_id;
    _source_subreddit_name = set_subreddit_name; 
}
std::string Node::get_post_id() {
    return _post_id;
}

std::string Node::get_source_subreddit_name() {
    return _source_subreddit_name;
}

void Node::set_source_subreddit_name(std::string name) {
    _source_subreddit_name = name;
}