#include "../include/Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    player = make_shared<Player>("ГГ");

    auto forest = make_shared<Location>("Темный Лес", "Мрачный лес, полный опасностей.");
    auto village = make_shared<Location>("Деревня", "Спокойное место с торговцами и NPC.");

    forest->addConnection(village);
    village->addConnection(forest);

    locations.push_back(forest);
    locations.push_back(village);

}

void Game::startGame() {
    cout<<"Добро пожаловать в игру, "<<player->getName()<<"!\n";
    gameLoop();
}

void Game::gameLoop() {
    while (true) {
        cout<<"\nВыберите действие:\n";
        cout<<"1. Исследовать локацию\n";
        cout<<"2. Вступить в бой\n";
        cout<<"3. Выйти из игры\n";
        cout<<"Ваш выбор: ";

        int choice;
        cin>>choice;


        switch (choice) {
            case 1:
                exploreLocation();
                break;
            case 2:
                fightEnemy();
                break;
            case 3:
                cout<<"Выход из игры...\n";
                return;
            default:
                cout<<"Неверный выбор. Попробуйте снова.\n";
        }
    }
}

void Game::exploreLocation() {
    cout<<"Вы исследуете локацию...\n";
    // ивенты, рандом
}

void Game::fightEnemy() {
    auto enemy = make_shared<Enemy>("Гоблин", 30,5,2,10);
    combatSystem.startFight(*player, enemy);
}