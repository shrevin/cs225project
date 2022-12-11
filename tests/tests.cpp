 

// #ifndef CATCH_CONFIG_MAIN
// #  define CATCH_CONFIG_MAIN
// #endif
//#include "catch.hpp"

#include <iostream>
#include <fstream>
#include "../src/graph.hpp"
#include <catch2/catch_test_macros.hpp>


TEST_CASE("test_basic", "[test=basic][weight=1]")
{
    Graph g = Graph();
    g.readCSV("./data/sample.csv");
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
    g.readCSV("./data/sample_emptyline.csv");
    g.printGraph();
    REQUIRE(g.getAdjacencyList().size() == 3);
}

TEST_CASE("test_medium", "[test=medium][weight=1]")
{
    Graph g = Graph();
    g.readCSV("./data/sample_emptyline.csv");
    g.printGraph();
    // REQUIRE();
}

//#endif  