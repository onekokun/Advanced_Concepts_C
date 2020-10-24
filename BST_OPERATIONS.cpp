#include<iostream>
using namespace std;

class TreeNode
{
    public:
        TreeNode()
        {

        }

        int val;
        TreeNode* left;
        TreeNode* right;
};

TreeNode* FindMin(TreeNode*);

TreeNode* NewNode(int data)
{
    TreeNode *newNode = new TreeNode();
    newNode->val = data;
    newNode->left = newNode->right = NULL;

    return newNode;
}

TreeNode* InsertNode(TreeNode* root, int key)
{
    if(root==NULL)
        root = NewNode(key);
    
    else if(key<root->val)
    {
        root->left = InsertNode(root->left,key);
    }

    else
    {
        root->right = InsertNode(root->right,key);
    }

    return root;
    
}

void inorder(TreeNode* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}

TreeNode* DeleteNode(TreeNode* root,int key)
{
    if(root == NULL)
        return NULL;

    else if(key<root->val)
    {
        root->left = DeleteNode(root->left,key);
    }
    else if(key>root->val)
    {
        root->right = DeleteNode(root->right,key);
    }
    else
    {
        //case 1: root has no child
        if(root->left == NULL && root->right ==NULL)
        {
            delete root;
            root = NULL;
        }

        //1 child (right)
        else if(root->left == NULL)
        {
            TreeNode* temp = root;
            root = root->right;
            delete temp;
        }

        else if(root->right == NULL)
        {
            TreeNode* temp = root;
            root = root->left;
            delete temp;
        }

        else
        {
            TreeNode* temp = FindMin(root->right);
            root->val = temp->val;
            //dlete the node of the right sub tree oof the current node having the same value as curr node
            root->right = DeleteNode(root->right,temp->val);
        }
        
    }

    return root;
}

TreeNode* FindMin(TreeNode* root)
{
    while(root->left!=NULL)
        root = root->left;

    return root;
    
}

int main(void)
{
    TreeNode* root = NULL;

    root = InsertNode(root,3);
    
    InsertNode(root,4);
    InsertNode(root,7);
    InsertNode(root,1);
    InsertNode(root,2);
    InsertNode(root,6);
    InsertNode(root,9);
    InsertNode(root,5);

    inorder(root);
    cout<<endl;

    DeleteNode(root,3);

    inorder(root);
    cout<<endl;
    
    return 0;
}
