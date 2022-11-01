#include <stdio.h>
int main()
{
    int n, i, j, t;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
    {

        // loop for column of matrix
        for (int j = 0; j < n; j++)
        {

            // loop for comparison and swapping
            for (int k = 0; k < n - j; k++)
            {
                if (a[i][k] > a[i][k + 1])
                {

                    // swapping of elements
                    int t = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = t;
                }
            }
        }
    }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
    }