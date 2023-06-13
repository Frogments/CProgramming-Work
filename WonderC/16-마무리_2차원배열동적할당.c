#include <stdio.h>

int main()
{
    int i;
    int **matrix = (int**)malloc(4 * sizeof(int *));
    for (i = 0; i < 4; i++)
    {
        matrix[i] = (int *)malloc(5 * sizeof(int));
        matrix[i] = &i;
    }
    *matrix = &matrix[0];
    for (i = 0; i < 4; i++)
    {
        printf("%d\n",matrix[i]);
        free(matrix[i]);
    }
    free(matrix);
}
