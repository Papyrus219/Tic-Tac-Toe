#include "texture_manager.hpp"
#include <stdexcept>
#include <utility>

using namespace tic_tac_toe;

tic_tac_toe::Texture_manager::Texture_manager()
{
    sf::Vector2i current_possition{};
    for(int i=0;i<3;i++)
    {
        fields_rectangles[i] = {current_possition, field_size};

        current_possition.x += field_size.x;
    }
}

void tic_tac_toe::Texture_manager::Load_background_texture(std::filesystem::path path)
{
    if(!background_texture.loadFromFile(path))
    {
        throw std::invalid_argument{"Invalid path for background texture."};
    }
}

void tic_tac_toe::Texture_manager::Load_fields_texture(std::filesystem::path path)
{
    if(!fields_texture.loadFromFile(path))
    {
        throw std::invalid_argument{"Invalid path for fields texture."};
    }
}

void tic_tac_toe::Texture_manager::Set_background_texture_to_sprite(sf::Sprite& sprite) const noexcept
{
    sprite.setTexture(background_texture, true);
}

void tic_tac_toe::Texture_manager::Set_field_texture_to_sprite(sf::Sprite& sprite, Field field_type) const noexcept
{
    sprite.setTexture(fields_texture, true);
    sprite.setTextureRect( fields_rectangles[ std::to_underlying(field_type) ] );
}

