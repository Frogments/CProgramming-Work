#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void handler(int signo)
{
    printf("\nSigno=%d; Don't Touch Me\n", signo);
}

int main()
{
    signal(SIGINT, handler);
    printf("Waiting ctrl+c\n");
    pause();
    printf("Wait agin Ctrl+c\n");
    pause();

    return 0;
}