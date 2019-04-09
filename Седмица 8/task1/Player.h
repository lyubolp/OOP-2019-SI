#pragma once

class Player
{
    private:
        char* name;
        int tokens;
    public:
        Player();
        Player(const Player&);
        Player& operator=(const Player&);
        ~Player();

        void set_name(const char*);
        int get_tokens() const;
        friend class Game;
};  