#include <stdio.h>
void linearsrch(int A[], int N);
void binarysrch(int A[], int N);
int main()
{
    int A[10],N,ch;
    for (int i=0; i<6; i++)
    {
        printf("Enter value for A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for (int i=0; i<6; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nEnter choice for search (1 for linear)(2 for binary): ");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1: linearsrch(A,6);
                break;
        case 2: binarysrch (A,6);
                break;
        default: printf("Invalid choice");                
    }
    return 0;

}

void linearsrch(int A[], int N)
{
    int el;
    printf("Enter element to search: ");
    scanf("%d",&el);
    int found=0,index;
    for (int i=0; i<N; i++)
    {
        if (A[i] == el)
        {
            
            found=1;//printf("The position is : %d",i);
            index=i;
            break;
        }
        else
        {
            found=0;//printf("Element not found");
        }
    }
    if (found)
    {
        printf("Element found at position: %d",index);
    }
    else
    {
        printf("Element not found");
    }
}

void binarysrch(int A[], int N)
{
    int el1,lb,ub,mid;
    printf("Enter element to search: ");
    scanf("%d",&el1);

    lb=0;
    ub= N-1;
    mid=(lb+ub)/2;
    int location = -1;

    while (lb<=ub)
    {
        if (A[mid]==el1)
        {
            printf("Location is: %d",mid);
            location=mid;
            break;
        }
        else if (A[mid]>el1)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
        
        mid = (lb+ub)/2;
    }
    if (location == -1)
    {
        printf("Element not found");
    }


}