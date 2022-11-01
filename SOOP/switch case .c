#include<stdio.h>
int main()
{
    char input;
    printf("\nEnter a charecter i.e the 1st letter of the week\n");
    printf("if there are two days of the week starts with the same then the small letter is 1st coming day of the week from sunday to the saturday\n");
    printf("and the capital letter for the next day.\n");
    scanf("%c",&input);
    switch (input)
    {
        case 's':
        printf("It is sunday.....");
        break;
        case 'm':
        printf("It is monday.....");
        break;
        case 't':
        printf("It is tuesday.....");
        break;
        case 'w':
        printf("It is wednesday.....");
        break;
        case 'T':
        printf("It is thursday.....");
        break;
        case 'f':
        printf("It is friday.....");
        break;
        case 'S':
        printf("It is saturday.....");
        break;
        default:
        printf("wrong input");
    }
        
    return 0;
}