//
// Created by sulta on 03.02.2025.
//

#include <utility>

#include "../include/Item.h"

void Item::use() {

}

Item::Item(string name, ItemRarity rarity)
        : name(std::move(name)),rarity(rarity){}

string Item::getName() const {
    return name;
}

ItemRarity Item::getRarity() const {
    return rarity;
}
