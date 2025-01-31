#pragma once
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <ostream>

struct Player
{
    std::string name;
    int score;
    float life;
};

std::ostream& operator<< (std::ostream& out, const Player& player) {
    return out << "Player{'" 
        << player.name << "',"
        << player.score << ","
        << player.life << "f}";
}

#endif // PLAYER_HPP