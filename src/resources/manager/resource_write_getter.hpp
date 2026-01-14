#ifndef TIC_TAC_TOE_RESOURCE_WRITE_GETTER_HPP
#define TIC_TAC_TOE_RESOURCE_WRITE_GETTER_HPP

namespace tic_tac_toe
{

class Player;
class Enemy;
class Board;

class Resource_write_getter
{
public:
    virtual Player& Get_player() = 0;
    virtual Enemy& Get_enemy() = 0;
    virtual Board& Get_board() = 0;

    virtual ~Resource_write_getter() = default;
};

}

#endif
