#include <SFML/Graphics.hpp>
int main()
{   
    sf::RenderWindow window(sf::VideoMode(800, 600), L"Hello, �A�n");
    sf::Font font;
    if (!font.loadFromFile("msjh.ttc"))
        return EXIT_FAILURE;
    sf::Text text(L"Hello�A�A�n", font, 50);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(text);
        window.display();
    }
    return EXIT_SUCCESS;
}