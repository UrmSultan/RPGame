#pragma once
#include "Player.h"
#include "Enemy.h"

class CombatSystem {
public:
    void startFight (Player& player, shared_ptr<Enemy>& enemy);
};
