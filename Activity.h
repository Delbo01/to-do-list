//
// Created by leonardo Del Bene on 20/08/21.
//

#ifndef TO_DO_LIST_ACTIVITY_H
#define TO_DO_LIST_ACTIVITY_H

#include <string>
#include <utility>
#include "Date.h"




class Activity{
private:
    Date& dateOfDeadline;
    std::string task;
    bool done;
public:
    Activity( Date& d,std::string t, bool done): dateOfDeadline(d), task(std::move(t)), done(done){}

    ~Activity()=default;

    bool operator==(const Activity& that){
        if ((dateOfDeadline) == (that.dateOfDeadline)) {
            if (task == that.task) {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }

    const Date &getDateOfDeadline() const {
        return dateOfDeadline;
    }

    void setDateOfDeadline(const Date &date) {
        dateOfDeadline.setYear(date.getYear());
        dateOfDeadline.setMonth(date.getMonth());
        dateOfDeadline.setDay(date.getDay());
        dateOfDeadline.setHour(date.getHour());
        dateOfDeadline.setMinute(date.getMinute());
    }

    const std::string &getTask() const {
        return task;
    }

    void setActivity(const std::string &activity) {
        Activity::task = activity;
    }

    bool isDone() const {
        return done;
    }

    void setDone(bool done){
        Activity::done = done;
    }
};
#endif //TO_DO_LIST_ACTIVITY_H
