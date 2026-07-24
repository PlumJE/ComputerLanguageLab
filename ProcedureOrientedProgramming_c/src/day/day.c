#include "day.h"

// getters
static int getYear(Day day) {
    int result = day.year;
    if(result < 1900)
        result = 1900 + (result % 100);
    else if(result > 2099)
        result = 2000 + (result % 100);
    return result;
}

static unsigned getMonth(Day day) {
    unsigned result = day.month;
    if(result > 12)
        result = 12;
    return result;
}

static unsigned getDate(Day day) {
    unsigned result = day.date;
    if(result > 31)
        result = 31;
    return result;
}

static void get(Day day, char* string, const char* format) {
    int year = getYear(day);
    unsigned month = getMonth(day);
    unsigned date = getDate(day);

    sprintf(string, format, year, month, date);
}

// setters
static void setYear(Day* day, int year) {
    if(year < 1900)
        year = 1900 + (year % 100);
    else if(year > 2099)
        year = 2099 + (year % 100);
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

static void set(Day* day, const char* string, const char* format) {
    int year;
    unsigned month;
    unsigned date;
    sscanf_s(string, format, &year, &month, &date);

    setYear(day, year);
    setMonth(day, month);
    setDate(day, date);
}

// other operations
static unsigned age(Day day) {
    unsigned result = 2026 - getYear(day);
    return result;
}


struct day day() {
    static struct day singleton = {
        .get = get,
        .getYear = getYear,
        .getMonth = getMonth,
        .getDate = getDate,
        
        .set = set,
        .setYear = setYear,
        .setMonth = setMonth,
        .setDate = setDate,

        .age = age,
    };
    return singleton;
}