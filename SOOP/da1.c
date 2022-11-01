#include<stdio.h>
#include<string.h>
struct internet
{
    char ip[16];
    char name[20];
};
void main()
{
    int n,p,i,j;
    struct internet s[20];
    printf("Enter no of IP addresses");
    scanf("%d",&n);
    for(i=0;i < n;i++)
    {
        printf("Enter IP address %d ",i+1);
        scanf("%s",s[i].ip);
        printf("Enter name %d ",i+1);
        scanf("%s",s[i].name);
        p=0;
        j=0;
        while(p!=2)
        {
            j++;
            if(s[i].ip[j]=='.')
            p++;
        }
        s[i].ip[j]='\0';
    }
    for(i=0;i < n-1;i++)
    for(j=i+1;j < n;j++)
    if(strcmp(s[i].ip,s[j].ip)==0)
    printf("Machines %s and %s are on the same local network",s[i].name,s[j].name);
}