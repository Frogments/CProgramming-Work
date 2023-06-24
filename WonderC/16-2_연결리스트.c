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

    np = (node *)malloc(sizeof(node));
    strcpy(np->name, "gildong");
    np->age = 22;
    np->link = NULL;
    head = np;

    np = (node *)malloc(sizeof(node));
    strcpy(np->name, "hyungwook");
    np->age = 28;
    np->link = NULL;
    head->link = np;

    tp = head;
    while (tp != NULL)
    {
        printf("[%s:%d] -> ", tp->name, tp->age);
        tp = tp->link;
    }
    printf("NULL\n");
    return 0;
}