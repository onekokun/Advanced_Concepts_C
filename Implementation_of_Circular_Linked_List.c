#include<stdio.h>
#include<stdlib.h>

struct node
{

int data ;
struct node* next;


};



int main()
{

struct node* head = (struct node*)malloc(sizeof(struct node));
struct node* body = (struct node*)malloc(sizeof(struct node));

struct node* tail = (struct node*)malloc(sizeof(struct node));


head->data  = 10;
head->next = body;

body->data = 20;
body->next = tail;

tail->data = 30;
tail->next = head;


return 0;
}

