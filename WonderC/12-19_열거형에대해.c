#include <stdio.h>

enum { FALSE, TRUE };

int main()
{
    int love;

    printf("이거를 마신다? YES=1, NO=0: ");
    scanf("%d", &love);
    if (love == TRUE)
        printf("둘이 사귄다\n");
    else
        printf("헤어진다\n");

    return 0;
}