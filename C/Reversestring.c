#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int length,ch;
    printf("Enter string: ");
    scanf("%s",str);
    length=strlen(str)-1;
    
    for (int i=0;i<strlen(str)/2;i++)
    {
        ch=str[i];
        str[i]=str[length];
        str[length--]=ch;
    }
    printf("Reversed string: %s",str);
    return 0;
}