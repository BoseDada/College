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
struct node *delete(struct node *,int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

int main()
{
    int ch,n;
    do
    {
        printf("1.Insert 2.Delete 3.Inorder 4.Preorder 5.Postorder 6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the number to be inserted:");
            scanf("%d",&n);
            root=insert(root,n);
            break;
            case 2:printf("\nEnter the number to be deleted:");
            scanf("%d",&n);
            root=delete(root,n);
            break;
            case 3:inorder(root);
            break;
            case 4:preorder(root);
            break;
            case 5:postorder(root);
            break;
            case 6:exit(0);
        }
    }
    while(ch!=6);
    return 0;

}

struct node *insert(struct node *root,int n)
{
    if(root==NULL)
    {   
        root=(struct node *)malloc(sizeof(struct node));
        root->data=n;
        root->left=NULL;
        root->right=NULL;
    }
    else if(n<root->data)
    root->left=insert(root->left,n);
    else if(n>root->data)
    root->right=insert(root->right,n);
    return root;
}
struct node *delete(struct node *root,int n)
{
    struct node *temp;
    if(root==NULL)
    {
    printf("Element not found");
    return root;
    }
    else if(n<root->data)
    root->left=delete(root->left,n);
    else if(n>root->data)
    root->right=delete(root->right,n);
    else
    {
        if(root->left==NULL)
        {
            temp=root->right;
            free(root);
            return temp;
        }

        else if(root->right==NULL)
        {
            temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            temp=root->right;
            while(temp->left!=NULL)
            temp=temp->left;
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
        }
    }

    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d \n",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d \n",root->data);
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
        printf("%d \n",root->data);
    }
}