#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Soldier.hpp"

class FootCommander : public Soldier
{
public:
    static const int max_health = 150;
    FootCommander();
    FootCommander(int player_number);
    void action(std::vector<std::vector<Soldier *>> &board);
};
