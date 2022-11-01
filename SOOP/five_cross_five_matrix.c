#include <stdio.h>
int main()
{
    int a[5][5];
    int i, j;
    printf("Enter the elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    int sum = 0, temp = 0, p = 0, q = 0;
    int x = 0, y;
    i = 4, j = 4;
    for (i = 1; i <= 4; i++)
    {
        y = 0;
        for (j = 1; j <= 4; j++)
        {
            temp = a[x][y] + a[x][y + 1] + a[x + 1][y] + a[x + 1][y + 1];
            if (sum < temp)
            {
                sum = temp;
                p = x;
                q = y;
            }
            y++;
        }

        x++;
    }
    printf("The max sum is:%d\n", sum);
    printf("%d%d\n%d%d\n%d%d\n%d%d\n", p, q, p, q + 1, p + 1, q, p + 1, q + 1);
    return 0;
}
// 1 9 3 2 1
// 8 5 3 6 1
// 7 1 2 4 5 
// 3 2 8 0 1
// 9 6 4 3 2
