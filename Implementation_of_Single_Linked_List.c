#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
    int a;
    struct node* next;
    };

    struct node* head = NULL;
    struct node* body = NULL;
    struct node* tail = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    body = (struct node*)malloc(sizeof(struct node));
    tail = (struct node*)malloc(sizeof(struct node));

    head->a = 10;
    head->next = body;

    body->a = 20;
    body->next = tail;

    tail->a = 30;
    tail->next = NULL;

    printf("%d %d %d",head->a,body->a,tail->a);


    return 0;
}

