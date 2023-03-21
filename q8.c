#include<stdio.h>
int main()
{
    float a;
    printf("enter the temperature in celcius:");
    
    scanf("%f",&a);
   
    printf("the temperature in Fahrenheit: %f",(a*9.0/5.0)+32);
    return 0;  
}
