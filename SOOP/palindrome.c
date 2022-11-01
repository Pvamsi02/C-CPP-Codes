#include<stdio.h>
void main()
{
    int m,n, rev=0,a;
    printf("Enter the number:"); 
    scanf("%d",&n);
    a=n; 
    while(n!=0)
    {
        m=n%10;
        rev = (rev*10) + m;
        n=n/10;
    }
    if(a==rev)
    printf("The Entered number is palindrome");
    else
    printf("The Entered number is not a palindrome");
}