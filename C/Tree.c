#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;
struct node *insert(struct node *,int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

int main()
{
    int choice,n;
    do
    {
        printf("\n1.Insert 2.Inorder 3.Preorder 4.Postorder 5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the value: ");
                scanf("%d",&n);
                root=insert(root,n);
                break;
            case 2:
                printf("\nInorder Traversal is: ");
                inorder(root);
                break;
            case 3:
                printf("\nPreorder Traversal is: ");
                preorder(root);
                break;
            case 4:
                printf("\nPostorder Traversal is: ");
                postorder(root);
                break;
            case 5:
                exit(0);
        }
    }
    while(1);

    return 0;
}

struct node *insert(struct node *root,int n)
{
    struct node *temp,*cur,*prev;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        cur=root;
        while(cur!=NULL)
        {
            prev=cur;
            if(n<cur->data)
            cur=cur->left;
            else
            cur=cur->right;
        }
        if(n<prev->data)
        prev->left=temp;
        else
        prev->right=temp;
    }

    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}