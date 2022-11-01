#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int key, x;
    for (i = 0; i < n; i = i + 2)
    {
        key = a[i];
        x = i - 2;
        while (x >= 0 && a[x] > key)
        {
            a[x + 2] = a[x];
            x -= 2;
        }
        a[x + 2] = key;
    }
    for (i = 1; i < n; i = i + 2)
    {
        key = a[i];
        x = i - 2;
        while (x >= 0 && a[x] > key)
        {
            a[x + 2] = a[x];
            x -= 2;
        }
        a[x + 2] = key;
    }
    if(n%2==0){
    for (i = n-1; i >=0; i--)
        printf("%d\n", a[i]);
    }
    else{
        i
    }
    return 0;
}