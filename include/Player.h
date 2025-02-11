#pragma once
#include <string>

#include "Character.h"
#include "Inventory.h"
#include "Weapon.h"
#include "Potion.h"
#include "Armor.h"

using namespace std;


class Player : public Character{
private:
    Inventory inventory;
    shared_ptr<Weapon> equippedWeapon;
    int experience;
    int gold;
public:
    explicit Player(string name);
    void addItem(shared_ptr<Item> &item, ItemRarity rarity);
    Inventory& getInventory();

    void earnGold(int amount);
    [[nodiscard]] int getGold() const;

    void gainExperience(int exp);

    void attack(Character& target) override;
};

