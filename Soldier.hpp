#include <string>
#include <vector>
#include <stdexcept>
#pragma once

using namespace std;
static int sid = 1;
class Soldier
{

public:
    uint health;
    uint damage;
    uint player_number;
    string type;
    int id;
    Soldier(){};
    virtual void action(std::vector<std::vector<Soldier *>> &board) = 0;
    virtual ~Soldier(){};
};