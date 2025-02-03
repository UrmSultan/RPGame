#pragma once
#include "Item.h"

class Potion : public Item{
private:
    int healAmount;
public:
    Potion(string name, ItemRarity rarity, int healAmount);

    void use() override;
    [[nodiscard]] int getHealAmount() const;
};
