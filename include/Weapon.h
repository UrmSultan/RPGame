#pragma once
#include "Item.h"

class Weapon : public Item{
private:
    int damage;
public:
    Weapon(string name, ItemRarity rarity, int damage);

    void use() override;
    [[nodiscard]] int getDamage() const;
};

