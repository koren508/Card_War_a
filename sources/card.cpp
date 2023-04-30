#include <iostream>
#include "card.hpp"
using namespace std;

Card::Card(string shape, int value)
{
    set_shape(shape);
    set_value(value);
}
void Card::set_shape(string s){
    shape = s;
}

string Card::get_shape(){
    return shape;
}

void Card::set_value(int v){
    if(v>0 && v<13)
    value = v;
}

int Card::get_value(){
    return value;
}
