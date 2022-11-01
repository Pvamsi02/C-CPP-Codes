#include <stdio.h>
int main()
{
    int a[100], n, i, j, position, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Numbers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);
//     int b[n],c[n];
//     int k=0,l=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>=0)
//         {
//             b[k]=a[i];
//             k++;
//         }

//         else
//         {
//             c[l]=a[i];
//             l++;
//         }
//     }
//     int p,t;
//     for(i=0;i<k;i++)
//     {
//         p=i;
//         for(j=i+1;j<k;j++)
//         {
//         if(b[p]>b[j])
//             p=j;
//         }
//         if(p!=i)
//         {
//             t=b[i];
//             b[i]=b[p];
//             b[p]=t;
//         }
//     }
//     for(i=0;i<l;i++)
//     {
//         p=i;
//         for(j=i+1;j<l;j++)
//         {
//         if(c[p]<c[j])
//             p=j;
//         }
//         if(p!=i)
//         {
//             t=c[i];
//             c[i]=c[p];
//             c[p]=t;
//         }
//     }
//     for(i=0;i<l;i++)
//     printf("%d\n",c[i]);
//     for(i=0;i<k;i++)
//     printf("%d\n",b[i]);
//     return 0;
// }