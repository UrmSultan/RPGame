#include "../include/Game.h"
#include <iostream>

using namespace std;
bool const rakNaGoreSvistnet=true;
Game::Game() {
    player = make_shared<Player>("ГГ");

    auto sword = make_shared<Weapon>("Меч новичка", ItemRarity::Common, 5);
    player->getInventory().addItem(sword);
    player->getInventory().addItem(make_shared<Potion>("Малое Зелье Лечения", ItemRarity::Uncommon, 20));

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
    while (rakNaGoreSvistnet) {
        cout<<"\nВыберите действие:\n";
        cout<<"1. Исследовать локацию\n";
        cout<<"2. Вступить в бой\n";
        cout<<"3. Открыть инвентарь\n";
        cout<<"4. Выйти из игры\n";
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
                manageInventory();
                break;
            case 4:
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

void Game::manageInventory() {

    while (rakNaGoreSvistnet) {
        cout<<"\n--- Инвентарь ---\n";
        player->getInventory().showInventory();
        cout<<"1. Использовать предмет\n";
        cout<<"2. Выбросить предмет\n";
        cout<<"3. Вернуться\n";
        cout<<"Ваш выбор: ";

        int choice;
        cin>>choice;

        if (choice==3) break;

        cout << "Введите номер предмета: ";
        int index;
        cin>>index;
        index--;

        switch (choice) {
            case 1:
                player->getInventory().useItem(index);
                break;
            case 2:
                player->getInventory().removeItem(index);
                break;
            default:
                cout<<"Неверный выбор \n";
        }

    }
}
