#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


// 데이터 클래스
typedef struct {
    int year;
    unsigned month;
    unsigned date;
}
Day;


// 프로시저 인스턴스
extern struct day {
    void (*get)(Day, char*, const char*);
    int (*getYear)(Day);
    unsigned (*getMonth)(Day);
    unsigned (*getDate)(Day);
    
    void (*set)(Day*, const char*, const char*);
    void (*setYear)(Day*, int);
    void (*setMonth)(Day*, unsigned);
    void (*setDate)(Day*, unsigned);

    unsigned (*getAge)(Day);
}
day();