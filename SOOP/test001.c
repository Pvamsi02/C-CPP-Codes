#include<stdio.h>
void matadd(int a[10][10],int b[10][10],int c[10][10],int n,int m)
{
    int i,j;
      for(i=0;i<n;i++)
        for(j=0;j<m;j++)
       c[i][j]=a[i][j]+b[i][j];
}
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m;
    printf("enter the number of rows");
    scanf("%d",&n);
    printf("enter number of coloumns");
    scanf("%d",&m);
    printf("enter the elements in the first matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements in the 2nd matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    matadd(a,b,c,n,m);
    printf("resultant matrix\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}