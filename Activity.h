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
    Activity( Date& d,std::string t, bool done): dateOfDeadline(d), task(t), done(done){}

    ~Activity()=default;

    bool operator==(const Activity& that){
        if (task == that.getTask()){
            if ((dateOfDeadline) == (that.dateOfDeadline)) {
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

    const std::string &getTask() const {
        return task;
    }

    bool isDone() const {
        return done;
    }

    void setDone(bool done){
        Activity::done = done;
    }
};
#endif //TO_DO_LIST_ACTIVITY_H
