#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of base\n");
    scanf("%f",&a);
    printf("enter the value of height\n");
    scanf("%f",&b);
    c=a*b*1/2;
    printf("the area of triangle is %f",c);
    return 0;
}