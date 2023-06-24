#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, add, k;
    double *dmp, sum = 0.0;

    printf("입력하는 숫자는 몇 개? ");
    scanf("%d", &max);
    dmp = (double*)calloc(max, sizeof(double));

    printf("%d개 값을 입력하시오 :", max);
    for (k = 0; k < max; k++)
    {
        scaf("%lf", &dmp[k]);
        sum += dmp[k];
    }   

    printf("추가 숫자는 몇 개? ");
    scanf("%d", &add);

    dmp = realloc(dmp, sizeof(double) * (max + add));

    printf("추가되는 %d개의 값을 입력하시오 :", add);
    for (k = max; k < (max + add); k++)
    {
        scanf("%lf", &dmp[k]);
        sum += dmp[k];
    }
    free(dmp);
    printf("평균 = %.1lf", sum / (max + add));

    return 0;
}