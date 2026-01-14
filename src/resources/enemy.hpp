#ifndef TIC_TAC_TOE_ENEMY_HPP
#define TIC_TAC_TOE_ENEMY_HPP

#include <random>
#include "./player.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Enemy: private Player
{
public:
    void Make_move();
private:
    std::mt19937 generator{};
};

}

#endif // TIC_TAC_TOE_ENEMY_HPP
