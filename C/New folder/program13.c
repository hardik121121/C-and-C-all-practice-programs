#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first angle\n");
    scanf("%d",&a);
    printf("enter the second angle\n");
    scanf("%d",&b);
    c=180-(a+b);
    printf("the third angle of triangle is %d",c);
    return 0;
}