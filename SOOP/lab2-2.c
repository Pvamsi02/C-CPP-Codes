#include <stdio.h>
void insert(int a[15], int x, int n)
{
    int b;
    printf("Enter the element that should be inserted at %d:", x);
    scanf("%d", &b);
    for (int i = n; i >= x; i--)
        a[i] = a[i - 1];
    a[x - 1] = b;
}
int main()
{
    int a[15];
    int n, x, y;
    printf("Enter the number of elements to be entered:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the location of the elements to be inserted in:");
    scanf("%d", &x);
    insert(a, x, n);
    n++;
    printf("Enter the location of the elements to be inserted in:");
    scanf("%d", &y);
    insert(a, y, n);

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}