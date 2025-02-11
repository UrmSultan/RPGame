#include <iostream>
#include "../include/Weapon.h"
using namespace std;

Weapon::Weapon(string n, ItemRarity r, int dmg)
:Item(std::move(n),r), damage(dmg)   {}


void Weapon::use() {
    cout<<"Вы экипировали "<<name
        <<" редкость: "<<toString(rarity)
        << " с уроном "<<damage<<"!"<<endl;
}

int Weapon::getDamage() const {
    return damage;
}
