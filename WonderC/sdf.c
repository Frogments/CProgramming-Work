#include <stdio.h>

int main()
{
    int ary[5] = {1,2,3,4,5};
    int *pa, *pb, *pc;
    int i;
    pa = (int *)malloc(sizeof(ary)); 
    for (i=0; i < 5; i++) 
    {
        pa[i] = ary[i]; 
    }
    pb = (int *)calloc(pa[3], sizeof(int)); 
    pc = (int *)realloc(NULL, pa[4]);
    printf("%lu %lu", sizeof(pa), sizeof(pb));
}