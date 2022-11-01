#include<stdio.h>
void main()
{
    int m,n,k=0,dec=0,a;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        dec = dec+(m * 2^k);
        n=n/10;
        k++;
    }
    printf("\nThe Decimal equivalent is %d",dec);
}