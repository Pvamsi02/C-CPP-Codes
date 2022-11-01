#include<stdio.h>
void getarray(int n, int a[n])
{
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void insert(int x,int y,int n,int a[])
{
    int t=y-1;
    int b[n+1];
    for(int i=0;i<=n;i++)
    {
        if(i<t)
            b[i]=a[i];
        else if(i==t)
            b[i]=x;
        else if(i>t)
            b[i]=a[i-1];
    }
    printf("Array elements are:");
    for(int i=0;i<n+1;i++)
        printf("  %d",b[i]);
}
void main()
{
    int n,x,y;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    getarray(n,a);
    printf("Enter the element to be inserted:");
    scanf("%d",&x);
    printf("Enter the position where the number %d should be inserted.",x);
    scanf("%d",&y);
    insert(x,y,n,a);
}