#include<stdio.h>
#include<string.h>
void main()
{
    char name [50];
    int i,j,p=0,q=0,length,count=0;
    for (i=0;i<5;i++)
    {
        printf("Enter a name:");
        scanf("%s",&name);
        length = strlen(name);
    
        for(j=0;j < length ;j++)
        {
            if(name[j] != name[length-j-1])
            {
                count =1;
            }
        }
        if (count) 
        {
            printf("%s is not a palindrome name\n\n", name);
            q++;
            count=0;
        }    
        else 
        {
            printf("%s is a palindrome name\n\n", name);
            p++;
            
        }
    }
    printf("No.of pallindrome names are:%d\n",p);
    printf("No.of non palindrome names are:%d",q);
}
