#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class ParamedicCommander : public Soldier
{
public:
    static const int max_health = 200;
    ParamedicCommander();
    ParamedicCommander(int player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
