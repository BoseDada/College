#include <stdio.h>

int main()
{
    int A[10];
    int top=-1;
    int ch=0;
    while (ch < 4)
    {
        printf("Enter choice for Insertion(1), Deletion(2), Display(3), Exit(4): ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: 
                    if (top == 9)
                    {
                        printf("\nStack overflow");
                        break;
                    }
                    else
                    {
                        int element;
                        printf("Enter element to insert: ");
                        scanf("%d",&element);
                        top++;
                        A[top]=element;
                    }
                    break;
            case 2: if (top == -1)
                    {
                        printf("\nStack Underflow\n");
                        break;
                    }
                    else
                    {
                        top--;
                    }
                    break;
            case 3: if (top == -1)
                    {
                        printf("\nNo elements\n");
                        break;
                    }
                    else
                    {
                        for (int i=0;i<=top;i++)
                        {
                            printf("%d \n",A[i]);
                        }
                    }
                    break;
            case 4: break;
            default: printf("\nInvalid choice: \n");

        }
    }
    return 0;
}