#include <stdio.h>
#include <stdlib.h>

#define UNIX

int main()
{
    int k, m;

    for (k = 0; k < 70; k++)
    {
        #ifdef UNIX
            system("clear");
        #else
            system("cls");
        #endif

        // #elif <- else if 역할도 있다.
        
        for (m = 0; m < k; m++) printf(" ");
        printf("<>\n");
    }

    return 0;
}