//
// Created by Jessie Mejia on 12/14/22.
//

#include "MainMenu.h"
#include "Fonts.h"
#include "SFML/Graphics.hpp"

MainMenu::MainMenu(sf::RenderWindow& window)
{
    title.setFont(Fonts::getFont(EightBITIN));
    title.setCharacterSize(50);
    title.setFillColor(sf::Color::White);
    title.setPosition({360,200});
    title.setString("Simon Says Memory Game");

    name.setFont(Fonts::getFont(EightBITIN));
    name.setCharacterSize(25);
    name.setFillColor(sf::Color::White);
    name.setPosition({1100,25});
    name.setString("Jessie Mejia");

    crn.setFont(Fonts::getFont(EightBITIN));
    crn.setCharacterSize(30);
    crn.setFillColor(sf::Color::White);
    crn.setPosition({1100,50});
    crn.setString("CRN 72623");

    className.setFont(Fonts::getFont(EightBITIN));
    className.setCharacterSize(30);
    className.setFillColor(sf::Color::White);
    className.setPosition({1100,65});
    className.setString("CS003A");

    semester.setFont(Fonts::getFont(EightBITIN));
    semester.setCharacterSize(30);
    semester.setFillColor(sf::Color::White);
    semester.setPosition({1100,80});
    semester.setString("Fall 2022");

    startText.setFont(Fonts::getFont(EightBITIN));
    startText.setCharacterSize(100);
    startText.setLetterSpacing(2);
    startText.setFillColor(sf::Color::Yellow);
    startText.setPosition({static_cast<float>(window.getSize().x) / 2 - 160,500});
    startText.setString("Start");
}

void MainMenu::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN))
    {
        target.draw(title);
        target.draw(startText);
        target.draw(name);
        target.draw(crn);
        target.draw(className);
        target.draw(semester);
    }
}

sf::Text MainMenu::getStartText() {
    return startText;
}
