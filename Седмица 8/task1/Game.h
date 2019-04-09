#pragma once
#include "Player.h"

class Game
{
    private:
        int number;
        Player* player;
    public:
        Game();
        Game(int, Player*);

        void play_game();

        friend void hacker(Game& game_obj);
};