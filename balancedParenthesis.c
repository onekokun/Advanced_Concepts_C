#include <stdio.h>
#include <stdlib.h>
#define bool int


struct node {
	char data;
	struct node* next;
};


void push(struct node** t, int key)
{

	struct node* newNode = (struct node*)malloc(sizeof(struct node));

	if (newNode == NULL) 
		printf("Stack overflow n");

	newNode->data = key;
	newNode->next = *t;
	*t = newNode;
}

int pop(struct node** t)
{
	char ch;
	struct node* top;


	if (*t == NULL)
		printf("Stack Underflow");

	else
    {
		top = *t;
		ch = top->data;
		*t = top->next;
		return ch;
	}
}


bool isapair(char c1, char c2)
{
	if (c1 == '(' && c2 == ')')
		return true;

	else
		return false;
}


bool isBalanced(char str[])
{
	int i = 0;
	struct node* stack = NULL;


	while (str[i]) 
    {
		if (str[i] == '(')
			push(&stack, str[i]);


		if (str[i] == ')') 
        {
			if (stack == NULL)
				return false;

			else if (!isapair(pop(&stack), str[i]))
				return false;
		}
		
		i++;
	}


	if (stack == NULL)
		return true;
	else
		return false;
}
