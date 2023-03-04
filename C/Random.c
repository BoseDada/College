#include <stdio.h>
#include <string.h>

struct door
    {
        int height;
        int width;
        int thickness;
        char material[20];
        char company[40];
    };

int main()
{
    int area;
    struct door darvaza;

    printf("Enter height: ");
    scanf("%d",&darvaza.height);
    printf("Enter width: ");
    scanf("%d",&darvaza.width);
    printf("Enter thickness: ");
    scanf("%d",&darvaza.thickness);

    area = darvaza.height * darvaza.width;
    printf("Area of door is: %d",area);

    printf("\nEnter material: ");
    scanf("%s",darvaza.material);
    printf("Enter company: ");
    scanf("%s",darvaza.company);

    printf("%s from %s is a very good choice!",darvaza.material,darvaza.company);
    return 0;
}