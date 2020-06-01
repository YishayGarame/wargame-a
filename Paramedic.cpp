#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
#include "Paramedic.hpp"

Paramedic::Paramedic(uint i)
{
    health = 100;
    damage = 0;
    player_number = i;
    type = "Paramedic";
}
void Paramedic::action(std::vector<std::vector<Soldier *>> &board)
{

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

    //check around paramedic location
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            //check if the same team
            if (board[i][j] != nullptr && board[i][j]->player_number == board[xLoc][yLoc]->player_number)
            {
                //check if its around the paramedic location
                if ((((i == xLoc + 1 || i == xLoc - 1) && i < board.size()) && ((j == yLoc + 1 || j == yLoc - 1) && j < board[0].size())))
                {
                    board[i][j]->health = this->max_health;
                }
                //if its diagnosed to its loctaion
                if (((i == xLoc - 1 && j == yLoc - 1) || (i == xLoc - 1 && j == yLoc + 1) || (i == xLoc + 1 && j == yLoc - 1) || (i == xLoc + 1 && j == yLoc + 1)) && (i < board.size() || j < board[0].size()))
                {
                    board[i][j]->health = this->max_health;
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
