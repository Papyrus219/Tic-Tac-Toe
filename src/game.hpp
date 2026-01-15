#ifndef TIC_TAC_TOE_GAME_HPP
#define TIC_TAC_TOE_GAME_HPP

#include "./graphics/graphic_manager.hpp"
#include "./resources/managers/resource_manager.hpp"
#include "./logic/logic_manager.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Game
{
public:
    void Setup();
    void Start();

private:
    std::optional<Logic_manager> logic_manager{};
    std::optional<Resource_manager> resource_manager{};
    std::optional<Graphic_manager> graphic_manager{};
};

}

#endif // TIC_TAC_TOE_GAME_HPP
