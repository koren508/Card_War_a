#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;


TEST_CASE("Player") {
    Player p1("Moshe");
    Player p2("Moshe");
    CHECK_FALSE(&p1 == &p2);
    Game game(p1,p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    game.playTurn();
    CHECK(p1.stacksize() <= 25);
    CHECK(p1.cardesTaken() >= 0);
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.cardesTaken() + p2.cardesTaken() <= 26);
}

TEST_CASE("Game") {
    Player p1("Moshe");
    Player p2("Rafi");
    Game game1(p1,p2);
    //checks before game started
    CHECK_NOTHROW(game1.playTurn());
    CHECK_NOTHROW(game1.playAll());
    CHECK_THROWS(game1.printWiner());
    CHECK_THROWS(game1.printLastTurn());
    CHECK_THROWS(game1.printLog());
    //start playing until the end
    game1.playAll();
    CHECK_NOTHROW(game1.printLastTurn());
    CHECK_NOTHROW(game1.printLog());
    CHECK_NOTHROW(game1.printStats());
    CHECK_NOTHROW(game1.printWiner());
    CHECK_NOTHROW(game1.printStats());
    CHECK_THROWS(game1.playTurn());                
    CHECK_THROWS(game1.playAll());
}






