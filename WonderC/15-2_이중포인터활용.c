#include <stdio.h>

void swap_ptr(char **ppa, char**ppb);

int main()
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char**ppb)
{
    char *temp;
    // *ppa -> *ppa의 주소 (pa의 주소)
    // ppa -> ppa의 주소
    // **ppa -> *ppa의 주소가 가리키는 값
    temp = *ppa; 
    *ppa = *ppb;
    *ppb = temp;
}
