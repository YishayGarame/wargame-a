#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Sniper.hpp"

Sniper::Sniper(int i)
{
    health = 100;
    damage = 50;
    player_number = i;
    type = "Sniper";
}
void Sniper::action(std::vector<std::vector<Soldier *>> &board)
{
    return;
}
