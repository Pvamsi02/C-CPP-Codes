#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i++;
    } 
    printf("The sum is:%d",sum);
    return 0;
}