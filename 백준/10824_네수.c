#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char A[1000000], B[1000000], C[1000000], D[1000000];
    long long int a, b;
                        // 10 20 30 40 
    scanf("%s %s %s %s", A, B, C, D);

    strcat(A, B);
    strcat(C, D);
    // C = "3040";

    a = atoll(A);
    b = atoll(C);

    printf("%lld\n", a + b);
}