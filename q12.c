#include<stdio.h>
int main()
{
    float a,b;
    
    printf("enter the number:");
    scanf("%f",&a);
    if(a>0){
    
    b=sqrt(a);
    printf("the square root of %f : %f ",a,b);
    return 0;
    }
    else{
    printf("The number is less than 0 ,please enter a number greater than 0.");
    }
}