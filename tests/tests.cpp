#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include "../src/graph.cpp"
#include "../src/bfs.cpp"
#include "../src/iterativedfs.cpp"
#include "../src/dijkstra.hpp"



TEST_CASE("test_basic", "[test=basic][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    REQUIRE(g.getAdjacencyList().size() == 3);
    REQUIRE(g.getAdjacencyList()["rddtgaming"].size() == 2);
    REQUIRE(g.getAdjacencyList()["playmygame"].size() == 1);
    REQUIRE(g.getAdjacencyList()["dogemarket"].size() == 1);
   
}

TEST_CASE("test_empty_line", "[test=emptyline][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample_emptyline.csv");
    REQUIRE(g.getAdjacencyList().size() == 3);
}

TEST_CASE("test_medium", "[test=medium][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample_emptyline.csv");
    //std::cout << g.getAdjacency().
    //REQUIRE();
}

TEST_CASE("bfs_small", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/sample.csv");
    std::set<Vertex> ans = {"dogemarket", "dogecoin", "playmygame", "gamedev", "rddtgaming", "random", "rddtrust"};
    REQUIRE(b.BFSWholeGraph("../files/vertices_bfs.txt") == ans);
}

TEST_CASE("bfs_medium", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/sample_copy.csv");
    std::set<Vertex> l = b.BFSWholeGraph("../files/vertices_bfs.txt");
    std::set<Vertex> ans = {"askanthropology", "askhistorians", "askreddit", "badhistory", "badkarma", "bestof2013", "bluebirds", "cfb", "circlejerkcopypasta", 
    "corejerk", "dogecoin", "dogemarket", "firstworldanarchists", "gamedev", "gamesell", "gaybros", "hailcorporate", 
    "jobs4dogecoins", "legaladvice", "locationbot", "metalcore", "minecraft", "minecraftbattles", 
    "nfl", "novacoin", "offmychest", "oldschoolcoolnsfw", "pics", "playmygame", "posthardcore", 
     "reactiongifs", "soccer", "suicidewatch", "thehiddenbar", "theredlion", "todayilearned", 
    "worldpolitics", "writingprompts"};
    REQUIRE(l == ans);
}

TEST_CASE("bfs_two_nodes", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/single.csv");
    std::set<Vertex> l = b.BFSWholeGraph("../files/vertices_bfs.txt");
    std::set<Vertex> ans = {"leagueoflegends", "teamredditteams"};
    REQUIRE(l == ans);
}

TEST_CASE("bfs_empty", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/empty.csv");
    std::set<Vertex> l = b.BFSWholeGraph("../files/vertices_bfs.txt");
    std::set<Vertex> ans = {};
    REQUIRE(l == ans);
}

TEST_CASE("Empty_graph", "[test=iterative_dfs][weight=1]") {
    IterativeDfs d = IterativeDfs("", "askreddit", "uncomfortableqs", 0);
    REQUIRE(d.search() == false);
}

TEST_CASE("iterative_dfs_not_found", "[test=iterative_dfs][weight=1]") {
    IterativeDfs d = IterativeDfs("../data/sample_copy.csv", "leagueoflegends", "inlandempire", 4);
    REQUIRE(d.search() == false);
}

TEST_CASE("iterative_dfs_incorrect_depth", "[test=iterative_dfs][weight=1]") {
    IterativeDfs d = IterativeDfs("../data/sample_copy.csv", "thehiddenbar", "pics", 1);
    REQUIRE(d.search() == false);
}

TEST_CASE("iterative_dfs_correct_depth", "[test=iterative_dfs][weight=1]") {
    IterativeDfs d = IterativeDfs("../data/sample_copy.csv", "thehiddenbar", "pics", 2);
    REQUIRE(d.search() == true);
}

TEST_CASE("iterative_dfs_correct_depth_2", "[test=iterative_dfs][weight=1]") {
    IterativeDfs d = IterativeDfs("../data/sample_copy.csv", "circlejerkcopypasta", "todayilearned", 2);
    REQUIRE(d.search() == true);
} 

TEST_CASE("dijkstras_1", "[test=dijkstras_1][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    Dijkstra d = Dijkstra(g, "random", "../data/sample.csv");
    REQUIRE(d.getShortestDistance("random") == 0);
    std::vector<std::string> path = d.getShortestPath("random");
    std::cout << "TEST 1" << std::endl;
    for (size_t i = 0; i < path.size(); i++) {
        std::cout << "Node " << i << " = " << path[i] << std::endl; 
    }
}

TEST_CASE("dijkstras_2", "[test=dijkstras_2][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    Dijkstra d = Dijkstra(g, "rddtgaming", "../data/sample.csv");
    REQUIRE(d.getShortestDistance("rddtrust") == 10.0075);
    std::vector<std::string> path = d.getShortestPath("rddtrust");
    std::cout << "TEST 2" << std::endl;
    for (size_t i = 0; i < path.size(); i++) {
        std::cout << "Node " << i << " = " << path[i] << std::endl; 
    }

}

TEST_CASE("dijkstras_3", "[test=dijkstras_3][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "metalcore", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("bestof2013") == 33.3773638082);
    std::vector<std::string> path = d.getShortestPath("bestof2013");
    std::cout << "TEST 3" << std::endl;
    for (size_t i = 0; i < path.size(); i++) {
        std::cout << "Node " << i << " = " << path[i] << std::endl; 
    }
}
TEST_CASE("dijkstras_4", "[test=dijkstras_4][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "dogemarket", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("dogecoin") == 14.3002564103);

    std::vector<std::string> path = d.getShortestPath("dogecoin");
    std::cout << "TEST 4" << std::endl;
    for (size_t i = 0; i < path.size(); i++) {
        std::cout << "Node " << i << " = " << path[i] << std::endl; 
    }
}
TEST_CASE("dijkstras_5", "[test=dijkstras_5][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "nfl", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("metalcore") == 0);
}
