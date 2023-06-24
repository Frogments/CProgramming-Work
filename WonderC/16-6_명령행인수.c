#include <stdio.h>

int main(int argc, char **argv)
{
    printf("hi\n");
    while(*argv)
        printf("%s\n", *argv++);

    return 0;
}