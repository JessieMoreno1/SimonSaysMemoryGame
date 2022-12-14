//
// Created by Jessie Mejia on 12/11/22.
//

#include "Game.h"
#include "random"

Game::Game() {
    init();
    loopGame();
}

void Game::init() {

    // ---------  create the score text and assign it to zero ---------- //

    Score.setFont(Fonts::getFont(EightBITIN));
    Score.setCharacterSize(100);
    Score.setFillColor(sf::Color::White);
    Score.setPosition({450,200});
    Score.setString("Score");

    scoreNum.setFont(Fonts::getFont(EightBITIN));
    scoreNum.setCharacterSize(100);
    scoreNum.setFillColor(sf::Color::White);
    scoreNum.setPosition({750,200});
    scoreNum.setString(std::to_string(0));

    level.setFont(Fonts::getFont(EightBITIN));
    level.setCharacterSize(100);
    level.setFillColor(sf::Color::White);
    level.setPosition({460,120});
    level.setString("Level");

    levelNum.setFont(Fonts::getFont(EightBITIN));
    levelNum.setCharacterSize(100);
    levelNum.setFillColor(sf::Color::White);
    levelNum.setPosition({760,120});
    levelNum.setString(std::to_string(1));

    // ------------- Creates the squares used for the game ---------------- //

    s1.setFillColor(sf::Color::Blue);
    s2.setFillColor(sf::Color::Red);
    s3.setFillColor(sf::Color::Yellow);
    s4.setFillColor(sf::Color::Green);

    s1.setPosition({350,360});
    s2.setPosition({500, 360});
    s3.setPosition({650,360});
    s4.setPosition({800,360});

    sf::FloatRect floatRect1 = s1.getGlobalBounds();
    float s1area = floatRect1.height * floatRect1.width;

    sf::FloatRect floatRect2 = s2.getGlobalBounds();
    s3.getGlobalBounds();
    s4.getGlobalBounds();
// --------------------------------------------------------------------- //


}


void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if (!checkState(HIDDEN)) {
        target.draw(s1);
        target.draw(s2);
        target.draw(s3);
        target.draw(s4);
        target.draw(Score);
        target.draw(scoreNum);
        target.draw(level);
        target.draw(levelNum);
    }
}


void Game::loopGame() {
    SquareHolder.push_back(s1);
    SquareHolder.push_back(s2);
    SquareHolder.push_back(s3);
    SquareHolder.push_back(s4);


    if (levelNum.getString() == std::to_string(1))
    {
        std:: cout << "Level 1";
        // add two random squares to the sequence
        // and then wait for user input

        auto r = rand() % SquareHolder.size();
        auto r2 = rand() % SquareHolder.size();

        Pattern.push_back(SquareHolder[r]);
        Pattern.push_back(SquareHolder[r2]);


        bool levelOne_squareOne = false;
        bool levelOne_squareTwo = false;

        // if all the squares are clicked in the same sequence
        // move to level 2




        // clear the pattern sequence vector and move to level 2
        if (levelOne_squareOne && levelOne_squareTwo)
        {
            Pattern.clear();
            levelNum.setString(std::to_string(2));
        }
    }

    if (levelNum.getString() == std::to_string(2))
    {
        std:: cout << "Level 2";

        // add three random squares to the sequence
        // and then wait for the input

        // three random numbers generated
        auto r = rand() % SquareHolder.size();
        auto r2 = rand() % SquareHolder.size();
        auto r3 = rand() % SquareHolder.size();

        // three squares added to sequence using the random numbers
        Pattern.push_back(SquareHolder[r]);
        Pattern.push_back(SquareHolder[r2]);
        Pattern.push_back(SquareHolder[r3]);

        // set bool conditions must all equal to true
        bool levelTwo_squareOne = false;
        bool levelTwo_squareTwo = false;
        bool levelTwo_squareThree = false;

        // check that the sequence is clicked in order


        // clear the pattern sequence vector and move to level 3
        // level
        if (levelTwo_squareOne && levelTwo_squareTwo && levelTwo_squareThree)
        {
            Pattern.clear();
            levelNum.setString(std::to_string(3));
        }
        else
        {
            std::cout << "Pattern match incorrect. Game is over";
        }
    }


}



