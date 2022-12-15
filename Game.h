//
// Created by Jessie Mejia on 12/14/22.
//

#ifndef SIMONSAYSFINAL_GAME_H
#define SIMONSAYSFINAL_GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "States.h"

class Game : public sf::Drawable, public States{
public:
    Game(sf::RenderWindow& window);
    void init();

    sf::RectangleShape getFlashingSquare();
    sf::RectangleShape getSquareOne();
    sf::RectangleShape getSquareTwo();
    sf::RectangleShape getSquareThree();
    sf::RectangleShape getSquareFour();


private:
   sf::RectangleShape flashingSquare, squareOne, squareTwo, squareThree, squareFour;



protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const ;
};


#endif //SIMONSAYSFINAL_GAME_H
