#include <iostream>
#include <cstring>

#include "Message.h"
#include "Messenger.h"

#include "Game.h"
#include "Player.h"



void hacker(Game& game_obj)
{
    std::cout << "The secret number is " << game_obj.number;
    std::cout << "\n You are welcome :) \n";
}

int main() {

    Player p;

    Game g(3,&p);

    char c;
    std::cin >> c;

    while (c == 'y' || c == 'h')
    {
        if( c == 'h') 
            hacker(g);
            
        g.play_game();
        std::cin >> c;
    }
    return 0;
}
