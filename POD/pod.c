#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s1 = 0, s2 = 0;
    while (n != 0)
    {
        s1 = s1 + n % 10;
        n /= 10;
        s2 = s2 + n % 10;
        n /= 10;
    }
    int t = s1 - s2;
    if (t > 0)
        printf("%d", t);
    else
        printf("%d", s2 - s1);
    return 0;
}