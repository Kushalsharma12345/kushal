#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first angle in degree:");
    scanf("%d",&a);
    printf("Enter the second angle in degree:");
    scanf("%d",&b);
    if(a!=0,b!=0)
    {
    c=180-a-b;
    printf("the value of third angle in degree:%d",c);
    }
    else{
    printf("An angle can't be zero, please enter non-zero value");
    }
    return 0;   
}