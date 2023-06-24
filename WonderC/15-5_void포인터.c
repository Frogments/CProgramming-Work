#include <stdio.h>

int main()
{
    int num = 7;
    char ch = 'A';
    void* vp;

    //자료형에 상관없이 주소를 받아서
    vp = &num;
    printf("%d\n", *(int*)vp); //출력할 떄 형변환
    vp = &ch;
    printf("%c\n", *(char*)vp);
    return 0;
}