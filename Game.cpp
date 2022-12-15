//
// Created by Jessie Mejia on 12/14/22.
//

#include "Game.h"

void Game::init() {
    flashingSquare.setSize({100,100});
    flashingSquare.setPosition({570,200});

    squareOne.setSize({100,100});
    squareOne.setFillColor(sf::Color::Blue);
    squareOne.setPosition({350,360});

    squareTwo.setSize({100,100});
    squareTwo.setFillColor(sf::Color::Red);
    squareTwo.setPosition({500, 360});

    squareThree.setSize({100,100});
    squareThree.setFillColor(sf::Color::Yellow);
    squareThree.setPosition({650,360});

    squareFour.setSize({100,100});
    squareFour.setFillColor(sf::Color::Green);
    squareFour.setPosition({800,360});
}

Game::Game(sf::RenderWindow& window) {
    init();
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN)) {
        target.draw(flashingSquare);
        target.draw(squareOne);
        target.draw(squareTwo);
        target.draw(squareThree);
        target.draw(squareFour);
    }
}
