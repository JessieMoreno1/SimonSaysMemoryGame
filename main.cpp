#include <iostream>
#include "SFML/Graphics.hpp"
#include "States.h"
#include "MouseEvents.h"
#include "MainMenu.h"
#include "Game.h"

int main() {
    sf::RenderWindow window ({1280,720, 32}, "test");
    window.setFramerateLimit(60);
    MainMenu m(window);
    Game g;
    g.enableState(HIDDEN);
    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            if (MouseEvents::isClick(m.getStartText(), window))
            {
                m.enableState(HIDDEN);
                g.setState(HIDDEN, false);
                std::cout << "Click";
            }
            if (MouseEvents::isClick(g.s1, window))
            {
                std::cout << "first square clicked";
            }


        }
        // 58,64,90 blue purple
        // 248,112,96 coral
        // 151, 216, 196 mint
        window.clear({58,64,90 });
        window.draw(m);
        window.draw(g);
        window.display();
    }
    return 0;
}
