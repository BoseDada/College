#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertele(int val)
{
    struct node *newnode, *p;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        newnode->prev = head;
    }
    else
    {
        p = head->prev;
        p->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = p;
    }
    
}

void printlist()
{
    struct node *p = head;
    if (head == NULL) printf("\nList is empty\n");
    else
    {
        do
        {
            printf("%d ", p->data);
            p = p->next;
        }
        while (p != head);
    }
    
}
                                         
int main()                                                
{
    int n;
    int ele;
    int choice = 0;
    int newele1;
    int newele2;
    int pos;
    int srchele;
    printf("Enter number of nodes (max 8): ");
    scanf("%d",&n);

    if (n > 8) printf("More than 8 nodes not allowed!");

    else
    {
        for (int i=0; i<n ; i++)
        {
            printf("Enter elements: ");
            scanf("%d",&ele);
            insertele(ele);
        }
        printlist();
    }
    return 0;
}
