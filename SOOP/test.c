#include <stdio.h>
#include <conio.h>
int main(void)
{
 int basic,empid;
 float net,hra,da;
 printf("Enter the employee ID:");
 scanf("\n %d",&empid);
 printf("\nEnter the Basic salary:");
 scanf("%d",&basic);
 hra=(0.12*basic);
 da=(0.18*basic);
 net=basic+hra+da;
 printf("\nThe net salary for the employee %d is %.2f ",empid,net);
 return(0); 
}