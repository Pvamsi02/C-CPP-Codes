#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the n square matrix:");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    int m[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    printf("The zeroth diagnol of the matrix is: ");
    for (i = 0; i < n; i++)
        printf("%d ", m[i][i]);
    return 0;
}