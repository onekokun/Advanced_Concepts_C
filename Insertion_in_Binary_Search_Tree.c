#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node* right;
struct node* left;

};

struct node* NewElement(int key)
{
struct node* temp = (struct node*)malloc(sizeof(struct node));

temp->data = key;
temp->left = NULL;
temp->right = NULL;

}

struct node* insert(struct node* node,int key)
{
 if (node == NULL)
    return NewElement(key);

if (node->data > key || node->data == key)
   node->left =  insert(node->left,key);

else if (node->data < key)
    node->right = insert(node->right,key);

    return node;

}


int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);



    return 0;
}

