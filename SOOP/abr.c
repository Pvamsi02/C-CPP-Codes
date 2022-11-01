#include <stdio.h>
int main() 
{
    int n,a;
    printf("enter the number");
    scanf("%d",&n);
    a=n-67;
    if(a>0)
    {
        printf("the result is :%d",4*a);        
    }
    else if(a<0)
    {
        a=-a;
        printf("the result is :%d",4*a);
    }
    return 0;   
}