#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "FootSoldier.hpp"

FootSoldier::FootSoldier(uint i)
{
    health = 100;
    damage = 10;
    player_number = i;
    type = "FootSoldier";
}
void FootSoldier::action(std::vector<std::vector<Soldier *>> &board)
{
}
