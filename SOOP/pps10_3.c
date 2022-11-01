/*#include<stdio.h>
void getarray(int n, int a[n])
{
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void searchelement(int x,int n,int *a)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if (*a==x)
        {
            c++;
            printf("The element is found in the position = %d", i);
            break;
        }
        else if (*a!=n)
        a++;
    }
    if (c==0)
        printf("Unavilable!");
}
void main()
{
    int n,x;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    getarray(n,a);
    printf("Please enter the number to be searched:");
    scanf("%d",&x);
    void (*search)(int,int,int*);
    search= &searchelement;
    (*search)(x,n,a);
}
#include<stdio.h>
void fun(int *a,int n,int l)
{
    int i,c=-1;
    for(i=0;i<l;i++)
    {
        if (*a==n)
        {
            c=1;
            printf("index of %d is %d\n",n,i);
            break;
        }
        else if (*a!=n)
        a++;
    }
    if(c==-1)
    printf("Unavailable");
}

int main()
{
    int i,n,l;
    printf("enter the lenght of array\n");
    scanf("%d",&l);
    int array[l];
    for(i=0;i<l;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element to find its position");
    scanf("%d",&n);
    void (*ptr_fun)(int *a,int n,int l)=&fun;
    (*ptr_fun)(array,n,l);
}*/
#include<stdio.h>
int join_array(int *a,int *b,int n,int m)
{
     int sorted[n+m],i;
     for(i=0;i<n;i++)
     {
         sorted[i]=*a;
         a++;
     }
     for(i=n;i<n+m;i++)
     {
         sorted[i]=*b;
         b++;
     }
    for(i=0;i<n+m;i++)
    {
        printf("%d ",sorted[i]);
    }

}
int main()
{
    int n,i,j,positive=0,negative=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if (array[i]>0)
        positive++;
        else 
        negative++;
    }
    int p[positive],neg[negative];
    int *ptr=array;
    int *ptr_p=p;
    int *ptr_n=neg;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)>0)
        {
            *ptr_p=*(ptr+i);
            ptr_p++;
        }
        else
        {
            *ptr_n=*(ptr+i);
            ptr_n++;
        }
    }

    join_array(neg,p,negative,positive);
}