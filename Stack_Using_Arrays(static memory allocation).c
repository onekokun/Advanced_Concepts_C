#include<stdio.h>
#define CAPACITY 5

int stack[CAPACITY],top;
void pop(int []);
void push(int [],int );
void Display(int []);

int main()
{
    top=-1;

Display(stack);
push(stack,1);

Display(stack);
push(stack,6);

Display(stack);
push(stack,24);

Display(stack);
push(stack,8);


Display(stack);
pop(stack);


Display(stack);

return 0;
}

void push(int stack[],int key)
{
if(top==CAPACITY-1)
printf("Full stack\n");
top++;
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



