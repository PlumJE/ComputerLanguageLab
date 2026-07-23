#include "../day/day.h"

int main(int args, char *argv[]) {
    Day d;
    day().set(&d, "97/3/19", "%i/%i/%i");

    printf("My age is %u \n", day().age(d, true));
    printf("Birthday format : %s \n", day().get(d, "%i-%i-%i"));
    return 0;
}