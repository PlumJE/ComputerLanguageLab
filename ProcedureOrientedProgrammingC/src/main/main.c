#include <locale.h>
#include <wchar.h>

#include "../day/day.h"

void main() {
    // 지역 설정
    setlocale(LC_ALL, "korean");

    // 년세 출력
    Day d;
    day().set(&d, "97/3/19", "%i/%i/%i");
    wprintf(L"제 나이는 %u세 이고요,\n", day().age(d));

    // 생년월일 출력
    char birthday[100];
    day().get(d, birthday, "%i-%i-%i");
    wprintf(L"제 생일은 %hs 이에요.\n", birthday);
}