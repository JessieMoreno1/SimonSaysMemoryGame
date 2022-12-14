//
// Created by Jessie Mejia on 12/10/22.
//

#include "MainMenu.h"
#include "SFML/Graphics.hpp"
#include "Squares.h"
#include "Fonts.h"

MainMenu::MainMenu(sf::RenderWindow& window){


    title.setFont(Fonts::getFont(EightBITIN));
    title.setCharacterSize(100);
    title.setFillColor(sf::Color::White);
    title.setPosition({400,200});
    title.setString("Simon Says");

    startText.setFont(Fonts::getFont(EightBITIN));
    startText.setCharacterSize(100);
    startText.setLetterSpacing(2);
    startText.setFillColor(sf::Color::Yellow);
    startText.setPosition({static_cast<float>(window.getSize().x) / 2 - 160,500});
    startText.setString("Start");

// ------------- Creates the squares used for the game ---------------- //

    s1.setFillColor(sf::Color::Blue);
    s2.setFillColor(sf::Color::Red);
    s3.setFillColor(sf::Color::Yellow);
    s4.setFillColor(sf::Color::Green);

    s1.setPosition({350,static_cast<float>(window.getSize().y/2)});
    s2.setPosition({500, static_cast<float>(window.getSize().y/2)});
    s3.setPosition({650, static_cast<float>(window.getSize().y/2)});
    s4.setPosition({800,static_cast<float>(window.getSize().y/2)});
// --------------------------------------------------------------------- //

}

void MainMenu::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN)) {
        target.draw(title);
        target.draw(startText);
        target.draw(s1);
        target.draw(s2);
        target.draw(s3);
        target.draw(s4);
    }
}

MainMenu::MainMenu(){}

sf::Text MainMenu::getStartText() {
    return startText;
}



