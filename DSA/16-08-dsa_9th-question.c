#include<stdio.h>
#include<string.h>
int main()
{
    int k,d,i=0,c=0;
    printf("Enter the value of k:");
    scanf("%d", &k);
    int t = k;
    printf("Enter the value of d:");
    scanf("%d", &d);
    while(k!=0)
    {
        k=k/10;
        i++;
    }
    int a[i],b[i];
    i=0;
    int j=0,p=1;
    while(t>0)
    {
        a[i]=t%10;
        if(a[i]==d){
            c++;
            b[j]=i;
            j++;
        }
        p*=10;
        t=t/10;
        i++;
    }
    if(c!=0)
    {
        printf("D occurs in k\n");
        printf("d occurs %d times in k\n",c);
        while(i<0)
        {
            printf("%d\t",b[i]);
            i--;
        }
    }
    return 0;
}