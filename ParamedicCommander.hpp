#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class ParamedicCommander : public Soldier
{
public:
    static const uint max_health = 200;
    ParamedicCommander();
    ParamedicCommander(uint player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
