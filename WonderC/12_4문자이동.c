#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct mych
{
    char ch;
    int pos, spd;
} mych;

int main()
{
    int met, k, jul;
    mych cld[26];

    for (jul = 0; jul < 26; jul++)
    {
        cld[jul].ch = rand() % 25 + 65;
        cld[jul].pos = rand() % 26 - 26;
        cld[jul].spd = rand() % 5 + 1;
    }
    for (k = 1; k < 100; k++)
    {
        system("clear");
        for (jul = 0; jul < 26; jul++)
        {
            cld[jul].pos += cld[jul].spd;
            if (cld[jul].pos > 110) cld[jul].pos = rand() % 26 - 26;
            for (met = 0; met <= 110; met++)
            {
                if (cld[jul].pos == met) printf("%c", cld[jul].ch);
                else printf(" ");
            }
            printf("\n");
        }
        sleep(1);
    }
}