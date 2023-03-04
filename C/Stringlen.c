#include <stdio.h>

int main()
{
    char Arr[100];
    int length=0;
    printf ("Enter string: ");
    scanf("%s",Arr);

    for (int i=0;Arr[i] != '\0';i++)
    {
        length++;
    }
    printf ("Length of string is: %d",length);
    
    return 0;
}