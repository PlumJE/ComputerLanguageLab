#include "procedure_oriented_programming_c.h"
#include "day.h"
#include <stdio.h>

int main(void) {
    Day date;

    procedure_oriented_programming_c();
    procedure_oriented_programming_c_print_message("test_package");

    day.set(&date, "1997-03-19", "%d-%u-%u");
    printf("%u\n", day.getAge(date));

    return 0;
}