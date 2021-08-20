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
public:
    explicit Date(int y = 1970,int m= 1, int d=1):year(y),month(m),day(d){}
    ~Date()=default;

    int getYear() const {
        return year;
    }

    void setYear(int year) {
        if (year<0)
            throw (std::out_of_range("OUT OF RANGE"));
        else
            Date::year = year;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        if (month<=0 || month>=13)
            throw std::out_of_range("OUT OF RANGE");
        else
            Date::month = month;
    }

    int getDay() const {
        return day;
    }

    void setDay(int day) {
        if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if (day<=0 || day>=32)
                throw (std::out_of_range("OUT OF RANGE"));
            else
                Date::day = day;
        }
        else if (month==4||month==6||month==9||month==11) {
            if (day <= 0 || day >= 31)
                throw std::out_of_range("OUT OF RANGE");
            else
                Date::day = day;
        } else if (month==2){
            if ((year%4)==0){
                if (day<=0|| day>=30)
                    throw (std::out_of_range("OUT OF RANGE"));
                else
                    Date::day = day;
            }
            else if (day<=0|| day>=29){
                throw (std::out_of_range("OUT OF RANGE"));
            }
            else
                Date::day = day;
        }
    }
};
#endif //DATE_DATE_H
