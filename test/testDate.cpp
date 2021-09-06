//
// Created by leonardo Del Bene on 06/09/21.
//
#include "gtest/gtest.h"
#include "../Date.h"
TEST(date_test,constructor_test){
    Date date(2021,3,5,8,30);
    ASSERT_EQ(2021,date.getYear());
    ASSERT_EQ(3,date.getMonth());
    ASSERT_EQ(5,date.getDay());
    ASSERT_EQ(8,date.getHour());
    ASSERT_EQ(30,date.getMinute());
}
TEST(year_test,setYear_test){
    Date date(2000,2,29,8,30);
    ASSERT_THROW(date.setYear(2001),std::out_of_range);
    ASSERT_NO_THROW(date.setYear(2024));
}
TEST(month_test,setMonth_test){
    Date date(2001,3,29,2,34);
    ASSERT_THROW(date.setMonth(14),std::out_of_range);
    ASSERT_THROW(date.setMonth(2),std::out_of_range);
    Date date1(2020,1,31,8,0);
    ASSERT_THROW(date1.setMonth(4),std::out_of_range);
    ASSERT_THROW(date1.setMonth(6),std::out_of_range);
    ASSERT_THROW(date1.setMonth(9),std::out_of_range);
    ASSERT_THROW(date1.setMonth(11),std::out_of_range);
    Date date2(2000,1,29,5,40);
    ASSERT_NO_THROW(date2.setMonth(2));
    ASSERT_NO_THROW(date2.setMonth(7));
}
TEST(day_test,setDay_test){
    Date date(2001,3,29,2,34);
    if (  date.getMonth()==4||date.getMonth()==6||date.getMonth()==9||date.getMonth()==11){
        ASSERT_THROW(date.setDay(31),std::out_of_range);
        ASSERT_NO_THROW(date.setDay(30));
    }
    date.setMonth(1);
    if (date.getMonth() == 1 || date.getMonth()== 3 || date.getMonth() == 5 || date.getMonth()== 7 || date.getMonth() == 8 || date.getMonth() == 10 || date.getMonth() == 12){
        ASSERT_THROW(date.setDay(32),std::out_of_range);
        ASSERT_NO_THROW(date.setDay(31));
    }
    date.setMonth(2);
    if (date.getMonth()==2){
        ASSERT_THROW(date.setDay(29),std::out_of_range);
        date.setYear(2000);
        ASSERT_NO_THROW(date.setDay(29));
    }
}
TEST(hour_test,setHour_test){
    Date date(2021,4,5,4,3);
    ASSERT_THROW(date.setHour(24),std::out_of_range);
}
TEST(minute_test,setMinute_test){
    Date date(2021,7,5,4,39);
    ASSERT_THROW(date.setMinute(65),std::out_of_range);
}