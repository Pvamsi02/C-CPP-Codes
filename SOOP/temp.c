#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    int i,n;
    printf("enter the string:");
    scanf("%s",&name);
    n=strlen(name);
    for(i=0;i<n;i++)
    {
        if (name[i]=='/')
        {
            printf("\n");
            continue;
        }
        else
        printf("%c%c%c\n",name[i],name[i],name[i]);
    }
}
