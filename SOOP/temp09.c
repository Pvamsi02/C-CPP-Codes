#include <stdio.h>
int fun()
{
    static int num=40;
    return num--;
}
int main()
{
    for(int i=1;fun();i++)
        printf("%d\n",fun());
    return 0;
}