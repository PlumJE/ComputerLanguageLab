#include <locale.h>
#include <Windows.h>
#include <stdio.h>

#include "../day/day.h"

void main() {
    // 지역 설정
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    // 년세 출력
    Day d;
    day().set(&d, "97/3/19", "%i/%i/%i");
    printf("My age is %u.\n", day().age(d));

    // 생년월일 출력
    char birthday[100];
    day().get(d, birthday, "%i-%i-%i");
    printf("My birthday is %hs.\n", birthday);
}