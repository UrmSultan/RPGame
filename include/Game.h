#pragma once

#include "Player.h"
#include "Location.h"
#include "CombatSystem.h"
#include <vector>
#include <memory>

class Game {
private:
    shared_ptr<Player> player;
    vector<shared_ptr<Location>> locations;
    CombatSystem combatSystem;

public:
    Game();

    void startGame();
    void gameLoop();
    void exploreLocation();
    void fightEnemy();
};
