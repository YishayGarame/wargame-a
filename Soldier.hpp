#include <string>
#include <vector>
#include <stdexcept>
#pragma once

using namespace std;

class Soldier
{

public:
    uint health;
    uint damage;
    uint player_number;
    string type;
    char *hartap;
    Soldier(){};
    virtual void action(std::vector<std::vector<Soldier *>> &board) = 0;
    virtual ~Soldier()
    {
        delete hartap;
    }
};
