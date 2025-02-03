cmake_minimum_required(VERSION 3.24)
project(RPGame)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -finput-charset=UTF-8 -fexec-charset=UTF-8")

add_executable(RPGame src/main.cpp
        include/Player.h src/Player.cpp
        include/Game.h src/Game.cpp
        include/Character.h src/Character.cpp
        include/Enemy.h src/Enemy.cpp
        include/Item.h src/Item.cpp
        include/Weapon.h src/Weapon.cpp
        include/Armor.h src/Armor.cpp
        include/Potion.h src/Potion.cpp
        include/Location.h src/Location.cpp
        include/Quest.h src/Quest.cpp
        include/MagicSystem.h src/MagicSystem.cpp
        include/CraftingSystem.h src/CraftingSystem.cpp
        include/Merchant.h src/Merchant.cpp include/QuestStatus.h src/QuestStatus.cpp)
