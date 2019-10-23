#include<stdio.h>
#include<stdlib.h>

struct node
{

int data;
struct node* right;
struct node* left;

};

struct node* New_Node(int key)
{

struct node* temp  = (struct node*)malloc(sizeof(struct node));

temp->data = key;
temp->left = NULL;
temp->right = NULL;

return temp;

}

void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->data); 
        inorder(root->right); 

    } 
} 

struct node* insert(struct node* node,int key)
{

if(node==NULL)
	return New_Node(key);
if(node->data > key || node->data == key)
	node->left = insert(node->left,key);
else if (node->data < key)
	node->right = insert(node->right,key);

return node;

}


int main()
{
struct node* root = NULL;

root = insert(root,9);
insert(root,4);
insert(root,3);
insert(root,1);
insert(root,8);
insert(root,5);
insert(root,2);

inorder(root);

return 0;
}
