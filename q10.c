#include<stdio.h>
int main()
{
    float a;
    printf("enter the number of days:");
    scanf("%f",&a);
    printf("the number of weeks are:%f weeks \n",a/7);
    printf("the number of months are:%f months \n",a/30);
    printf("the number of years are:%f years",a/365);
    return 0;
}