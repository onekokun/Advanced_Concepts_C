#include<stdio.h>
#include<stdlib.h>

struct student
{

int roll;
char _name[20];
int age;
int year;

};

int main()
{

int n,i;



printf("Enter the number of inputs: ");
scanf("%d",&n);
struct student Sameer[n];

printf("roll: name: age: year: \n");
for(i=0;i<n;++i)
scanf("%d%s%d%d",&Sameer[i].roll,&Sameer[i]._name,&Sameer[i].age,&Sameer[i].year);

for(i=0;i<n;++i)
printf("roll: %d\nname: %s\nage: %d\nyear: %d\n",Sameer[i].roll,Sameer[i]._name,Sameer[i].age,Sameer[i].year);

return 0;

}

