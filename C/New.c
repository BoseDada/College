#include <stdio.h>
#include <stdlib.h>

struct node1
{
    int value;
    struct node1 *next;
};
typedef struct node1 node;

node *head = NULL;

void Insert(int val)
{
    node *current;
    node *new = (node*)malloc(sizeof(node));
    new->value = val;
    new->next = NULL;
    if(head==NULL)
    {
        head = new;
    }
    else{
    current = head;
    while(current->next!=NULL)
    {
        current = current->next;
    }
    current->next=new;
    }
}

void traversal()
{
    node *current = head;

    while(current!=NULL)
    {
        printf("%d ",current->value);
        current = current->next;
    }
}

int main()
{
    int ele;
    for (int i=0; i<5; i++)
    {
        printf("Enter elements: ");
        scanf("%d",&ele);
        Insert(ele);
    }
    traversal();
    return 0;
}