#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,sum=0;
int* ptr;

printf("Enter the number of elements to be stored: ");
scanf("%d",&n);

ptr = (int*)malloc(n * sizeof(int));

if(ptr!=NULL)

{
printf("Enter the elements: ");
for(int i=0;i<n;++i)
{
scanf("%d",ptr+i);
sum+=*(ptr+i);
}

printf("The sum of all the elements is %d: ",sum);
}

return 0;
}

