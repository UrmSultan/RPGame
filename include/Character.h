#ifndef RPGAME_CHARACTER_H
#define RPGAME_CHARACTER_H

#include <string>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int level;
    int attackPower;
    int defense;
public:
    Character(string name, int health, int level, int attack, int defense);

    virtual void takeDamage(int damage);
    virtual void attack(Character& target);

    [[nodiscard]] string getName() const;
    [[nodiscard]] int getHealth() const;
    [[nodiscard]] int getLevel() const;

    virtual ~Character() = default;
};

#endif //RPGAME_CHARACTER_H
