#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0,i=0,l=0,c=0,j,pr,qw,rem=0;
    char s[200],temp;
    scanf("%d",&n);
    while(n!=0)                          
    {
        s[i]=n%10;
        n=n/10;
        l++;
        i++;
    }

    for(c=0;c<l;c++)
    {
        for(j=1;j<l;j++)
        {
            temp=s[j-1];
            s[j-1]=s[j];
            s[j]=temp;
        }
for(i=l-1;i>=0;i--)
{
    rem=rem*10+s[i];
}

    for(pr=2;pr<rem;pr++)
    {
    if (rem%pr==0)
    {
        qw=1;
    }
    }
}
    if(qw==1)
        printf("Not circular prime");
    if (qw==2)
        printf("Circular prime");
}
