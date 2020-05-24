#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "ParamedicCommander.hpp"

ParamedicCommander::ParamedicCommander(int i)
{
    health = 200;
    damage = 0;
    player_number = i;
    type = "ParamedicCommander";
}
void ParamedicCommander::action(std::vector<std::vector<Soldier *>> &board)
{
    return;
}
