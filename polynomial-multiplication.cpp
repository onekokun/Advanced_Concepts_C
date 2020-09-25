#include <iostream>

using namespace std;

struct node
{
    int coeff;
    int exp;
    struct node* next;
};

void print(struct node* head)
{
    struct node* ptr = head;

    while(ptr!=NULL)
    {
        cout<<ptr->coeff<<"x^"<<ptr->exp<<"+";
        ptr = ptr->next;
    }

    cout<<0<<endl;
}

void make(int x, int y, struct node** head)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->coeff = x;
    newNode->exp = y;
    newNode->next = NULL;

    struct node*ptr = *head;

    if(*head==NULL)
        *head  = newNode;
    else
    {
        while(ptr->next!=NULL)
        ptr = ptr->next;

        ptr->next = newNode;
    }
}

void add(struct node* ptr1 , struct node* ptr2 , struct node** ptr)
{
    while(ptr1!=NULL || ptr2!=NULL)
    {
        if(ptr1 == NULL)
    {
        make(ptr2->coeff,ptr2->exp,ptr);
        ptr2 = ptr2->next;
    }
    else if(ptr2 == NULL)
    {

        make(ptr1->coeff,ptr1->exp,ptr);
        ptr1 = ptr1->next;
    }
    else if(ptr1->exp == ptr2->exp)
    {
        make(ptr1->coeff+ptr2->coeff,ptr1->exp,ptr);
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    else if (ptr1->exp > ptr2->exp)
    {

        make(ptr1->coeff,ptr1->exp,ptr);
        ptr1 = ptr1->next;
    }
    else if (ptr2->exp > ptr1->exp)
    {

        make(ptr2->coeff,ptr2->exp,ptr);
        ptr2 = ptr2->next;
    }
    }


}

int main(void)
{

    struct node* poly1 = NULL, *poly2 = NULL, *poly=NULL;

    //polynomial 1

    make(4,3,&poly1);
    make(3,2,&poly1);
    make(2,1,&poly1);
    make(1,0,&poly1);

    print(poly1);

    // polynomial 2
    make(2,2,&poly2);
    make(2,0,&poly2);
    print(poly2);

    add(poly1,poly2,&poly);

    print(poly);

    return 0;
}
