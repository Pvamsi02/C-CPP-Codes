#include<stdio.h>
void main()
{
    int n,rem,i=1;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n],bin[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++)
    {
        i=1;
        bin[i]=0;
        while (a[j]!=0)   
        {
        rem = a[j] % 2;
        a[j] /= 2;
        bin[i] += rem * i;
        i *= 10;
        }
        printf("%d\n",bin[i]);
    }
} 