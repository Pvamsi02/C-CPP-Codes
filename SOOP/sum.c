#include<stdio.h>
int sum(int *a,int *b)
{
    int tot;
    tot=*a+*b;
    return tot;
}
void main()
{
    int a,b,tot;
    int *pa=&a;
    int *pb=&b;
    printf("enter two numbers:\n");
    scanf("%d",pa);
    scanf("%d",pb);
    //88printf("%u\t%u",pa,pb);
    tot=sum(pa,pb);
    printf("\ntotal=%d",tot);
   // printf("\n%u\t%u",pa,pb);
    printf("\ncurrent time is %s",__LINE__);
}