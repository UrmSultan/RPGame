#include <utility>
#include <string>
#include <iostream>
using namespace std;

#include "../include/Item.h"


Item::Item(string n, ItemRarity r)
        : name(std::move(n)),rarity(r){}

string Item::getName() const {
    return name;
}

string Item::getRarity() const {
    cout << "[DEBUG] rarity = " << static_cast<int>(rarity) << ", string = " << toString(rarity) << endl;
    return string(toString(rarity));
}


void Item::use() {
    cout<<name<<" использован."<<endl;
}