#include "day.h"

int main(int args, char *argv[]) {
    Day d;
    day().set(&d, "97/3/19", "%i/%i/%i");

    printf("My age is %ui \n", day().age(d));
    return 0;
}