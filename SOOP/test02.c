#include<stdio.h>
int main( )
{

int n,f1=0,f2=1,sum=0; 
scanf( "%d", &n);
printf("%d\n%d",f1,f2);
    for (int i = 0; i < n-2 ; i++)
    {
            sum=f1+f2;
            f1=f2;
            f2=sum;
            printf("\n%d",sum);                    
    }
return 0;
}