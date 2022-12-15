//
// Created by Jessie Mejia on 12/14/22.
//

#ifndef SIMONSAYSFINAL_GAME_H
#define SIMONSAYSFINAL_GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "States.h"

class Game : public sf::RectangleShape, public States{
public:
    Game(sf::RenderWindow& window);
    void init();

private:
    sf::RectangleShape flashingSquare, squareOne, squareTwo, squareThree, squareFour;



protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const ;
};


#endif //SIMONSAYSFINAL_GAME_H
