#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    c = pow(a, b);
    printf("The value of a^b is: %d", c); 
    return 0;
}