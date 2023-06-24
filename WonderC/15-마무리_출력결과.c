#include <stdio.h>

int main()
{
    char a[4][10] = {"horse", "fox","hippo", "tiger"};
    char* pa[] = {a[0], a[1], a[2], a[3]};
    int count, i;
    count = sizeof(pa) / sizeof(pa[0]);
    for (i = 0; i < count; ++i)
    {
        printf("%c\n", pa[i][i]);
    }
}