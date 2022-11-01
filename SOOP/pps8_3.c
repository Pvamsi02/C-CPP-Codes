#include<stdio.h>
#include<conio.h>
void getarray(int n, int a[n])
{
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void insert(int x,int n,int a[])
{
    int temp;
    int b[n+1];
    b[0]=x;
    for(int i=1;i<=n;i++)
    {
        b[i]=a[i-1];
    }
    printf("Array elements are:");
    for(int i=0;i<n+1;i++)
        printf("  %d",b[i]);
}
void main()
{
    int n,x;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    getarray(n,a);
    puts("Enter the element to be inserted:");
    scanf("%d",&x);
    insert(x,n,a);
}