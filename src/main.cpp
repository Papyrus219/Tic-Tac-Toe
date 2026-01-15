#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    const sf::RenderWindow window{sf::VideoMode{ {200,400} }, "Hello" };

    std::cout << "Hello, world!" << std::endl;
    return 0;
}
