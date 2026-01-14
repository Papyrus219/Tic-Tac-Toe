#ifndef TIC_TAC_TOE_GRAPHIC_MANAGER_HPP
#define TIC_TAC_TOE_GRAPHIC_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include "../resources/managers/resource_manager.hpp"
#include "../resources/managers/texture_manager.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Graphic_manager
{
public:
    Graphic_manager(Resource_manager& resources_, Texture_manager& textures_);

    void Render();
private:
    void Render_board();
    void Render_ui();

    sf::RenderWindow window{};
    sf::Texture tmp_texture{};
    sf::Sprite drawer{tmp_texture};

    static constexpr sf::Vector2u window_size{700, 500};
    static constexpr sf::Vector2i field_size{50,50};

    const Resource_manager& resource_manager;
    const Texture_manager& texture_manager;
};

}

#endif // TIC_TAC_TOE_GRAPHIC_MANAGER_HPP
