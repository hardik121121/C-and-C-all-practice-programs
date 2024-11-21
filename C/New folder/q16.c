
#include <stdio.h>

int main()
{
    float a,b,c,d,e,z,l,k;
    printf("Enter the 5 sub ject no:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    z=a+b+c+d+e;
    printf("total no. of student:%f \n",z);
    l=z/5;
    printf("the average of the student :%f \n",l);
    k=z*100/500;
    printf("the result is: %f \n",k);

    return 0;
}