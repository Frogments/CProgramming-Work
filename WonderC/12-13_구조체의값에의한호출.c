#include <stdio.h>

struct human
{
    char name[10];
    float power;
};

void attack(struct human f1, struct human f2)
{
    if (f1.power > f2.power)
        printf("출동 %s\n", f1.name);
    else printf("출동 %s\n", f2.name);
}

int main()
{
    struct human h1 = {"gildong", 8.2}, h2 = {"hyungwook", 9.3};

    attack(h1, h2);

    return 0;
}