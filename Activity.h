//
// Created by leonardo Del Bene on 20/08/21.
//

#ifndef TO_DO_LIST_ACTIVITY_H
#define TO_DO_LIST_ACTIVITY_H

#include <string>
#include "Date.h"


class Activity{
private:
    Date dateOfDeadline;
    std::string activity;
    bool done;
public:
    Activity(Date d,std::string a, bool done): dateOfDeadline(d),activity(a), done(done){}
    ~Activity()=default;

    const Date &getDateOfDeadline() const {
        return dateOfDeadline;
    }

    void setDateOfDeadline(const Date &dateOfDeadline) {
        Activity::dateOfDeadline = dateOfDeadline;
    }

    const std::string &getActivity() const {
        return activity;
    }

    void setActivity(const std::string &activity) {
        Activity::activity = activity;
    }

    bool isDone() const {
        return done;
    }

    void setDone(bool done) {
        Activity::done = done;
    }
};
#endif //TO_DO_LIST_ACTIVITY_H
