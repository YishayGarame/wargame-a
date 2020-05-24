#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "SniperCommander.hpp"

SniperCommander::SniperCommander(int i)
{
    health = 120;
    damage = 100;
    player_number = i;
    type = "SniperCommander";
}
void SniperCommander::action(std::vector<std::vector<Soldier *>> &board)
{
    return;
}
