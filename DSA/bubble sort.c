#include<stdio.h>
int main()
{
    int n,a[20],i,j,k;
    // printf("enter array:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        // printf("\n a[%d]number=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    printf("\n element a[%d] number =%d",i,a[i]);
    return 0;
}