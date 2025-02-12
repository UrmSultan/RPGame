#pragma once
#include <vector>
#include <memory>
#include "Enemy.h"
#include "Item.h"

class Location {
private:
    string name;
    string description;
    vector <shared_ptr<Location>> connections;
    vector <shared_ptr<Enemy>> enemies;
    vector <shared_ptr<Item>> items;
public:
    Location(string n, string desc);
    void addConnection(const shared_ptr<Location>& location);
    void addEnemy(const shared_ptr<Enemy>& enemy);
    void addItem(const shared_ptr<Item>& item);
    void searchForItem();
    void describe() const;

    [[nodiscard]] vector <shared_ptr<Location>> getConnections() const;
    [[nodiscard]] vector <shared_ptr<Enemy>> getEnemies() const;
    [[nodiscard]] vector <shared_ptr<Item>> getItems() const;
    [[nodiscard]] string getName() const;


    void removeItem(int index);

};

