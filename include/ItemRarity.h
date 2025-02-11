#pragma once
#include <string>

using namespace std;
enum class ItemRarity {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    Myth
};

constexpr const char* toString(ItemRarity rarity){
    switch (rarity) {
        case ItemRarity::Common: return "Common";
        case ItemRarity::Uncommon: return "Uncommon";
        case ItemRarity::Rare: return "Rare";
        case ItemRarity::Epic: return "Epic";
        case ItemRarity::Legendary: return "Legendary";
        case ItemRarity::Myth: return "Myth";
        default:
            return "???";
    }
}