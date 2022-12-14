//
// Created by Jessie Mejia on 12/9/22.
//

#ifndef SIMONSAYS_MOUSEEVENTS_H
#define SIMONSAYS_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>
#include "Squares.h"


class MouseEvents {
public:
    template<class T>
    static bool isHover(const T& Obj , const sf::RenderWindow& window);

    template<class T>
    static bool isClick(const T& Obj , const sf::RenderWindow& window);


    template<class T>
    static bool isNotClick(const T& Obj , const sf::RenderWindow& window);

};

#include "MouseEvents.cpp"

#endif //SIMONSAYS_MOUSEEVENTS_H
