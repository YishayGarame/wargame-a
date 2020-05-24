#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class FootSoldier : public Soldier
{
public:
    static const int max_health = 100;
    FootSoldier();
    FootSoldier(int player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
