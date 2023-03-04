#include <stdio.h>

void insertend(int A[],int N)
{
    int ins;
    printf("Insert element at the end: ");
    scanf("%d",&ins);
    N=N+1;
    A[N-1]=ins;
    printf("Insertion complete: \n");
    for (int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

}


void insertbeg(int A[],int N)
{
    int ins1;

    printf ("Insert element at the beginning: ");
    scanf("%d",&ins1);

    for (int i=N;i>=0;i--)
    {
        A[i+1]=A[i];
    }
    A[0]=ins1;
    N=N+1;
    for (int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

}


void insertmid(int A[],int N)
{
    int add,ins2;
    printf("Insert index of element: ");
    scanf("%d",&add);
    printf("Insert element in the given position: ");
    scanf("%d",&ins2);

    for (int i=N ; i>=add ; i--)
    {
        A[i+1]=A[i];
    }
    A[add]=ins2;
    N=N+1;
    for (int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

}

void deletelast (int A[], int N)
{
    N=N-1;
    for (int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

}

int main()
{
    int choice,A[10];
    for (int i=0;i<5;i++)
    {
        printf("Enter value for A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for (int i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nEnter choice: ");
    scanf ("%d",&choice);
    switch(choice)
    {
        case 1: insertend(A,5);
                break;
        case 2: insertbeg(A,5);
                break;
        case 3: insertmid(A,5);
                break;         
        case 4: deletelast(A,5);
                break;       
        default: printf("Invalid Choice");        
        
    }        

    return 0;
}