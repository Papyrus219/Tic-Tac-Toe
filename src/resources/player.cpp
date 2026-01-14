#include "player.hpp"
#include <stdexcept>

using namespace tic_tac_toe;

bool tic_tac_toe::Player::Make_move(unsigned int column, unsigned int row)
{
    if(assigned_symbol == Field::NONE) throw std::runtime_error{"Player do move without set symbol."};
    if(!assigned_board) throw std::runtime_error{"Player do move without set board."};

    return assigned_board->Change_field(assigned_symbol, column, row);
}
