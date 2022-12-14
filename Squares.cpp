//
// Created by Jessie Mejia on 12/9/22.
//

#include "Squares.h"

Squares::Squares() : s({100,100}) {}

void Squares::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(s);
    }
}

void Squares::setFillColor(const sf::Color color) {
    s.setFillColor(color);
}

void Squares::setPosition(sf::Vector2f position) {
    s.setPosition(position);
}
