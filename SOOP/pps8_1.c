#include<stdio.h>
int add()
{
    printf("\nThe process you selected is addition\n");
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Addition of %d and %d is %d",a,b,a+b);
}
int multiply()
{
    printf("\nThe process you selected is multiplication\n");
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Multiplication of %d and %d is %d",a,b,a*b);
}
int reverse()
{
    int a,r,p=0;
    printf("\nThe process you selected is reversing numbers\n");
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        p=p*10+r;
        a=a/10;
    }
    printf("The reversed number is:%d",p);    
}
void main()
{
    char x;
    printf("Enter Choice:\n'+' for add\n'*'for multiplication\n'$'for reversing the numbers.\n");
    scanf("%c",&x);
    switch(x)
    {
        case '+':
        add();
        break;
        case '*':
        multiply();
        break;
        case '$':
        reverse();
        break;
        default:
        printf("Wrong input or process not declared");
        break;
    }
}