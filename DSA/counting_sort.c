#include <stdio.h>
void countsort(int a[], int n)
{
    int x = n + 1;
    int output[x];
    int max = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    x = max + 1;
    int c[x];
    for (int i = 0; i <= max; i++)
        c[i] = 0;
    for (int i = 1; i < n; i++)
        c[a[i]]++;
    for (int i = 0; i <= max; i++)
        c[i] += c[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        output[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }
    for (int i = 0; i < n; i++)
        a[i] = output[i];
    for (int i = 0; i < n; ++i)
        printf("%d\n", a[i]);
}
int main()
{
    int a[] = {6, 2, 3, 7, 1, 9, 4, 8, 5};
    int n = sizeof(a) / sizeof(a[0]);
    countsort(a, n);
}