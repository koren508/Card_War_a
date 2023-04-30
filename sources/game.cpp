#include <iostream>
#include "game.hpp"
using namespace std;

Game::Game(Player &a, Player &b): p1(a), p2(b){}
void Game::playTurn(){}
void Game::printLastTurn(){}
void Game::playAll(){}
void Game::printWiner(){}
void Game::printLog(){}
void Game::printStats(){}
Player Game::get_p1(){return p1;}
Player Game::get_p2(){return p2;}
void Game::set_p1(Player &p){}
void Game::set_p2(Player &p){}