//
// Created by Jessie Mejia on 12/10/22.
//

#ifndef SIMONSAYS_MAINMENU_H
#define SIMONSAYS_MAINMENU_H


#include <SFML/Graphics.hpp>
#include "States.h"
#include "Squares.h"
class MainMenu : public sf::Drawable, public States {
public:
    MainMenu();
    MainMenu(sf::RenderWindow &window);
    sf::Text getStartText();
private:
    sf::Text title, startText;
    Squares s1, s2, s3, s4;


protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const ;
};


#endif //SIMONSAYS_MAINMENU_H
