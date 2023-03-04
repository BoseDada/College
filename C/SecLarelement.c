#include <stdio.h>

int main()
{
    int A[10];
    for (int i=0;i<5;i++)
    {
        printf("Enter elemnt for A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for (int i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
    int first = A[0];
    int second =A[0];

    for (int i=0;i<5;i++)
    {
        if (first <A[i])
        {
            second=first;
            first = A[i];
        }
        else if (A[i]>second && A[i] != first)
        {
            second=A[i];
        }
    }

    if (second == first)
    {
        printf("\nThere is no second largest element\n");
    }
    else 
    {
        printf("\nThe second largest element is: %d",second);
    }

    return 0;
}