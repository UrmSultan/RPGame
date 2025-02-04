#include <bits/stdc++.h>
#include "../include/Location.h"

Location::Location(string n, string desc)
    :name(std::move(n)), description(std::move(desc))   {}

void Location::addConnection(const shared_ptr<Location>& location) {
    connectedLocations.push_back(location);
}

void Location::addEnemy(const shared_ptr<Enemy> &enemy) {
    enemies.push_back(enemy);
}

void Location::addItem(const shared_ptr<Item> &item) {
    items.push_back(item);
}

void Location::describe() const {
    cout<<"Вы находитесь в "<<name<<". "<<endl;
    if (!connectedLocations.empty()) {
        cout<<"Вы можете пройти в:"<<endl;
        for (const auto& loc: connectedLocations) {
            cout<<"- "<<loc->name<<endl;
        }
    }
}

vector<shared_ptr<Location>> Location::getConnections() const {
    return connectedLocations;
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
