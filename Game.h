//
// Created by Jessie Mejia on 12/11/22.
//

#ifndef SIMONSAYS_GAME_H
#define SIMONSAYS_GAME_H

#include "iostream"
#include <cstdlib>
#include "SFML/Graphics.hpp"
#include "Squares.h"
#include "vector"
#include "States.h"
#include "Fonts.h"
#include "MouseEvents.h"

class Game : public sf::Drawable, public States  {
public:

    Squares s1, s2, s3, s4;
    Game();
    void init();
    void loopGame();

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
    std::vector<Squares> Pattern;
    std::vector<Squares> SquareHolder;
    sf::Text level;
    sf::Text levelNum;
    sf::Text Score;
    sf::Text scoreNum;





};




#endif //SIMONSAYS_GAME_H
