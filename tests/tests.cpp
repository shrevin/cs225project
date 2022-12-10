 

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



TEST_CASE("test_basic", "[test=basic][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample.csv");
    //g.printGraph();
    std::cout << "do i get here lol" << std::endl;
    REQUIRE(g.getAdjacencyList().size() == 3);
    REQUIRE(g.getAdjacencyList()["rddtgaming"].size() == 2);
    REQUIRE(g.getAdjacencyList()["playmygame"].size() == 1);
    REQUIRE(g.getAdjacencyList()["dogemarket"].size() == 1);
   
}

TEST_CASE("test_empty_line", "[test=emptyline][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample_emptyline.csv");
    //g.printGraph();
    REQUIRE(g.getAdjacencyList().size() == 3);
}

TEST_CASE("test_medium", "[test=medium][weight=1]")
{
    Graph g = Graph();
    g.readCSV("../data/sample_emptyline.csv");
    //std::cout << g.getAdjacency().
    //REQUIRE();
}

TEST_CASE("bfs", "[test=bfs][weight=1]") {
    BFS b = BFS("../data/sample.csv");
    b.BFSWholeGraph();
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
//#endif  