#include "../include/Character.h"
#include <iostream>
#include <utility>

Character::Character(string name, int health, int level, int attack, int defense)
:name(std::move(name)), health(health), level(level), attackPower(attack), defense(defense) {}

void Character::takeDamage(int damage) {
    int actualDamage = damage - defense;
    if (actualDamage < 0) actualDamage = 0;
    health-=actualDamage;

    cout<<name<<" получил "<<actualDamage<<" урона! Осталось HP: "<<health<<endl;

    if (health <= 0) {
        cout<<name<<" погиб!"<<endl;
    }
}

void Character::attack(Character& target) {
    cout<<name<<" атакует"<<target.getName()<<" с силой "<<attackPower<<"!"<<endl;
    target.takeDamage(attackPower);
}

string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getLevel() const{
    return level;
}


