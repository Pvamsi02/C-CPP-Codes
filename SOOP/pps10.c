#include <stdio.h>
void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
void segregateElements(int arr[], int n)
{
    int i =0,j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)//non-zero
        {
            if (i != j)
            {
                swap(&arr[i],&arr[j]);
            }
            j++;
        }
    }
}
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int arr_size = 9;ARRAY_SIZE(arr);
    int i = 0;
    segregateElements(arr, arr_size);
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}






/*#include<stdio.h>
void getarray(int n, int a[n]);
void swap(int *s1, int *s2);
void main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    getarray(n,a);
    int *ptr;
    ptr=a;
    int i =0,j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != j)
            {
                swap(&a[i],&a[j]);
            }
            j++;
        }
    }
    printf("Printing the output\n");
    for(i=0;i<n;i++)
    {
    printf("%d  ",*ptr);
    ptr++;
    }
}
void getarray(int n, int a[n])
{

    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;

}*/