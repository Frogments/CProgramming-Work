#include <stdio.h>

int main()
{
    int arr[5][6];
    int num = 1;
    int sum, i, j;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = num;
            num++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        arr[i][j] = sum;
    }
    for (i = 0; i < 6; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += arr[j][i];
        }
        arr[j][i] = sum;
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}