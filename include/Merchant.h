#pragma once
#include "Item.h"
#include "Player.h"
#include <vector>
#include <memory>

class Merchant {
private:
    string name;
    vector <shared_ptr<Item>> stock;

public:
    Merchant(string name);
    void addItem(const shared_ptr<Item>& item);
    void showStock();
    bool sellItem(int index, Player& player);
};
