#include <stdio.h>

void insort(int A[], int n)
{
    int min;
    for (int i=1; i<n; i++)
    {
        min = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > min)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = min;
    }
    printf("\nSorted List: \n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{
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

    insort(A,n);
    return 0;
}