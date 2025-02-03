#pragma once
#include <string>
#include "Character.h"
#include "Inventory.h"
#include "Item.h"
#include "Weapon.h"

using namespace std;


class Player : public Character{
private:
    Inventory inventory;
    shared_ptr<Weapon> equippedWeapon;
    int experience;
    int gold;
public:
    explicit Player(string name);
    void addItem (const shared_ptr<Item>& item);
    void useItem (int index);
    void equipWeapon(const shared_ptr<Weapon>& weapon);
    void showInventory() const;

    void earnGold(int amount);
    int getGold() const;

    void gainExperience(int exp);

    void attack(Character& target) override;
};

