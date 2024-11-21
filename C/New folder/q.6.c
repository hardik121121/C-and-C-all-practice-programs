#include <stdio.h>
#define PI 3.14
int main()
{
    float a,diameter,area,circumfrence;
    printf("enter the radius of the circle:\n");
    scanf("%f",&a);
    diameter=a/2;
    area= PI*a*a;
    circumfrence=PI*2*a;
    printf("convert the radius into diameter :%f \n",diameter);
    printf("area of circle :%f \n",area);
    printf("circumfrence of circle:%f \n",circumfrence);
    return 0;
}