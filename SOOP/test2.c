#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value of n for nXn square matrix:");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter the elements in the first %dx%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }

    }
    printf("Enter the elements in the second %dx%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("result of matrix addition:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}