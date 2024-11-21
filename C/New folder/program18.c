#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    printf("enter the principal amount\n");
    scanf("%d",&p);
    printf("enter the time in year\n");
    scanf("%d",&t);
printf("enter the rate \n");
scanf("%d",&r);
float k;
k=(1+r/100.0);
printf("the compound interest is:%g",p*pow(k,t));
return 0;
}