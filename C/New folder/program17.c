#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    printf("enter the principal amount\n");
    scanf("%d",&p);
    printf("enter the time in years\n");
    scanf("%d",&t);
    printf("enter the rate\n");
    scanf("%d",&r);
    printf("simple interest is%d",p*t*r/100);
    return 0;
}