
#include <iostream>
#include "QuestStatus.h"

using namespace std;

class Quest {
private:
    string title;
    string description;
    string reward;
    QuestStatus status;
public:
    Quest(string title, string desc);

    void start ();
    void completed();
    void fail();

    [[nodiscard]] QuestStatus getStatus() const;

};

