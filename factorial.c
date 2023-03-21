#include <stdio.h>
int main()
{
    int i,n,m=1;
    scanf("%d",&n);
    do
     {
    m=m*n;
    n--;
    }while(n>=1);
    printf("%d",m);
}
 