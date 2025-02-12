#include <iostream>
#include "../include/Location.h"
using namespace std;

Location::Location(string n, string desc)
    :name(std::move(n)), description(std::move(desc))   {}

void Location::addConnection(const shared_ptr<Location>& location) {
    connections.push_back(location);
}

void Location::addEnemy(const shared_ptr<Enemy> &enemy) {
    enemies.push_back(enemy);
}

void Location::addItem(const shared_ptr<Item> &item) {
    items.push_back(item);
}
void Location::searchForItem() {
    if (items.empty()) {
        cout<<"Вы ничего не нашли в "<<name<<".\n";
        return;
    }
    cout<<"Вы нашли:\n";
    for (int i = 0; i < items.size(); ++i) {
        cout<<i+1<<". "<<items[i]->getName()<<endl;
    }
}

void Location::describe() const {
    cout<<"Вы находитесь в "<<name<<". "<<endl;
    if (!connections.empty()) {
        cout<<"Вы можете пройти в:"<<endl;
        for (const auto& loc: connections) {
            cout<<"- "<<loc->name<<endl;
        }
    }
}

vector<shared_ptr<Location>> Location::getConnections() const {
    return connections;
}

string Location::getName() const {
    return name;
}

vector<shared_ptr<Enemy>> Location::getEnemies() const {
    return enemies;
}

vector<shared_ptr<Item>> Location::getItems() const {
    return items;
}

void Location::removeItem(int index) {
    if (index >=0 && index <items.size()) {
        items.erase(items.begin()+index);
    }
}
