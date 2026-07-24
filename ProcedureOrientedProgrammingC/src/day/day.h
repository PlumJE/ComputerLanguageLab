#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


// 가변 멀티턴 필드 구조체
typedef struct {
    int year;
    unsigned month;
    unsigned date;
}
Day;


// 불변 싱글턴 메소드 구조체
struct day {
    void (*get)(Day, char*, const char*);
    int (*getYear)(Day);
    unsigned (*getMonth)(Day);
    unsigned (*getDate)(Day);
    
    void (*set)(Day*, const char*, const char*);
    void (*setYear)(Day*, int);
    void (*setMonth)(Day*, unsigned);
    void (*setDate)(Day*, unsigned);

    unsigned (*age)(Day);
};
extern struct day day();