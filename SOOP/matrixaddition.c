#include<stdio.h>
void addmatrix(int n, int c[n][n])
{
    int j,k;
    int a[n][n];
    int b[n][n];
    printf("Enter the 1st matrix elemnts:\n");
    for (j=0;j<n;j++)
        for(k=0;k<n;k++)
            scanf("%d",&a[j][k]);
    printf("Enter the 2nd matrix elemnts:\n");
    for (j=0;j<n;j++)
        for(k=0;k<n;k++)
            scanf("%d",&b[j][k]);
    for (j=0;j<n;j++)
        for(k=0;k<n;k++)
            c[j][k]=a[j][k]+b[j][k];
}

void main()
{
    int j,k,n;
    printf("Enter the nXn number:");
    scanf("%d",&n);
    int c[n][n];
    addmatrix(n,c);
    printf("the addition of two matrix is:\n");
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            printf("%d\t",c[j][k]);
        }
        printf("\n");
    }
}
