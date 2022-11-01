#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    a=15;
    b=a/2;
    printf("%d\n",b);
    printf("%3d\n",b);
    printf("%03d\n",b);
    c=15.3;
    d=c/3;
    printf("%3.2f\n",d);
    printf("%f\n",d);
    printf("%3f\n",d);
    printf("this color :%s\n","blue");
    printf("first number is:%d\n",12345);
    printf("second number is: %04d\n",25);
    printf("third number is :%i\n",1234);
    printf("float number :%3.2f\n",3.14159);
    printf( "Hexadecimal: %x\n", 255) ;
    printf( "Octal: %o\n", 255) ;
    printf( "Unsigned value: %u\n", 150) ; 
    printf( "Just print the percentage sign %%\n", 10) ;
    printf(":%s: \n", "Hello, world!");
    printf(":%15s: \n","Hello, world!") ; 
    printf(":%. 10s: \n","Hello, world!"); 
    printf(":%-10s: \n","Hello, world!");
    printf(":%-15s: \n","Hello, world!");
    printf( ":%.15s: \n","Hello, world!");
    printf(":%15.10s: \n","Hello, world!") ;
    printf(":%-15.10s: \n","Hello, world!");
    printf("............................\n");
    char i='a';
    if(i)
    printf("yes");
    else
    printf("no");
    int x=2,y=5;
    if ((x==2)&&(y==5))
    printf("\nhi");
    printf("\nx is %d and y is %d\n",x,y);
    char p;
    int v;
    scanf ("%c",&p);
    v=(p>=65&&p<=90?1:0);
    printf("v=%d",v);
    return(0);
}


