#include "graphic_manager.hpp"
#include "../resources/board.hpp"

using namespace tic_tac_toe;

tic_tac_toe::Graphic_manager::Graphic_manager(Resource_manager& resources_, Texture_manager& textures_): resource_manager{resources_}, texture_manager{textures_}
{
    window.create(sf::VideoMode{window_size}, "Tic Tac Toe");
}

void tic_tac_toe::Graphic_manager::Render()
{
    window.clear();

    Render_board();
    Render_ui();

    window.display();
}

void tic_tac_toe::Graphic_manager::Render_board()
{
    texture_manager.Set_background_texture_to_sprite(drawer);
    window.draw(drawer);

    auto board = resource_manager.Get_board().Get_all_fields();
    for(auto row : board)
    {
        for(auto field : row)
        {
            texture_manager.Set_field_texture_to_sprite(drawer,field);
            window.draw(drawer);

            drawer.move( {field_size.x + 10, 0} );
        }

        drawer.move( {0, field_size.y + 10} );
    }
}

void tic_tac_toe::Graphic_manager::Render_ui()
{

}
