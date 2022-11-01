#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char rno[20];
    scanf("%s", &rno);
    if (strlen(rno) != 9)
    {
        printf("NO");
        exit(0);
    }
    int i;
    for (i = 0; i < 9; i++)
    {
        if ((i >= 0 && i <= 1) && (rno[i] < 48 || rno[i] > 57))
        {
            printf("NO");
            exit(0);
        }
        else if ((i >= 2 && i <= 4) && (rno[i] < 'A' || rno[i] > 'Z'))
        {
            printf("NO");
            exit(0);
        }
        else if (i >= 5 && (rno[i] < 48 || rno[i] > 57))
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES\n");
    i = (rno[0] - '0' )* 10 + (rno[1] - '0') + 2004;
    printf("%d", i);
}