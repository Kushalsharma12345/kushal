#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the side of triangle:");
    scanf("%f",&a);
    b=pow(3,0.5);
    c=a*a*b/4;
    printf("the area of triangle : %.2f",c);
    return 0;
}