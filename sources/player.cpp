#include <iostream>
#include "player.hpp"
#include "game.hpp"
using namespace std;


Player::Player(string name)
{
    set_name(name);
}

int Player::stacksize()
{
    return Stack_Size;
}

void Player::set_stack_size(int num)
{
    if(num>=0 && num<=52)
        Stack_Size = num;
}

int Player::cardesTaken()
{
    return Cards_Taken;
}

void Player::set_cardes_taken(int num)
{
    if (num>=0)
    Cards_Taken = num;
}

void Player::set_in_game(bool boolean)
{
    In_Game = boolean;
}

bool Player::get_in_game()
{
    return In_Game;
}

string Player::get_name()
{
    return Player_Name;
}

void Player::set_name(string new_name)
{
    Player_Name = new_name;
}
