#ifndef TIC_TAC_TOE_RESOURCE_MANAGER_HPP
#define TIC_TAC_TOE_RESOURCE_MANAGER_HPP

#include <memory>
#include "../player.hpp"
#include "../enemy.hpp"
#include "../board.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Resource_manager
{
public:
    Resource_manager();

    Player& Get_player() noexcept {return this->player;};
    Enemy& Get_enemy() noexcept {return this->enemy;};
    Board& Get_board() noexcept {return this->board;};

    const Player& Get_player() const noexcept {return this->player;};
    const Enemy& Get_enemy() const noexcept {return this->enemy;};
    const Board& Get_board() const noexcept {return this->board;};

private:
    Player player{};
    Enemy enemy{};
    Board board{};
};

}

#endif // TIC_TAC_TOE_RESOURCE_MANAGER_HPP
