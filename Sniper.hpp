#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class Sniper : public Soldier
{
public:
    static const uint max_health = 100;
    Sniper();
    Sniper(uint player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
