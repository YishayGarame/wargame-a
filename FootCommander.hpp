#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier
{
public:
    static const uint max_health = 150;
    FootCommander();
    FootCommander(uint player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
