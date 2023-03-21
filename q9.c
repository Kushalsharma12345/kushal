#include<stdio.h>
int main()
{
    float a;
    printf("enter the temperature in Fahrenheit:");
    
    scanf("%f",&a);
   
    printf("the temperature in celcius: %f",5.0/9.0*(a-32.0));
    return 0;  
}
