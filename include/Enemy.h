#pragma once

#include "Character.h"
#include <string>

class Enemy : public Character{
private:
    int expReward;
public:
    Enemy(string name, int health, int attack, int defense, int expReward);

};
