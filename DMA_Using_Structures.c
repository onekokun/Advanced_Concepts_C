#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    struct student
    {
    int roll;
    char _name[20];
    int CGPA;

    };

    struct student* ptr;

    ptr = (struct student*)malloc(sizeof(struct student));


    printf("Enter the\troll number\tName\tCGPA: \n\t\t");
    scanf("%d%s%d",&ptr->roll,ptr->_name,&ptr->CGPA);
    printf("Thank you %s for providing the input",ptr->_name);




    return 0;
}

