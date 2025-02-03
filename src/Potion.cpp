#include <bits/stdc++.h>

#include <utility>
#include "../include/Potion.h"

using namespace std;

Potion::Potion(string n, ItemRarity r, int heal)
    : Item(std::move(n), r), healAmount(heal)   {}
void Potion::use() {
    Item::use();
}

int Potion::getHealAmount() const {
    return healAmount;
}


