#include<stdio.h>
#include<stdlib.h>

struct Stack
{
unsigned capacity;
int top;
int* array;

};

struct Stack* CreateStack(unsigned capacity)
{

struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));

stack->capacity = capacity;
stack->top=-1;
stack->array = (int*)malloc(sizeof(int)*stack->capacity);

return stack;

}

int IsFull(struct Stack* stack)
{
return (stack->top==stack->capacity-1);

}

int IsEmpty(struct Stack* stack)
{
return (stack->top==-1);
}

void push(struct Stack* stack,int value)
{

if(IsFull(stack))
return;

stack->array[++stack->top]=value;

}

void pop(struct Stack* stack)
{
if(IsEmpty(stack))
return;

stack->array[stack->top--]=0;

}

void Display(struct Stack* stack)
{
for(int i=0;i<=stack->top;++i)
printf("%d ",stack->array[i]);
printf("\n");
}

int main()
{

struct Stack* stack = CreateStack(100);

push(stack,30);
Display(stack);
push(stack,14);
Display(stack);
pop(stack);
Display(stack);


return 0;

}

