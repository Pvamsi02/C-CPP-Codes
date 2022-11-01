#include<stdio.h>
int main()
{
    int n,i;
    int max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        max=0;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                max=a[i];
            else
                break;
        }
        if(max!=0)
            printf("%d ",max);
    }
    
    printf("%d",a[n-1]);
    return 0;
}