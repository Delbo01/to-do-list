//
// Created by leonardo Del Bene on 20/08/21.
//

#include "Date.h"

void Date::setYear(int year) {
    Date::year = year;
    isValid();
}

void Date::setMonth(int month) {
    Date::month = month;
    isValid();
}

void Date::setDay(int day) {
    Date::day = day;
    isValid();
}

void Date::setHour(int hour) {
    Date::hour = hour;
    isValid();
}

void Date::setMinute(int minute) {
    Date::minute = minute;
    isValid();
}

bool Date::isValid() const {
    if (year < 0)
        throw (std::out_of_range("OUT OF RANGE"));
    if (month<=0||month>=13)
        throw (std::out_of_range("OUT OF RANGE"));
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day <= 0 || day >= 32) {
            throw (std::out_of_range("OUT OF RANGE"));
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day <= 0 || day >= 31)
            throw (std::out_of_range("OUT OF RANGE"));

    } else if (month == 2) {
        if ((year % 4) != 0) {
            if (day <= 0 || day >= 29)
                throw (std::out_of_range("OUT OF RANGE"));
        } else {
            if (day <= 0 || day >= 30)
                throw (std::out_of_range("OUT OF RANGE"));
        }
    }
    if (hour < 0 || hour > 23)
        throw (std::out_of_range("OUT OF RANGE"));
    if (minute < 0 || minute > 59)
        throw (std::out_of_range("OUT OF RANGE"));
    return true;
}


Date::Date(int y, int m, int d, int h, int mi) {
    year = 1;
    month = 1;
    day = 1;
    hour = 1;
    minute = 1;
    setYear(y);
    setMonth(m);
    setDay(d);
    setHour(h);
    setMinute(mi);
}