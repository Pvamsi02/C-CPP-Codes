#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    char base[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char s[26][t];
    char key[26][t];
    for(i=0;i<t;i++)
    {
        scanf("%s  %s",&s[0][i],&key[0][i]);
    }
    
    for(i=0;i<t;i++)
    {
        for(int j=1;j<key.length;j++)
        {
            char t=key[0][i];
            if (key[j][i]==key[j+1][i])
            key[j][i].remove;
        }
        
    }
    for(i=0;i<t;i++)
    {

    }
}