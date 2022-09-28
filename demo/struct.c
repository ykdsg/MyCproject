//
// Created by ykdsg on 2021/9/11.
//

#include <stdio.h>

struct date{
    int month;
    int day;
    int year;
};



int main(void ) {

    struct date today;
    today=(struct date){07,31,2021};
    struct date thismonth={.month=7,.year=2022};
    struct date day;
    struct date *pDate=&today;

    printf("today's date is %i-%i-%i\n", today.year, today.month, today.day);
    printf("the day's date is %i-%i-%i\n", day.year, day.month, day.day);

    printf("this month is %i-%i-%i\n", thismonth.year, thismonth.month, thismonth.day);




    printf("address of today is %p\n", pDate);
}