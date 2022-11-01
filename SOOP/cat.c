#include<stdio.h>
void fun(int *p)
{
    static int q=10;
    p=&q;
}
void main()
{
    int r=20;
    int* p=&r;
    fun(p);
    printf("%d", *p);
    getchar();
}