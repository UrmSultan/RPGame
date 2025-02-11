#include "../include/Player.h"
#include "../include/Potion.h"
#include <iostream>
#include <utility>

using namespace std;


Player::Player(string name)
    :Character(std::move(name), 100, 1, 10, 5),
    experience(0), gold(0),equippedWeapon(nullptr)  {}

void Player::addItem(shared_ptr<Item> &item, ItemRarity rarity) {
    inventory.addItem(item);
}




void Player::earnGold(int amount) {
    gold+=amount;
}

int Player::getGold() const {
    return gold;
}

void Player::gainExperience(int exp) {
    experience+=exp;
    cout<<name<<" получил "<<exp<<" опыта! Общий опыт: "<<experience<<endl;

    if (experience >= level *10) {
        level++;
        experience =0;
        attackPower+=1;
        defense+=1;
        health+=10;
        cout<<name<<" повысил уровень! Теперь уровень: "<<level<<endl;
    }
}

void Player::attack(Character &target) {
    int damage = equippedWeapon? attackPower+equippedWeapon->getDamage():attackPower;
    cout<<name<<" атакует "<<target.getName()<<" с уроном "<<damage<<"!"<<endl;
    target.takeDamage(damage);
}

Inventory& Player::getInventory() {
    return inventory;
}
