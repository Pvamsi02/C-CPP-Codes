#include<stdio.h>
struct student
{
    char name[10] ;
    float percentage ;
    int rollno;
};
void main( )
{
    struct student s[3];
    int i; //Declaring array of Structure variables
    printf ( "\nEnter names, rollno, & percentage 3 students\n" ) ;
    for(i=0;i<3;i++)
    scanf ( "%s %d %f", s[i].name, &s[i].rollno, &s[i].percentage ) ;
    printf ( "\nAnd this is what you entered\n" ) ;
    for(i=0;i<3;i++)
    printf( "%s %d %.2f\n", s[i].name, s[i].rollno, s[i].percentage ) ;
}