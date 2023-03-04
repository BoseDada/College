#include <stdio.h>

void TOH(int disk,char A,char B,char C)
{
    if (disk==1)
    {
        printf("\nMove disk 1 from rod %c to rod %c",A,C);
        return;
    }
    TOH(disk-1,A,C,B);
    printf("\nMove disk %d from rod %c to rod %c",disk,A,C);
    TOH(disk-1,B,A,C);
}

int main()
{
    int disk;
    printf("Enter no. of disks: ");
    scanf("%d",&disk);
    
    TOH(disk,'A','B','C');

    return 0;
}