#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "FootCommander.hpp"

FootCommander::FootCommander(uint i)
{
    health = 150;
    damage = 20;
    player_number = i;
    type = "FootCommander";
}
void FootCommander::action(std::vector<std::vector<Soldier *>> &board)
{
    return;
}
