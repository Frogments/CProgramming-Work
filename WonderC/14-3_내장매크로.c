#include <stdio.h>

int main()
{
    printf("컴파일 날짜: %s\n", __DATE__);
    printf("컴파일 시간: %s\n", __TIME__);
    printf("컴파일 날짜 시간: %s\n", __TIMESTAMP__);
    printf("파일위치: %s\n", __FILE__);
    printf("라인번호: %d\n", __LINE__);

    return 0;
}