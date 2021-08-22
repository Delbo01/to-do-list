//
// Created by leonardo Del Bene on 22/08/21.
//

#include "Controller.h"

void Controller::write(int year, int month, int day, int hour, int minute, std::string task, bool done) {
    Date date1(year,month,day,hour,minute);
    std::unique_ptr<Activity>task1(new Activity(&date1,task,done));
    list->addActivity(std::move(task1));
}

void Controller::printDayTask(int year, int month,int day, int hour, int minute) {
    Date date(year,month,day,hour,minute);
    list->printDAyActivity(date);

    }
}

