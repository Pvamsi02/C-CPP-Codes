#include<stdio.h>    
void main()  
{  
    int n,i,pos = 0,neg =0,even = 0, odd = 0, zero = 0;
    printf("Enter the number of values to be entered: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integer numbers:\n", n);  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &a[i]);  
        if(a[i] == 0)
            zero++; 
        else if(a[i] > 0)
        { 
            pos++;
            if(a[i] % 2 == 0)  
                even++;  
            else  
                odd++;
        }  
        else if(a[i]<0)
            neg++;   
    }  
  
    printf("Positive: %d\n", pos);  
    printf("Negative: %d\n", neg);  
    printf("Even: %d\n", even);  
    printf("Odd: %d\n", odd);  
    printf("Zero: %d\n", zero);    
}