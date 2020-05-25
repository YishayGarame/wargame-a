#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Paramedic.hpp"

Paramedic::Paramedic(uint i)
{
    health = 100;
    damage = 0;
    player_number = i;
    type = "Paramedic";
}
void Paramedic::action(std::vector<std::vector<Soldier *>> &board)
{
}
