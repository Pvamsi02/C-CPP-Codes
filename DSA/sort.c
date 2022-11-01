#include <stdio.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void selection_sort(int a[], int n)
{
    int pos, i, j;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
                pos = j;
        }
        if (pos != i)
            swap(&a[i], &a[pos]);
    }
}
void insertion_sort(int b[], int n)
{
    int key, i, j;
    for (i = 1; i < n; i++)
    {
        key = b[i];
        j = i - 1;
        while (j >= 0 && b[j] > key)
        {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = key;
    }
}
void bubble_sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j + 1] < a[j])
                swap(&a[j + 1], &a[j]);
}
void printelements(int a[], int n)
{
    printf("\nSorted elements:");
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
int main()
{
    int n, a[n], b[n];
    printf("Enter the n value:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    bubble_sort(a, n);
    // selection_sort(a, n);
    // insertion_sort(b, n);
    printelements(a, n);
    // printelements(b, n);
}