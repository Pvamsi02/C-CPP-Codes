#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,count;
    char a[40],re[40];
    for(i=0;i<4;i++)
    {
        printf("Enter the name of %d child:",i+1);
        scanf("%s",&a[i]);
        printf("%s",a[i]);
        re[i]=strrev(a[i]);       
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==re[i])
        {
            count=count+1;
        }
    }
    printf("Number of palindrome names are:%d",count);
    getch;
}