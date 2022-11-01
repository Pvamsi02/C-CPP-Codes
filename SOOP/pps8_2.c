#include<stdio.h>
void getarray(int n, int a[n])
{
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void main()
{
    int n,x,i,j;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    int d[1];
    getarray(n,a);
    if(n%2==0)
    {
        x=n/2;
        for(i=0;i<n;i++)
        {
            if(i<x)
                b[i]=a[i];
            else
                c[i]=a[i];
        }
        for(i=x-1;i>=0;i--)
        printf("%d ",b[i]);
        for(i=n-1;i>=x;i--)
        printf("%d ",c[i]);
    }
    else
    {
        x=n/2;
        for(i=0;i<n;i++)
        {
            if(i<x)
                b[i]=a[i];
            else if (i==x)
                d[0]=a[i];
            else if(i>x)
                c[i]=a[i];
        }
        for(i=x-1;i>=0;i--)
        printf("%d ",b[i]);
        printf("%d ",d[0]);
        for(i=n-1;i>x;i--)
        printf("%d ",c[i]);
    }    
}