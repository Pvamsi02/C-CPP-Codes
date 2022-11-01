#include <stdio.h>
int main()
{
    int a[5][5];
    int i, j;
    printf("Enter the elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    int x = 0, y;
    i = 4, j = 4;
    int t, temp = 0;
    printf("Enter the sum required:");
    scanf("%d", &t);
    i = 4;
    x = 0;

    for (i = 1; i <= 4; i++)
    {
        y = 0;
        for (j = 1; j <= 4; j++)
        {
            temp = a[x][y] + a[x][y + 1] + a[x + 1][y] + a[x + 1][y + 1];
            if (temp == t)
            {
                printf("%d\t%d\n%d\t%d\n\n", a[x][y], a[x][y + 1], a[x + 1][y], a[x + 1][y + 1]);
            }
            y++;
        }

        x++;
    }
    return 0;
}