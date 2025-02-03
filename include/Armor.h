#pragma once

#include "Item.h"
class Armor : public Item {
private:
    int defense;
public:
    Armor(string name, ItemRarity rarity, int defense);
    void use() override;
    [[nodiscard]] int getDefense() const;
};
