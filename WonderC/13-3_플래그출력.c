#include <stdio.h>

int main()
{
    printf("%d\n", 123); //기본 좌측 정렬
    printf("%10d\n", 123); //길이 지정하고 우측정렬
    printf("%010d\n", 123); //숫자 앞 빈칸을 0으로 채움
    printf("%-10d\n", 123); //길이 지정하고 좌측정렬
    printf("%d\n", -123); // 음수는 -표시
    printf("% d\n", 123); //+자리를 공백으로
    printf("%+d\n", 123); //+기호를 표시해줌
    printf("%#x\n\n\n", 12); //16진수 앞에 0x붙임


    printf("%10s", "ab"); //길이 지정하고 우측 정렬
    printf("%-10s\n", "ab"); // 길이 지정하고 좌측 정렬
}