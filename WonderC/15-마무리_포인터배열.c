#include <stdio.h>

int main()
{
    char* str[] = {"apple", "pear", "peach", "banana", "melon"};
    
    int str_len = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < str_len; ++i)
    {
        printf("%s\n", str[i]);
    }
}