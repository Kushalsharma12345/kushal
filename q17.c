#include<stdio.h>
int main()
{
    int p,r,t,a;
    printf("enter the principle : ");
    scanf("%d",&p);
    printf("enter rate : ");
    scanf("%d",&r);
    printf("enter time : ");
    scanf("%d",&t);
    a=(p*r*t)/100;
    printf("the simple intrest : %d" ,a);
    return 0;
}
    