#include<stdio.h>
int main()
{
    int x,a,b,c,d,e,f,g,h,i,j;
    printf("enter the max marks of a subject :");
    scanf("%d",&x);
    printf("enter the marks in first subject :");
    scanf("%d",&a);
    printf("enter the marks in second subject :");
    scanf("%d",&b);
    printf("enter the marks in third subject :");
    scanf("%d",&c);
    printf("enter the marks in forth subject :");
    scanf("%d",&d);
    printf("enter the marks in fifth subject :");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    h=x*5;
    j=h/100;
    i=f/j;
    printf("the total marks : %d marks \n",f);
    printf("the average marks : %d marks \n",g);
    printf("the percentage of your marks : %d", "%",i);
    return 0;
}
    