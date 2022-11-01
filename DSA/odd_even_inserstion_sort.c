// #include <stdio.h>
// int main()
// {
//     int n, i, j = 0, k = 0, t1, t2;
//     scanf("%d", &n);
//     int a[n], b[n];
//     for (i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             scanf("%d", &a[j]);
//             j++;
//         }
//         else
//         {
//             scanf("%d", &b[k]);
//             k++;
//         }
//     }

//     int key, x;
//     for (i = 0; i < j; i=i+2)
//     {
//         key = a[i];
//         x = i - 1;
//         while (x >= 0 && a[x] > key)
//         {
//             a[x + 1] = a[x];
//             x -= 1;
//         }
//         a[x + 1] = key;

//     }
//     for (i = 0; i < k; i=i+2)
//     {
//         key = b[i];
//         x = i - 1;
//         while (x >= 0 && b[x] > key)
//         {
//             b[x + 1] = b[x];
//             x -= 1;
//         }
//         b[x + 1] = key;
//     }

//     j = 0, k = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", a[j]);
//             j++;
//         }
//         else
//         {
//             printf("%d\n", b[k]);
//             k++;
//         }
//     }
//     return 0;
// }
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
        while (x >= 0 && a[x] < key)
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
        while (x >= 0 && a[x] < key)
        {
            a[x + 2] = a[x];
            x -= 2;
        }
        a[x + 2] = key;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
