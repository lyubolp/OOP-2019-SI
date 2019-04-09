#include "Game.h"
#include <iostream>

Game::Game()
{
    number = 0;
    player = nullptr;
}
Game::Game(int number_to_guess, Player* player_that_plays)
{
    number = number_to_guess;
    player = player_that_plays;
}

void Game::play_game()
{
    if(player->tokens > 0)
    {
        int guess;
        std::cout << "Enter a number: ";
        std::cin >> guess;

        if(guess == number)
        {
            std::cout << "You won 2 tokens";
            player->tokens += 2;
        }
        else
        {
            std::cout << "You lost one token";
            player->tokens -=1;
        }
    
    }
    
}