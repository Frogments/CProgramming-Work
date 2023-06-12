#include <stdio.h>

typedef union cyto
{
    char str[5];
    short num[2];
} cyto;

int main()
{
    cyto ct1, ct2;

    printf("4글자 입력: ");
    scanf("%s", ct1.str);
    printf("암호는 %d %d\n\n", ct1.num[0], ct1.num[1]);
    printf("암호 숫자 2개 입력: ");
    scanf("%d %d", &ct2.num[0], &ct2.num[1]);
    printf("문자는 %s\n", ct2.str);

    return 0;
}