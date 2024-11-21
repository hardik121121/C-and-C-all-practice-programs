#include <stdio.h>
#include <math.h>
int main()
{
    float a,area;
    printf("enter the side of the triangle :");
    scanf("%f",&a);
    area=(sqrt(3)/4)*pow(a,a);
    printf("arae of equilateral triangle : %f",area);
    return 0;
}