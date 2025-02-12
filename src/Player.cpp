#include "../include/Player.h"
#include "../include/Potion.h"
#include <iostream>
#include <utility>

using namespace std;


Player::Player(string name)
    :Character(std::move(name), 100, 1, 10, 5),
    experience(0), gold(100),equippedWeapon(nullptr)  {}

void Player::addItem(shared_ptr<Item> &item, ItemRarity rarity) {
    inventory.addItem(item);
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

void Player::addGold(int amount) {
    gold+=amount;
    cout<<"Вы получили "<<amount<<" золота! Текущий баланс: "<<gold<<" монет.\n";
}

bool Player::spendGold(int amount) {
    if (gold >=amount) {
        gold-=amount;
        cout<<"Вы потратили "<<amount<<" золота! Осталось: "<<gold<<" монет.\n";
        return true;
    }
    cout<<"У вас недостаточно золота!\n";
    return false;
}

int Player::getGold() const {
    return gold;
}