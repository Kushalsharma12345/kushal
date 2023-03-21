#include<stdio.h>
int main()
{
    int a;
    printf("enter the radius:");
    scanf("%d",&a);
    printf("the diameter is:%d \n",2*a);
    printf("the circumference is:%f \n",2*3.14*a);
    printf("the area is:%f \n",3.14*a*a);
}