
#include <stdio.h>

int main()
{
    float a,b,c;
    printf("enter the length in centemeter :\n");
    scanf("%f",&a);
    b=a/100;
    c=a/100000;
    printf("convert the length in meter :%f \n",b);
    printf("convert the length in kilometer :%f",c);
    return 0;
}