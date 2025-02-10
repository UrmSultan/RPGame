#include "../include/CombatSystem.h"
#include <iostream>

using namespace std;

void CombatSystem::startFight(Player &player, shared_ptr<Enemy>& enemy) {
    cout<<"Вы вступили в бой с "<<enemy->getName();

    while (player.getHealth() > 0 && enemy->getHealth() > 0) {
        // player turn
        enemy->takeDamage(player.getAttackPower());
        if (enemy->getHealth() <=0) {
            cout<<"Вы победили "<<enemy->getName()<<"!\n";
            return;
        }

        //enemy turn
        player.takeDamage(enemy->getAttackPower());

        if (player.getHealth() <= 0) {
            cout << "Вы проиграли бой...\n";
            return;
        }
    }
}
