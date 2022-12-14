//
// Created by Jessie Mejia on 12/9/22.
//

#ifndef SIMONSAYS_STATES_H
#define SIMONSAYS_STATES_H

#include <SFML/Graphics.hpp>
#include <map>
#include "StatesEnum.h"

class States {

private:

    std::map<StatesEnum, bool> map;
    void load();
public:
    States();
    bool checkState(StatesEnum state) const;
    void enableState(StatesEnum state);
    void disableState(StatesEnum state);
    void setState(StatesEnum state, bool value);
    void toggleState(StatesEnum state);
};


#endif //SIMONSAYS_STATES_H
