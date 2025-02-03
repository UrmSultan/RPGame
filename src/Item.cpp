#include <utility>

#include "../include/Item.h"

void Item::use() {

}

Item::Item(string n, ItemRarity r)
        : name(std::move(n)),rarity(r){}

string Item::getName() const {
    return name;
}

ItemRarity Item::getRarity() const {
    return rarity;
}
