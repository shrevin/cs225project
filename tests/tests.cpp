 

// #ifndef CATCH_CONFIG_MAIN
// #  define CATCH_CONFIG_MAIN
// #endif
//#include "catch.hpp"
#include <catch2/catch_test_macros.hpp>
#include <iostream>
//#include <fstream>
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
    REQUIRE(b.BFSWholeGraph() == ans);
}

TEST_CASE("bfs_medium", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/sample_copy.csv");
    std::set<Vertex> l = b.BFSWholeGraph();
    // std::list<Vertex> ans = {"askanthropology", "askhistorians", "bluebirds", "soccer", 
    // "badkarma", "gamesell", "reactiongifs", "bestof2013", "minecraftbattles", "minecraft", "gaybros",
    // "askreddit", "todayilearned", "circlejerkcopypasta", "thehiddenbar", "writingprompts", "pics", "badhistory",
    // "worldpolitics", "hailcorporate", "firstworldanarchists", "dogecoin", "novacoin", "metalcore", "corejerk",
    // "suicidewatch", "offmychest", "jobs4dogecoins", "oldschoolcoolnsfw", "posthardcore", "theredlion", "locationbot",
    // "legaladvice", "nfl", "cfb", "dogemarket", "playmygame", "gamedev"};
    REQUIRE(b.BFSWholeGraph().size() == 43);
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

TEST_CASE("dijkstras_1", "[test=dijkstras_1][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    Dijkstra d = Dijkstra(g, "random", "../data/sample.csv");
    REQUIRE(d.getShortestDistance("random") == 0);
}

TEST_CASE("dijkstras_2", "[test=dijkstras_2][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    Dijkstra d = Dijkstra(g, "rddtgaming", "../data/sample.csv");
    REQUIRE(d.getShortestDistance("rddtrust") == 10.0075);
}
TEST_CASE("dijkstras_3", "[test=dijkstras_3][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "metalcore", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("bestof2013") == 33.3773638082);
}
TEST_CASE("dijkstras_4", "[test=dijkstras_4][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "dogemarket", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("dogecoin") == 14.3002564103);
}
TEST_CASE("dijkstras_5", "[test=dijkstras_5][weight=1]") {
    Graph g = Graph();
    g.readCSV("../data/sample_copy.csv");
    Dijkstra d = Dijkstra(g, "nfl", "../data/sample_copy.csv");
    REQUIRE(d.getShortestDistance("metalcore") == 0);
}