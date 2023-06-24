char *ps[5] = { "b", "f", "v", "s", "g" };
int ary[2][3] = {{1,2,3}, {4,5,6}};
char**p1 = ps;
int (*p2)[3] = ary;
int *p3 = ary[0];
char **p4 = &ps[2];
int (*p5)[2][3] = &ary;
#include <stdio.h>

int main()
{
    printf("%c\n", **p1);
    printf("%d\n", p2[0][0]);
    printf("%d\n", *p3);
    printf("%c\n", **p4);
    printf("%d\n", (*p5)[0][1]); //중요
}


