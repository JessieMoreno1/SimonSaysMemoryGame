//
// Created by Jessie Mejia on 12/9/22.
//

#ifndef SIMONSAYS_SQUARES_H
#define SIMONSAYS_SQUARES_H

#include <SFML/Graphics.hpp>
#include "States.h"
class Squares : public States , public sf::RectangleShape{
public:
    Squares();
    void setFillColor(const sf::Color color);
    void setPosition(sf::Vector2f position);

private:
    sf::RectangleShape s;

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //SIMONSAYS_SQUARES_H
