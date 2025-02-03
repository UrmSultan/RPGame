#pragma once
#include <bits/stdc++.h>
#include "Item.h"
class Inventory {
private:
    vector<shared_ptr<Item>> items;
public:
    void addItem(const shared_ptr<Item>& item);
    void removeItem(int index);
    void listItem() const;
    [[nodiscard]] size_t size() const;
    shared_ptr<Item> getItem(int index) const;
};