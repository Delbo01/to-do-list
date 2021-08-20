//
// Created by leonardo Del Bene on 20/08/21.
//

#ifndef DATE_DATE_H
#define DATE_DATE_H
#include <memory>
#include <stdexcept>

class Date{
private:
    int year;
    int month;
    int day;
    int hour;
    int minute;
public:
    Date(int y,int m, int d,int h,int mi):year(y),month(m),day(d),hour(h), minute(mi){}
    ~Date()=default;

    int getYear() const {
        return year;
    }

    void setYear(int year);

    int getMonth() const {
        return month;
    }

    void setMonth(int month);

    int getDay() const {
        return day;
    }

    void setDay(int day);

    int getHour() const {
        return hour;
    }

    void setHour(int hour);

    int getMinute() const {
        return minute;
    }

    void setMinute(int minute);
};
#endif //DATE_DATE_H
