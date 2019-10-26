#include<stdio.h>
#define CAPACITY 5

int queue[CAPACITY],rear,front;

void Display()
{
     int i;

if(rear==front)
{
    printf("There are no items\n");

}
for(i=0;i<front;++i)
    {
    printf("%d ",queue[i]);
    }
printf("\n");

}

void del()
{

int i;

if(front==rear)
{
printf("Deletion is not possible\n");
}

else
{
for(i=0;i<front-1;i++)
{
queue[i]=queue[i+1];
}

front--;
}
}

void insert(int key)
{

if(front>=CAPACITY)
{
printf("Insertion is not possible\n");
}

else
{
queue[front] = key;
front++;
}

}

int main()
{
front = 0;
rear = 0;

insert(909);
Display();
del();
Display();
insert(6);
Display();
insert(9);
Display();
insert(345);
insert(4);
insert(5);
Display();
insert(335);
return 0;
}

