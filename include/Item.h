#pragma once

#include <string>

using namespace std;

class Item {
protected:
    string name;
    string type;
    string rarity;
public:
    Item(string itemName, string itemType, string itemRarity);

    virtual void use();

    string getName() const;
    string getType() const;
    string getRarity() const;

    virtual ~Item() {}
};

