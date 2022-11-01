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
        for (j = 0; j < n - 1 - i; j++)
            if (a[j + 1] < a[j])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
    printf("Sorted Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}