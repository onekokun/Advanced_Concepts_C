#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
};

void append(int key, Node** head_ref)
{
    Node* newNode = new Node();
    newNode->val = key;
    newNode->next = NULL;

    if(*head_ref==NULL)
        *head_ref = newNode;

    else
    {
        Node *ptr = *head_ref;

        while(ptr->next!=NULL)
            ptr = ptr->next;

        ptr->next = newNode;

    }

}

void Display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }

    cout<<endl;
}

void reverseList(Node **head_ref)
{
    Node *prev = NULL;
    Node *curr = *head_ref;
    Node *next = NULL;

    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

    }

    *head_ref = prev;
}

int main(void)
{
    Node* head = NULL;
    append(3,&head);
    append(2,&head);
    append(1,&head);
    append(6,&head);
    append(7,&head);
    append(9,&head);

    Display(head);
    reverseList(&head);

    Display(head);

    return 0;
}
