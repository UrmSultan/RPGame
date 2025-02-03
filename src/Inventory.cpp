#include <bits/stdc++.h>
#include "../include/Inventory.h"

void Inventory::addItem(const shared_ptr<Item>& item) {
    items.push_back(item);
}

void Inventory::removeItem(int index) {
    if (index>=0 && index< items.size()) {
        cout<<"Удален предмет:"<<items[index]->getName()<<endl;
        items.erase(items.begin()+index);
    }
    else {
        cout<<"Неверный индекс предмета!"<<endl;
    }
}

void Inventory::listItem() const {
    cout<<"Инвентарь: "<<endl;
    for (auto i=0; i < items.size(); i++) {
        cout<<i+1<<") "<<items[i]->getName()<<endl;
    }
}

size_t Inventory::size() const {
    return items.size();
}

shared_ptr<Item> Inventory::getItem(int index) const {
    if (index >= 0 && index < items.size())
        return items[index];
    return nullptr;
}
