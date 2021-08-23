//
// Created by leonardo Del Bene on 22/08/21.
//

#include "Controller.h"

void Controller::write(Date date, std::string task, bool done) {
    std::unique_ptr<Activity> task1(new Activity(&date, task, done));
    list->addActivity(std::move(task1));
}

void Controller::printDayTask(Date date) {
    list->printDAyActivity(date);

}

void Controller::print() {
    list->printAllList();
}


