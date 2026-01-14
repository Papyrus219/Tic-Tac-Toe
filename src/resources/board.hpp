#ifndef TIC_TAC_TOE_BOARD_HPP
#define TIC_TAC_TOE_BOARD_HPP

#include <array>
#include <span>
#include "./field.hpp"
#include "../globals.hpp"

namespace tic_tac_toe
{

/**
 * @todo write docs
 */
class Board
{
public:
    bool Change_field(Field type, unsigned int row, unsigned int column);
    void Reset() noexcept;

    std::span< const std::array<Field, globals::COLUMNS_AMOUNT> > Get_board() const {return fields;};
    Field Get_field(unsigned int row, unsigned int column) const {return fields[row][column];};

private:
    std::array< std::array<Field, globals::COLUMNS_AMOUNT>, globals::ROWS_AMOUNT > fields{};
};

}

#endif // TIC_TAC_TOE_BOARD_HPP
