#include <utility>

#include "../include/Quest.h"

Quest::Quest(string title, string desc)
    : title(std::move(title)),description(std::move(desc)), status(QuestStatus::NotStarted)   {}

void Quest::start() {
    status = QuestStatus::InProgress;
    cout<<"Квест начат: "<<title<<endl;
}

void Quest::completed() {
    status = QuestStatus::Completed;
    cout<<"Квест выполнен: "<<title<<endl;
}

void Quest::fail() {
    status = QuestStatus::Failed;
    cout<<"Квест провален: "<<title<<endl;
}

QuestStatus Quest::getStatus() const {
    return status;
}