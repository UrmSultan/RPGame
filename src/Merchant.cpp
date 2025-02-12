#include "../include/Merchant.h"
#include <iostream>

using namespace std;

Merchant::Merchant(string name) : name(std::move(name)) {}

void Merchant::addItem(const shared_ptr<Item> &item) {
    stock.push_back(item);
}

void Merchant::showStock() {
    if (stock.empty()) {
        cout<<name<<" ничего не продает.\n";
        return;
    }
    cout<<"Товары "<<name << ":\n";
    for (int i = 0; i < stock.size(); ++i) {
        cout<<i+1<<". "<< stock[i]->getName()<<" (Цена: "<<(i+1)*10<<" золота)\n";
    }
}

bool Merchant::sellItem(int index, Player &player) {
    if (index<0 || index>=stock.size()) {
        cout<<"Неверный выбор!\n";
        return false;
    }

    int price = (index+1)*10;
    if (player.spendGold(price)) {
        player.getInventory().addItem(stock[index]);
        stock.erase(stock.begin()+index);
        return true;
    }
    return false;
}

