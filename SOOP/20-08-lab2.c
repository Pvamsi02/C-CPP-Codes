#include <stdio.h>
void delete (int a[15], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i+1 == x || i+1 == y)
            continue;
        printf("%d  ",a[i]);
    }
}
int main()
{
    int a[15];
    int n, x, y;
    printf("Enter the number of elements to be entered:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the location of the element to be deleted:");
    scanf("%d", &x);
    scanf("%d", &y);
    delete (a, x, y, n);
    return 0;
}