#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Multiton writable field struct
typedef struct {
    int year;
    unsigned month;
    unsigned date;
}
Day;

// Singleton readonly method strcut
struct day {
    const char (*get)(Day, const char[]);
    int (*getYear)(Day);
    unsigned (*getMonth)(Day);
    unsigned (*getDate)(Day);
    unsigned (*age)(Day);

    void (*set)(Day*, const char*, const char*);
    void (*setYear)(Day*, int);
    void (*setMonth)(Day*, unsigned);
    void (*setDate)(Day*, unsigned);
};
extern struct day day();