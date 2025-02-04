#pragma once
#include <bits/stdc++.h>
#include "Enemy.h"
#include "Item.h"

using namespace std;

class Location {
private:
    string name;
    string description;
    vector <shared_ptr<Location>> connectedLocations;
    vector <shared_ptr<Enemy>> enemies;
    vector <shared_ptr<Item>> items;
public:
    Location(string n, string desc);
    void addConnection(const shared_ptr<Location>& location);
    void addEnemy(const shared_ptr<Enemy>& enemy);
    void addItem(const shared_ptr<Item>& item);
    void describe() const;
    [[nodiscard]] vector <shared_ptr<Location>> getConnections() const;
    [[nodiscard]] vector <shared_ptr<Enemy>> getEnemies() const;
    [[nodiscard]] vector <shared_ptr<Item>> getItems() const;
    [[nodiscard]] string getName() const;

};

