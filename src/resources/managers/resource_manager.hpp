#ifndef TIC_TAC_TOE_RESOURCE_MANAGER_HPP
#define TIC_TAC_TOE_RESOURCE_MANAGER_HPP

#include <memory>
#include "./resource_read_getter.hpp"
#include "./resource_write_getter.hpp"
#include "../player.hpp"
#include "../enemy.hpp"
#include "../board.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Resource_manager: public Resource_write_getter, public Resource_read_getter
{
public:
    Resource_manager();

    Player & Get_player() noexcept override {return this->player;};
    Enemy & Get_enemy() noexcept override {return this->enemy;};
    Board & Get_board() noexcept override {return this->board;};

    const Player & Get_player() const noexcept override {return this->player;};
    const Enemy & Get_enemy() const noexcept override {return this->enemy;};
    const Board & Get_board() const noexcept override {return this->board;};

private:
    Player player{};
    Enemy enemy{};
    Board board{};
};

}

#endif // TIC_TAC_TOE_RESOURCE_MANAGER_HPP
