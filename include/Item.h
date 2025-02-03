#ifndef RPGAME_ITEM_H
#define RPGAME_ITEM_H

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


#endif //RPGAME_ITEM_H
