#include <stdio.h>
#include <string.h>

union cyto
{
    char str[5];
    int num;
};

int main()
{
    union cyto ct1;

    strcpy(ct1.str, "1234");
    printf("정수:%d, 문자열%s\n", ct1.num, ct1.str);
    ct1.num = 12345;
    printf("정수:%d, 문자열%s\n", ct1.num, ct1.str);
}