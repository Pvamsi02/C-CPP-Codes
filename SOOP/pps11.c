#include<stdio.h>
#include<string.h>
struct serial
{
    char sno[4];
    int year;
    char material[20];
    int quantity;
};
void function(struct serial a[20])
{
    int i,n=0;
    char s[4];
    printf("Enter complete serial number(BB1 to CC9 are available) :");
    scanf("%s",&s);
    strupr(s);
    for (i=0;i<20;i++)
    {
        if(strcmp(s,a[i].sno)==0)
        {
            printf("\n\nPrinting the detalis regarding the serial number-%s",a[i].sno);
            printf("\nSerial Number:%s",a[i].sno);
            printf("\nYear of Manufacture:%d",a[i].year);
            printf("\nMaterial Used:%s",a[i].material);
            printf("\nQuantity Manufactured:%d",a[i].quantity);
            n++;
            break;
        }        
    }
    if (n==0)
    printf("\nWrong serial number entered please verify serial number again.");
}
void main()
{
    struct serial a[20]={
        {"BB1",2002,"iron",8},{"BB2",2003,"steel",9},{"BB3",2004,"metal",7},
        {"BB4",2005,"iron",10},{"BB5",2006,"steel",11},{"BB6",2007,"metal",5},
        {"BB7",2008,"iron",7},{"BB8",2009,"metal",15},{"BB9",2010,"metal",18},
        {"CC0",2011,"iron",19},{"CC1",2012,"steel",20},{"CC2",2013,"metal",22},
        {"CC3",2014,"iron",19},{"CC4",2015,"steel",21},{"CC5",2016,"metal",25},
        {"CC6",2017,"iron",28},{"CC7",2018,"metal",29},{"CC8",2019,"metal",30},{"CC9",2020,"iron",39}
    };
    function(a);  
}

