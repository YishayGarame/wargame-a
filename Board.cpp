#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
using namespace WarGame;

Soldier *&Board::operator[](std::pair<int, int> location)
{
    if (location.first >= board.size() || location.second >= board[0].size())
    {
        throw runtime_error("location is out of bounds");
    }
    if (board[location.first][location.second] != nullptr)
    {
        throw runtime_error("There is already a soldier in this location");
    }
    return board[location.first][location.second];
}

Soldier *Board::operator[](std::pair<int, int> location) const
{
    if (location.first >= board.size() || location.second >= board[0].size())
    {
        throw runtime_error("location is out of bounds");
    }
    if (board[location.first][location.second] == nullptr)
    {
        throw runtime_error("There is no soldier in this location");
    }
    //  board[location.first][location.second]->location
    return board[location.first][location.second];
}

void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction)
{
}

bool Board::has_soldiers(uint player_number) const
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] != nullptr)
            {
                if (board[i][j]->player_number == player_number)
                    return true;
            }
        }
    }
    return false;
}
