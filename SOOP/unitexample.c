#include<stdio.h>
void main()
{
    int unit,total;
    scanf("%d",&unit);
    if (unit==-1)
    printf("error");
    else if (unit <500){
        total=(2*unit)+5;
        printf("%d",total);
    }
    else if (unit>500 && unit<1000)
    {
        unit= unit-500;
        total=(7*unit)+5+5;
        printf("%d",total);
    }
    else if (unit >1000)
    {
        unit=unit-1000;
        total=(5*unit)+5+8; 
        printf("%d",total);    
    }
        
}