#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node 
{
    char name[10];
    int age;
    struct node *link;
} node;

int main()
{
    node *head = NULL, *np, *tp;
    int k;

    for (k = 0; k < 3; k++)
    {
        np = (node *)malloc(sizeof(node));
        printf("이름 나이 입력: ");
        scanf("%s %d", &np->name, &np->age);
        np->link = NULL;
        if (head == NULL)
        {
            head = np;
            tp = head;
        }
        else
        {
            tp->link = np;
            tp = tp->link;
        }
    }
    tp = head;
    while (np != NULL)
    {
        printf("[%s:%d] -> ", tp->name, tp->age);
        tp = tp->link;
    }
    printf("NULL\n");
    return 0;
}