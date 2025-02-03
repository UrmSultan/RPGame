#include <bits/stdc++.h>

#include <utility>
#include "../include/Armor.h"

using namespace std;

Armor::Armor(string n, ItemRarity r, int def)
    : Item(std::move(n),r), defense(def)   {}

void Armor::use() {
    cout<<"Вы экипировали "<<name<<" редкость: "<<static_cast<int>(rarity)
        << ") с защитой "<<defense<<"!"<<endl;
}

int Armor::getDefense() const {
    return defense;
}
