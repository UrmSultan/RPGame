#pragma once
#include <vector>
#include <memory>
#include "Item.h"
class Inventory {
private:
    vector<shared_ptr<Item>> items;
public:
    void addItem(const shared_ptr<Item>& item);
    void removeItem(int index);
    void showInventory();
    void useItem(int index);
};