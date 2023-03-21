#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the base:");
    scanf("%f",&a);
    printf("enter the power:");
    scanf("%f",&b);
    c=pow(a,b);
    printf("the answer is:%f",c);
    return 0;
}