#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include <cassert>
using namespace WarGame;

int main()
{
    WarGame::Board board = WarGame::Board(4, 4);
    board[{0, 1}] = new FootSoldier(1);
    board[{0, 3}] = new FootCommander(1);
    board[{0, 5}] = new FootSoldier(1);
    return 0;
}