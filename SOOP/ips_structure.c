#include<stdio.h>
struct bmi
{
    float weight;
    float height;
};
float bmicalc(float w,float h)
{
    float r;
    h=h/100;
    h=h*h;
    r=w/h;
    return r;
}
void main()
{
    struct bmi p;
    float tot;
    scanf("%f",&p.weight);
    scanf("%f",&p.height);
    tot=bmicalc(p.weight,p.height);
    printf("%.1f",tot);
}