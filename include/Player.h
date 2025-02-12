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

    [[nodiscard]] int getGold() const;
    void addGold(int amount);
    bool spendGold(int amount);

    void gainExperience(int exp);

    void attack(Character& target) override;
};

