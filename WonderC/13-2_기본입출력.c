#include <stdio.h>

int main()
{
    //정수 관련
    printf("%d\n", 6);      //부호가 있는 10진 정수
    printf("%i\n", 6);      //부호가 있는 10진 정수 = %d
    printf("%x\n", 18);     //16진수 형식으로 출력
    printf("%X\n", 18);     //16진수 형식으로 출력 (대문자)
    printf("%ld\n", 88);    //부호있는 long
    printf("%lld\n", 88);   //부호있는 longlong
    printf("%u\n", 12);     //unsigned 10진 정수
    printf("%o\n", 12);     //8진수 형식으로 출력
    printf("%lu\n", 12);    //unsigned long
    printf("%llu\n\n\n", 12);   //unsigned long long

    //실수 관련
    printf("%f\n", 1.234567);   //소수점 이하 6자리까지 출력
    printf("%Lf\n", 1.234567);  //소수점 이하 6자리까지 출력 (long double)
    printf("%F\n", 1.234567);   //소수점 이하 6자리까지 출력 (대문자)
    printf("%e\n", 1.234567);   //지수 표기법으로 출력 (소문자)
    printf("%E\n", 1.234567);   //지수 표기법으로 출력 (대문자)
    printf("%g\n", 1.234567);   //%f와 %e중 짧은 것으로 출력 (소문자)
    printf("%G\n", 1.234567);   //%f와 %e중 짧은 것으로 출력 (대문자)
    printf("%a\n", 1.234567);   //16진법으로 표시 (소문자)
    printf("%A\n", 1.234567);   //16진법으로 표시 (대문자)
}