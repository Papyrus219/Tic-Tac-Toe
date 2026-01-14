#ifndef TIC_TAC_TOE_RESOURCE_READ_GETTER_HPP
#define TIC_TAC_TOE_RESOURCE_READ_GETTER_HPP

namespace tic_tac_toe
{

class Player;
class Enemy;
class Board;

class Resource_read_getter
{
public:
    virtual const Player& Get_player() const = 0;
    virtual const Enemy& Get_enemy() const = 0;
    virtual const Board& Get_board() const = 0;

    virtual ~Resource_read_getter() = default;
};

}

#endif
