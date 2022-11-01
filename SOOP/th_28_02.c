#include<stdio.h>
#include<conio.h>
void main()
{
    int number[3],i,n;
   
 
    printf("Enter elements in array(3 elements) : ");
    for(i=0; i<3; i++)
    {
        scanf("%d",&number[i]);
    }
    printf("hello\n");
    if (number[0]>number[1])
    {
        if (number[0]>number[2]){
            printf("Maximum element is:%d\n",number[0]);
            if(number[1]>number[2])
            printf("Minimum element is:%d\n",number[2]);
            else
            printf("minimum element is:%d\n",number[1]);
        }
        else if(number[0]<number[2])
        {
        printf("Maximum element is:%d\n",number[2]);
        printf("Minimum element is:%d\n",number[1]);
        }
    }
    else if(number[1]>number[0])
    {
        if (number[1]>number[2])
        {
        printf("Maximum element is:%d\n",number[1]);
        if (number[0]>number[2])
        printf("minimum element is:%d\n",number[2]);
        else
        printf("Minimum element is:%d\n",number[0]);
        }
    }
    else if(number[2]>number[1]&&number[0])
    {
        if (number[2]>number[0])
        {
        printf("Maximum element is:%d\n",number[2]);
        if (number[0]>number[1])
        printf("minimum element is:%d\n",number[1]);
        else
        printf("Minimum element is:%d\n",number[0]);
        }
    }
}