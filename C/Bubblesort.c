#include <stdio.h>
void bubblesort(int A[]);
int main ()
{
    int A[10];
    char ch;
    for (int i=0;i<5;i++)
    {
        printf("Enter element for A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for (int i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }

    printf("\nDo you want to sort the array? [Enter <Y> for Yes or <N> for No]: ");
    scanf("%s",&ch);
    if (ch =='Y')
    {
        bubblesort(A);
    }
    else if (ch == 'N')
    {
        printf("Your final array is: \n");
        for (int i=0;i<5;i++)
        {
            printf("%d ",A[i]);
        }
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}

void bubblesort(int A[])
{
    int temp;
    for (int m=0;m<4;m++)
    {
        for (int n=0;n<4-m;n++)
        {
            if (A[n]>A[n+1])
            {
                temp=A[n];
                A[n]=A[n+1];
                A[n+1]=temp;
            }
        }
    }
    printf("Your final Array is: \n");
    for (int i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }

}