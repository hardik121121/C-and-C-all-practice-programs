#include<stdio.h>
int main()
{
    float c;
    printf("enter the value of temp in fahrenheit\n");
    scanf("%f",&c);
    printf("the value if temp in celcius is %f",0.556*(c-32));
    return 0;
}