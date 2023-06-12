#include <stdio.h>

int main(void)
{
   char ch;
   int in;
   double db;

   char* pc = &ch;
   int* pi = &in;
   double* pd = &db;
   
   printf("char형 변수의 주소 크기 : %lu\n", sizeof(&ch));
   printf("int형 변수의 주소 크기: %lu\n", sizeof(&in));
   printf("double형 변수의 주소 크기 : %lu\n", sizeof(&db));

   printf("char * 포인터의 크기 : %lu\n", sizeof(pc));
   printf("int * 포인터의 크기 : %lu\n", sizeof(pi));
   printf("double * 포인터의 크기 : %lu\n", sizeof(pd));

   printf("char * 포인터 가리키는 변수의 크기 : %lu\n", sizeof(*pc));
   printf("int * 포인터가 가리키는 변수의 크기 : %lu\n", sizeof(*pi));
   printf("double * 포인터의 가리키는 변수의 크기: %lu\n", sizeof(*pd));

   return 0;
}