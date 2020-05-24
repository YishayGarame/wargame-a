#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class Sniper : public Soldier
{
public:
    static const int max_health = 100;
    Sniper();
    Sniper(int player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
