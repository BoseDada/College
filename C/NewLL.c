#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertele(int val)
{
    struct node *new_node, *p;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val; 
    new_node->next = NULL;
    
    if(head == NULL) 
    {
        head = new_node;
    }
    else
    {
        p=head;
        while(p->next != NULL) 
        {
            p = p->next;
        }
        p->next = new_node;
    }
}

void printlist()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}

void insertbeg(int val)
{
    struct node *newnode1,*p;
    newnode1 = (struct node*)malloc(sizeof(struct node));
    newnode1->data = val;
    newnode1->next = head;

    head = newnode1;
    
}

void insertend(int val)
{
    struct node *newnode2, *p;
    newnode2 = (struct node*)malloc(sizeof(struct node));
    newnode2->data = val;
    newnode2->next = NULL;

    p=head;
    while(p->next != NULL) 
    {
        p = p->next;
    }
    if (p->next == NULL)
    {
        p->next = newnode2;
        newnode2->next = NULL;
    }

}

void insertpos(int val, int pos)
{
    struct node *newnode3, *ptr;
    newnode3 = (struct node*)malloc(sizeof(struct node));
    newnode3->data = val;
    newnode3->next = NULL;
    
    ptr = head;
    for (int i=0; i<pos-2; i++)
    {
        ptr = ptr->next;
    }
    newnode3->next = ptr->next;
    ptr->next = newnode3;

}

void delpos(int pos)
{
    struct node *p;
    p = head;
    if (head == NULL)
    {
        printf("List underflow!");
        return;
    }
    else 
    {
        if (p->next == NULL && pos == 1)
        {
            head = NULL;
            return;
        }
        else
        {
            for (int i=0; i<pos-2; i++)
            {
                p = p->next;
            }
            p->next = p->next->next;
        }
    }
}

/*void srchelement(int srchele)
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        if (p->data == srchele)
        {
            printf ("Element found!");
        }
        else
        {
            printf("Element not found!");
        }
    }
}
*/
int main()
{
    int n;
    int ele;
    int newele1;
    int newele2;
    int newele3;
    int pos;
    int srchele;
    printf("Enter number of nodes(max 8): ");
    scanf("%d",&n);

    if (n > 8)
    {
        printf("Nodes cannot be created more than 8");
    }

    else
    {
        for (int i=0; i<n ; i++)
        {
            printf("Enter elements: ");
            scanf("%d",&ele);
            insertele(ele);
        }

        int choice;
        while (choice < 7)
        {
            printf("\n\nEnter choice for \nInsert at beginning(1) \nInsertion at end(2) \nInsert at given position(3) \nDelete any element(4) \nSearch element(5) \nDisplay List(6) \nExit(7) \nEnter choice: ");
            scanf("%d",&choice);
            switch (choice)
            {
                case 1: printf("Enter element: ");
                        scanf("%d",&newele1);
                        insertbeg(newele1);
                        break;

                case 2: printf("Enter element: ");
                        scanf("%d",&newele2);
                        insertend(newele2);
                        break;

                case 3: printf ("Enter element: ");
                        scanf("%d",&newele3);
                        printf("Enter position: ");
                        scanf("%d",&pos);
                        insertpos(newele3,pos);
                        break;

                case 4: printf("Enter position: ");
                        scanf("%d",&pos);
                        delpos(pos);
                        break;     

                /*case 5: printf("Enter element to search: ");
                        scanf("%d",&srchele);
                        srchelement(srchele);
                        break;*/

                case 6: printlist();
                        break;

                case 7: break;
                default: printf("Invalid choice!");    
            }
        }
    }

    return 0;
}