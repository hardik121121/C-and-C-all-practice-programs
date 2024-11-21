#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    printf("enter the marks in physics out of 100\n");
    scanf("%f",&a);
    printf("enter the marks in maths out of 100\n");
    scanf("%f",&b);
    printf("enter the marks in chemistry out of 100\n");
    scanf("%f",&c);
    printf("enter the marks in english out of 100\n");
    scanf("%f",&d);
    printf("enter the marks in biology out of 100\n");
    scanf("%f",&e);
    f=a+b+c+d+e;
    g=(a+b+c+d+e)/5;
    h=((a+b+c+d+e)/500)*100;
    printf("the total marks is %f\n",f);
    printf("the average of marks is %f\n",g);
    printf("the total percentage is %f\n",h);
    return 0;
}