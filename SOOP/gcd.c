#include <stdio.h>
int remain(int a, int b)
{
    int t = a % b;
    if (t == 0)
        return b;
    else
        return remain(b, t);
}
int main()
{
    int r, n, i;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++)
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] > b[i])
            r = remain(a[i], b[i]);
        // else
        //     r = remain(b[i], a[i]);
        printf("%d\n", remain(c[i], r));
    }
    return 0;
}