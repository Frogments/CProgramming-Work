#include <stdio.h>

struct human
{
    char name[10];
    float power;
};

struct human attack(struct human f1, struct human f2)
{
    if (f1.power > f2.power)
        return f1;
    else return f2;
}

int main()
{
    struct human h1 = {"gildong", 8.2}, h2 = {"hyungwook", 9.3}, att;

    att = attack(h1, h2);
    printf("출동 %s\n", att.name);
    return 0;
}