#include "../include/Player.h"
#include <iostream>
#include <utility>

using namespace std;


Player::Player(string name) : Character(std::move(name), 100, 1, 10, 5), experience(0){

}

void Player::gainExperience(int exp) {
    experience+=exp;
    cout<<name<<" получил "<<exp<<" опыта! Общий опыт: "<<experience<<endl;

    if (experience >= level *10) {
        level++;
        experience =0;
        attackPower+=5;
        defense+=2;
        health+=10;
        cout<<name<<" повысил уровень! Теперь уровень: "<<level<<endl;
    }
}

void Player::attack(Character &target) {
    cout<<"[Игрок] "<<name<<" атакует!"<<endl;
    Character::attack(target);
}
