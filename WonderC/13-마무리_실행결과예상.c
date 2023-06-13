#include <stdio.h>

//  실행결과 예상하기
int main()
{
    FILE *fp;
    fp = fopen("a.txt", "w");
    fputs("a mango\nan apple", fp);
    fclose(fp);

    char str[20] = "empty";
    int ch;
    fp = fopen("a.txt", "r");
    ch = fgetc(fp);
    while (fgetc(fp) != EOF);
    fgets(str, sizeof(str), fp);
    printf("%s", str);
    fclose(fp);
    return 0;
}