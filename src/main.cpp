#include <bits/stdc++.h>
#include "../include/Player.h"
using namespace std;

int main() {
    Player hero("Воин",100,1);

    hero.printStatus();
    hero.takeDamage(20);
    hero.heal(10);

    return 0;
}
