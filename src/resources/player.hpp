#ifndef TIC_TAC_TOE_PLAYER_HPP
#define TIC_TAC_TOE_PLAYER_HPP

#include "./board.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Player
{
public:
    bool Make_move(unsigned int column, unsigned int row);

    void Set_symbol(Field symbol) noexcept {this->assigned_symbol = symbol;};
    void Set_Board(Board &board) noexcept {this->assigned_board = &board;};

    Field Get_symbol() const noexcept {return this->assigned_symbol;};

private:
    Board *assigned_board{};
    Field assigned_symbol{};
};

}

#endif // TIC_TAC_TOE_PLAYER_HPP
