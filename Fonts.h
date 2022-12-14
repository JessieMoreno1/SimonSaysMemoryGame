//
// Created by Jessie Mejia on 12/9/22.
//

#ifndef SIMONSAYS_FONTS_H
#define SIMONSAYS_FONTS_H

#include "FontsEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class Fonts {
private:
    static std::map<FontsEnum, sf::Font> map;
    static void load(FontsEnum font);
    static std::string getPath(FontsEnum font);
public:
    static sf::Font& getFont(FontsEnum font);
};


#endif //SIMONSAYS_FONTS_H
