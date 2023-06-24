#include <stdio.h>

typedef struct {
    int in;
    char ch1;
    char ch2;
    short ch3;
} st;

int main()
{
    printf("%u\n", sizeof(st));
}