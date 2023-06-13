#include <stdio.h>

// #pragma pack(pop) 하기 전까지의 모든 구조체의 기준 바이트를 1로
// #pragma pack(push, n)하면 기준 바이트가 n 
#pragma pack(push, 1)
typedef struct 
{
    char ch;
    int in;
} Sample1;
#pragma pack(pop)

typedef struct 
{
    char ch;
    int in;
} Sample2;

int main()
{
    printf("sizeof(sample1): %dbyte\n", sizeof(Sample1));
    printf("sizeof(Sample2): %dbyte\n", sizeof(Sample2));

    return 0;
}

