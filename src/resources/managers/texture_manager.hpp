#ifndef TIC_TAC_TOE_TEXTURE_MANAGER_HPP
#define TIC_TAC_TOE_TEXTURE_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include <filesystem>
#include <array>
#include "../field.hpp"

namespace tic_tac_toe {

/**
 * @todo write docs
 */
class Texture_manager
{
public:
    Texture_manager();

    void Set_background_texture_to_sprite(sf::Sprite& sprite) const noexcept;
    void Set_field_texture_to_sprite(sf::Sprite& sprite, Field field_type) const noexcept;

    void Load_background_texture(std::filesystem::path path);
    void Load_fields_texture(std::filesystem::path path);
private:
    sf::Texture fields_texture{};
    sf::Texture background_texture{};

    sf::Vector2i field_size{};
    std::array<sf::IntRect,3> fields_rectangles{};
};

}

#endif // TIC_TAC_TOE_TEXTURE_MANAGER_HPP
