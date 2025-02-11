#pragma once

#include <string>
#include "ItemRarity.h"

using namespace std;

class Item {
protected:
    string name;
    ItemRarity rarity;
public:
    Item(string name, ItemRarity rarity);

    virtual void use();

    [[nodiscard]] string getName() const;
    [[nodiscard]] string getRarity() const;

    virtual ~Item() = default;
};

