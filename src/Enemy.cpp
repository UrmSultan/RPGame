//
// Created by sulta on 03.02.2025.
//

#include "../include/Enemy.h"

Enemy::Enemy(string name, int health, int attack, int defense, int expReward)
    :Character(name, health, 1, attack, defense), expReward(expReward) {}
