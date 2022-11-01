#include <stdio.h>
int main()
{
    int k, d, i, c = 0;
    printf("Enter the value of k:");
    scanf("%d", &k);
    int t = k;
    printf("Enter the value of d:");
    scanf("%d", &d);
    int n = 0, p = 1,f=0, pos[100];
    while (k != 0)
    {
        int r = k % 10;
        if (r == d)
        {
            f = 1;
            c++;
            pos[n] = p;
            n++;
        }
        k /= 10;
        p *= 10;
    }
    if (f)
    {
        printf("\nThere is digit %d in %d", d, t);
        printf("\nThe number of times %d occured in %d is %d", d, t, c);
        printf("\nThe position's in which the digit %d occured is: ", d);
        for (int j = 0; j < n; j++)
            printf("%d ", pos[j]);
    }
    else
    {
        printf("There is no digit of %d in %d", d, t);
    }
}