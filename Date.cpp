//
// Created by leonardo Del Bene on 20/08/21.
//

#include "Date.h"

void Date::setYear(int year) {
    if (year < 0|| ((year%4)!=0 & day==29))
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::year=year;
}

void Date::setMonth(int month) {
    if (month <= 0 || month >= 13)
        throw std::out_of_range("OUT OF RANGE");
    else if (day == 29) {
        if ((year % 4) != 0)
            if (month == 2)
                throw (std::out_of_range("OUT OF RANGE"));
    } else if (day == 31){
        if (month == 4 || month == 6 || month == 9 || month == 11)
            throw (std::out_of_range("OUT OF RANGE"));
    }
    else
        Date::month = month;
}

void Date::setDay(int day) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day <= 0 || day >= 32)
            throw (std::out_of_range("OUT OF RANGE"));
        else
            Date::day = day;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day <= 0 || day >= 31)
            throw std::out_of_range("OUT OF RANGE");
        else
            Date::day = day;
    } else if (month == 2) {
        if ((year % 4) == 0) {
            if (day <= 0 || day >= 30)
                throw (std::out_of_range("OUT OF RANGE"));
            else
                Date::day = day;
        } else if (day <= 0 || day >= 29) {
            throw (std::out_of_range("OUT OF RANGE"));
        } else
            Date::day = day;
    }
}

void Date::setHour(int hour) {
    if (hour < 0 || hour > 23)
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::hour = hour;
}

void Date::setMinute(int minute) {
    if (minute < 0 || minute > 59)
        throw (std::out_of_range("OUT OF RANGE"));
    else
        Date::minute = minute;
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


