#include <stdio.h>

int main()
{
    char *str[3] = { "ring", "my", "bell" };
    char **dp = str;

    while (*dp)
        printf("%s\n", *dp++);
    
    return 0;
}