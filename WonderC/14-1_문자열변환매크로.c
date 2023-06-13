#include <stdio.h>

#define SPRINT(s) printf("%s\n", s)
#define NPRINT(s) printf("%s\n", #s)
//변수를 문자열 취급하고 싶으면 #를 붙이기

#define CRPINT(a, b) printf("%d\n", a##b)
// ##은 변수를 붙여줌

int main()
{
    SPRINT("I LOVE YOU");
    NPRINT(I LOVE YOU);
    CRPINT(5, 8);
    return 0;
}