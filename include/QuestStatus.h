#ifndef RPGAME_QUESTSTATUS_H
#define RPGAME_QUESTSTATUS_H

#include <iostream>

using namespace std;

enum class QuestStatus {
    NotStarted,
    InProgress,
    Completed,
    failed
};
#endif //RPGAME_QUESTSTATUS_H
