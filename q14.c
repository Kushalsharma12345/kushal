#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the base of triangle:");
    scanf("%f",&a);
    printf("enter the height of triangle:");
    scanf("%f",&b);
    c=0.5*a*b;
    printf("the area of triangle : %.2f sq.unit",c);
    return 0;
}
    