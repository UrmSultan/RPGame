#pragma once

#include <string>
#include "Character.h"

using namespace std;


class Player : public Character{
private:
    int experience;
    int gold; //TODO реализовать
    //TODO инвентарь

public:
    explicit Player(string name);

    void gainExperience(int exp);
    void attack(Character& target) override;
};

