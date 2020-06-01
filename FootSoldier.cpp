#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "FootSoldier.hpp"

FootSoldier::FootSoldier(uint i)
{
    health = 100;
    damage = 10;
    player_number = i;
    type = "FootSoldier";
    id = sid++;
}
void FootSoldier::action(std::vector<std::vector<Soldier *>> &board)
{
    int mindis = 999999999;
    int tempdis;
    int xLoc;
    int yLoc;
    int tarX;
    int tarY;

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            //board[i][j] != NULL &&
            if (board[i][j] != nullptr && board[i][j]->id = this->id)
            {
                xLoc = i;
                yLoc = j;
            }
        }
    }

    //check the distance
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] != nullptr && board[i][j]->player_number != board[xLoc][yLoc]->player_number)
            {
                tempdis = checkDistance(xLoc, yLoc, i, j);
                if (tempdis < mindis)
                {
                    tarX = i;
                    tarY = j;
                    mindis = tempdis;
                }
            }
        }
    }

    //we have the mindis and the target location
    board[tarX][tarY]->health = -this->damage;
    if (board[tarX][tarY]->health <= 0)
    {
        //i want to check if board.hassoldiers but do know how
        board[tarX][tarY] = nullptr;
    }
}

int checkDistance(int xLoc, int yLoc, int i, int j)
{
    int ans = abs(xLoc - i) + abs(yLoc - j);
    return ans;
}
