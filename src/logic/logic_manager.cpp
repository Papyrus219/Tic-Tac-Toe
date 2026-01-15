#include "logic_manager.hpp"
#include "../graphics/graphic_manager.hpp"
#include "../resources/managers/resource_manager.hpp"
#include <SFML/Graphics.hpp>

using namespace tic_tac_toe;

void tic_tac_toe::Logic_manager::Loop()
{
    sf::RenderWindow& window = graphics_manager.Get_window();

    while(window.isOpen())
    {
        graphics_manager.Render();
        Handle_events();
    }
}

void tic_tac_toe::Logic_manager::Handle_events()
{
    sf::RenderWindow& window = graphics_manager.Get_window();

    while(std::optional<sf::Event> event = window.pollEvent())
    {
        if(event->is<sf::Event::Closed>())
        {
            window.close();
        }
    }
}
