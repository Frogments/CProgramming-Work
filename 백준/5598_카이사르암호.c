#include <stdio.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A') str[i] = 'X';
        else if (str[i] == 'B') str[i] = 'Y';
        else if (str[i] == 'C') str[i] = 'Z';
        else str[i] -= 3;
        i++;
    }
    printf("%s", str);
}