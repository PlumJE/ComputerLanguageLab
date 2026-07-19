#include "day.h"

static const char get(Day day, const char* formatedString) {
    char result[11];
    sprintf(result, formatedString, day.year, day.month, day.date);
    return result;
}

static int getYear(Day day) {
    return day.year;
}

static unsigned getMonth(Day day) {
    unsigned result = day.month;
    if(result < 13)
        return result;
    else
        return 0;
}

static unsigned getDate(Day day) {
    unsigned result = day.date;
    if(result < 32)
        return result;
    else
        return 0;
}

static unsigned age(Day day) {
    unsigned result = 2026;
    result -= day.year;
    return result;
}

static void set(Day* day, const char* string, const char* format) {
    int year;
    unsigned month;
    unsigned date;
    sscanf_s(string, format, &year, &month, &date);

    setYear(day, year);
    setMonth(day, month);
    setDate(day, date);
}

static void setYear(Day* day, int year) {
    if(year > 2026)
        year = 2026;
    day->year = year;
}

static void setMonth(Day* day, unsigned month) {
    if(month > 12)
        month = 12;
    day->month = month;
}

static void setDate(Day* day, unsigned date) {
    if(date > 31)
        date = 31;
    day->date = date;
}

struct day day() {
    static struct day singleton = {
        .get = get,
        .getYear = getYear,
        .getMonth = getMonth,
        .getDate = getDate,
        .age = age,

        .set = set,
        .setYear = setYear,
        .setMonth = setMonth,
        .setDate = setDate
    };
    return singleton;
}