#include<stdio.h>
int main()
{
    float a,b,c,d,e,p,r,t,i;
    printf("enter principle : ");
    scanf("%f",&p);
    printf("enter rate : ");
    scanf("%f",&r);
    printf("enter time : ");
    scanf("%f",&t);
    b=1+r/100;
    c=pow(b,t);
    d=c*p;
    i=d-p;
    printf("the amount : %f \n",d);
    printf("the compound intrest : %f",i);
    return 0;
}
    
    
    
    