#include <stdio.h>
int long convert(int);
int main() {
    int n,a[100],i,flag,sum=0;
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=convert(a[i]);
        if(flag)
            sum+=a[i];
    }
    if(!sum)
        printf("Total sum = -1");
    else
        printf("Total sum = %d",sum);
        
    return 0;
}

int long convert(int n) 
{
    long long bin = 0;
    int rem, i = 1,temp,c=0;
    while (n!=0) 
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    temp=bin;
    while(temp!=0)
    {
        rem = temp%10;
        if(rem==1)
        {
            c++;
        }
        temp/=10;
    }
    if(c%2==0)
        return 1;
    else
        return 0;
}