#include <string>
#include <vector>
#include <stdexcept>
#pragma once

using namespace std;

class Soldier
{

public:
    int health;
    int damage;
    int player_number;
    string type;
    Soldier(){};
    void action(std::vector<std::vector<Soldier *>> &board);
};
