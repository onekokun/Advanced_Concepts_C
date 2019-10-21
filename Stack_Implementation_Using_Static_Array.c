#include<stdio.h>
#define CAPACITY 5

int stack[CAPACITY],top;
void pop(int []);
void push(int []);
void Display(int []);

int main()
{

    int choice;

    printf("press 1 to pop an element\n");
    printf("press 2 to push an element\n");
    printf("press 3 to display the stack\n");
    printf("press 4 to quit\n");
    scanf("%d", &choice);

    switch(choice)
    {

    case 1: pop(stack);break;
    case 2: push(stack);break;
    case 3: Display(stack);break;
    case 4 :exit(0);break;

    default: printf("Invalid Input");


    }

    main();

return 0;
}

void push(int stack[])
{
int key;

if(top==CAPACITY-1)
printf("Full stack\n");
top++;

printf("Enter the value: ");
scanf("%d", &key);
stack[top]=key;

}
void pop(int stack[])
{
    if(top==-1)
    {
        printf("stack is empty.\n");

    }

    stack[top]=0;
    top--;


}

void Display(int stack[])
{

for(int i=0;i<CAPACITY;i++)
printf("%d ",stack[i]);
printf("\n");
}



