
#ifndef RPGAME_PLAYER_H
#define RPGAME_PLAYER_H

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


#endif //RPGAME_PLAYER_H
