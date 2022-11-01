#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i=i+2)
    {
        min=i;
        for(j=i;j<n;j=j+2)
        {
            if(a[j]<a[min])
            min=j;
        }
        if (min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=1;i<n;i=i+2)
    {
        min=i;
        for(j=i;j<n;j=j+2)
        {
            if(a[j]>a[min]) 
            min=j;
        }
        if (min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    
}