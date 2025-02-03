//
// Created by sulta on 03.02.2025.
//

#include "../include/Item.h"

void Item::use() {

}

Item::Item(string itemName, string itemType, string itemRarity)
        : name(itemName), type(itemType), rarity(itemRarity){}

string Item::getName() const {
    return std::string();
}

string Item::getType() const {
    return std::string();
}

string Item::getRarity() const {
    return std::string();
}
