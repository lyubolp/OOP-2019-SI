#include <iostream>
#include <cstring>
#include "Player.h"

Player::Player()
{
    name = new char[1];
    name[0] = '\0';

    tokens = 1;
}

Player::Player(const Player& player_to_copy_from)
{
    int size = strlen(player_to_copy_from.name);

    name = new char[size+1];
    strcpy(name, player_to_copy_from.name);

    tokens = player_to_copy_from.tokens;
}
Player& Player::operator=(const Player& player_to_copy_from)
{
    if(this != &player_to_copy_from)
    {
        delete[] name;
        
        int size = strlen(player_to_copy_from.name);

        name = new char[size+1];
        strcpy(name, player_to_copy_from.name);

        tokens = player_to_copy_from.tokens;
    }
    return *this;
}

void Player::set_name(const char* new_name)
{
    int size = strlen(new_name);

    name = new char[size+1];
    strcpy(name, new_name);
}

int Player::get_tokens() const
{
    return tokens;
}

Player::~Player()
{
    delete[] name;
}