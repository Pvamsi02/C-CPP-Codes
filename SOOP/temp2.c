#include<stdio.h>
void main()
{
    int age;
    scanf("%d",&age);
    switch (age)
    {
        case 0 ... 5:
        printf("baby");
        break;
        case 6 ... 12:
        printf("kid");
        break;
        case 13 ... 19:
        printf("teen");
        break;
        case 20 ... 40:
        printf("adult");
        break;
        default:
        printf("old");
    }
}