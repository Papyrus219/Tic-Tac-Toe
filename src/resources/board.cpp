#include "board.hpp"
#include <stdexcept>

using namespace tic_tac_toe;

bool tic_tac_toe::Board::Change_field(Field type, unsigned int row, unsigned int column)
{
    if(row > globals::ROWS_AMOUNT)
        throw std::runtime_error{"Request row to change is out of range: " + std::to_string(row) + ", max range: " + std::to_string(globals::ROWS_AMOUNT)};
    if(column > globals::COLUMNS_AMOUNT)
        throw std::runtime_error{"Request coulmn to change is out of range: " + std::to_string(column) + ", max range: " + std::to_string(globals::COLUMNS_AMOUNT)};

    if( fields[row][column] != Field::NONE ) return false;

    fields[row][column] = type;
    return true;
}

void tic_tac_toe::Board::Reset() noexcept
{
    for(unsigned int i=0; i<globals::ROWS_AMOUNT; i++)
    {
        for(unsigned int j=0; j<globals::COLUMNS_AMOUNT; j++)
        {
            fields[i][j] = Field::NONE;
        }
    }
}
