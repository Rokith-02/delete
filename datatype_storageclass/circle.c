#include<stdio.h>
#define pi 3.14
void area(float r)
{
        float area=pi*r*r;
        printf("area=%0.2f\n",area);
}
void circum(float r)
{
        float circum=2*pi*r;
        printf("circum=%0.2f\n",circum);
}
int main()
{
        float a;
        printf("enter the radius\n");
        scanf("%f",&a);
        area(a);
        circum(a);
}
