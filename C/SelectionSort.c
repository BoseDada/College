#include <stdio.h>

void selsort(int A[], int n)
{
    int temp;
    for (int i=0; i<n-1 ;i++)
    {
        int min = i;
        for (int j=i+1; j<n ;j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }

        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
    printf("\nSorted List: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{f
    int A[10],n;

    printf("Enter no. of elements in array(max 10): ");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf("Enter value for A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }

    selsort(A,n);
    return 0;
}