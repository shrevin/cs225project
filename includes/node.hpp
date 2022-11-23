#pragma once
#include <iostream>
using namespace std;

class Node {
    public:
        // constructor
        Node();
        Node(std::string id, std::string subreddit_name); 
        std::string get_post_id() const;
        std::string get_source_subreddit_name() const;
        void set_source_subreddit_name(std::string name);

    private:
        std::string _post_id;
        std::string _source_subreddit_name;    
};


