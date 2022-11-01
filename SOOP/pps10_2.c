#include<stdio.h>
void getarray(int n, int a[n],int b[n]);
int swap(int *a,int *b,int n);
int main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],b[n];
    getarray(n,a,b);
    swap(a,b,n);
    printf("marks of course 1 after swapping\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }  
    printf("marks of course 2 after swapping\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(b+i));
    } 
}
void getarray(int n, int a[n],int b[n])
{
    printf("Enter the marks of the course 1:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the marks of the course 2:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
}
int swap(int *a,int *b,int n)
{
    int t,k,i;
    for(i=0;i<n;i++)
    {
        t=*(a);
        k=*(b);
        *a=k;
        *b=t;
        a++;
        b++;
    }
}