#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <iostream>
#include "card.hpp"
using namespace std;
namespace ariel{}

class Player{
    private:
    //variables
    string Player_Name;             //player's name
    int Stack_Size = 26;            //player's stack size
    int Cards_Taken = 0;            //card that this player won
    bool In_Game = false;           //player is already in game or not
    //Card my_cards[52];

    //methods
    public:
    Player(string name);                       //constructor
    int stacksize();                   //get stacksize
    void set_stack_size(int num);    //set stacksize
    int cardesTaken();                 //get cardestaken
    void set_cardes_taken(int num);  //set cardes taken
    void set_in_game(bool boolean);  //set in_game
    bool get_in_game();                //get in_game
    string get_name();                 //get name
    void set_name(string new_name);  //set name

};
#endif