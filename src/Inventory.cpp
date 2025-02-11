#include <iostream>
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

void Inventory::showInventory() {
    if (items.empty()) {
        cout<<"Ваш инвентарь пуст.\n";
        return;
    }

    cout<<"Ваш инвентарь:\n";
    for (int i = 0; i < items.size(); ++i) {
        cout<<i+1<<". "<<items[i]->getName()<<endl;
    }
    cout<<endl;
}

void Inventory::useItem(int index) {
    if (index >= 0 && index < items.size()){
        items[index]->use();
    }
    else {
        cout<<"неверный индекс!\n";
    }
}

